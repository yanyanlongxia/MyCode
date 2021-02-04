//File: P3373.cpp
//Author: yanyanlongxia
//Date: 2020/8/14
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
struct segment
{
    int l,r,sum,mtag,atag;//乘法记号，加法记号
}t[8000000];
int n,m,mo,a[1000000];
void build(int p,int l,int r) {
    t[p].l = l;
    t[p].r = r;
    t[p].mtag = 1;
    t[p].atag=0;
    if (l == r) {
        t[p].sum = a[l] % mo;
        return;
    }
    int mid = (l + r) >> 1;
    build(p << 1, l, mid);
    build(p << 1 | 1, mid + 1, r);
    t[p].sum = (t[p << 1].sum + t[p << 1 | 1].sum) % mo;
}
void spread(int p) {
    if (t[p].mtag != 1 || t[p].atag) {
        int mid = t[p].l + t[p].r >> 1;
        t[p << 1].sum = (t[p << 1].sum * t[p].mtag + t[p].atag * (mid - t[p].l + 1)) % mo;
        t[p << 1 | 1].sum = (t[p << 1 | 1].sum * t[p].mtag + t[p].atag * (t[p].r - mid)) % mo;
        t[p << 1].mtag = (t[p << 1].mtag * t[p].mtag) % mo;
        t[p << 1 | 1].mtag = (t[p << 1 | 1].mtag * t[p].mtag) % mo;
        t[p << 1].atag = (t[p << 1].atag * t[p].mtag + t[p].atag) % mo;
        t[p << 1 | 1].atag = (t[p << 1 | 1].atag * t[p].mtag + t[p].atag) % mo;
        t[p].atag = 0;
        t[p].mtag = 1;
    }
}
void mul(int p,int l,int r,int k) {
    if (l <= t[p].l && r >= t[p].r) {
        t[p].sum = (t[p].sum * k) % mo;
        t[p].mtag = (t[p].mtag * k) % mo;
        t[p].atag = (t[p].atag * k) % mo;
        return;
    }
    spread(p);
    int mid = t[p].l + t[p].r >> 1;
    if (l <= mid)
        mul(p << 1, l, r, k);
    if (r > mid)
        mul(p << 1 | 1, l, r, k);
    t[p].sum = (t[p << 1].sum + t[p << 1 | 1].sum) % mo;
}
void add(int p,int l,int r,int k) {
    if (l <= t[p].l && r >= t[p].r) {
        t[p].sum = (t[p].sum + k * (t[p].r - t[p].l + 1)) % mo;
        t[p].atag = (t[p].atag + k) % mo;
        return;
    }
    spread(p);
    int mid = t[p].l + t[p].r >> 1;
    if (l <= mid)
        add(p << 1, l, r, k);
    if (r > mid)
        add(p << 1 | 1, l, r, k);
    t[p].sum = (t[p << 1].sum + t[p << 1 | 1].sum) % mo;
}
int ask(int p,int l,int r) {
    if (l <= t[p].l && t[p].r <= r) {
        return t[p].sum % mo;
    }
    spread(p);
    int res = 0, mid = t[p].l + t[p].r >> 1;
    if (l <= mid)
        res = (res + ask(p << 1, l, r)) % mo;
    if (mid < r)
        res = (res + ask(p << 1 | 1, l, r)) % mo;
    return res % mo;
}
signed main() {
    int opt, x, y, k;
    scanf("%lld%lld%lld", &n, &m, &mo);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    build(1, 1, n);
    for (int i = 1; i <= m; ++i) {
        scanf("%lld", &opt);
        if (opt == 1) {
            scanf("%lld%lld%lld", &x, &y, &k);
            mul(1, x, y, k);
        }
        if (opt == 2) {
            scanf("%lld%lld%lld", &x, &y, &k);
            add(1, x, y, k);
        }
        if (opt == 3) {
            scanf("%lld%lld", &x, &y);
            printf("%lld\n", ask(1, x, y));
        }
    }
    return 0;
}
