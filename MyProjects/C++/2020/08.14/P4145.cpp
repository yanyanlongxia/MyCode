//File: P4145.cpp
//Author: yanyanlongxia
//Date: 2020/8/15
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,q,a[100005];
struct segment
{
    int l,r,sum,maxn;
}t[1000005];
void build(int p,int l,int r) {
    t[p].l = l;
    t[p].r = r;
    if (l == r) {
        t[p].sum = t[p].maxn = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(p << 1, l, mid);
    build(p << 1 | 1, mid + 1, r);
    t[p].sum = t[p << 1].sum + t[p << 1 | 1].sum;
    t[p].maxn = max(t[p << 1].maxn, t[p << 1 | 1].maxn);
}
void change(int p,int l,int r) {
    if (t[p].l == t[p].r) {
        t[p].sum = sqrt(t[p].sum);
        t[p].maxn = t[p].sum;
        return;
    }
    int mid = (t[p].l + t[p].r) >> 1;
    if (l <= mid && t[p << 1].maxn > 1)
        change(p << 1, l, r);
    if (mid < r && t[p << 1 | 1].maxn > 1)
        change(p << 1 | 1, l, r);
    t[p].sum = t[p << 1].sum + t[p << 1 | 1].sum;
    t[p].maxn = max(t[p << 1].maxn, t[p << 1 | 1].maxn);
}
int ask(int p,int l,int r) {
    if (l <= t[p].l && t[p].r <= r) {
        return t[p].sum;
    }
    int mid = (t[p].l + t[p].r) >> 1, res = 0;
    if (l <= mid)
        res += ask(p << 1, l, r);
    if (r > mid)
        res += ask(p << 1 | 1, l, r);
    return res;
}
signed main() {
    int opt, x, y;
    scanf("%lld", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    build(1, 1, n);
    scanf("%lld", &q);
    for (int i = 1; i <= q; ++i) {
        scanf("%lld%lld%lld", &opt, &x, &y);
        if (x > y)
            swap(x, y);
        if (opt == 0)
            change(1, x, y);
        else
            printf("%lld\n", ask(1, x, y));
    }
    return 0;
}
