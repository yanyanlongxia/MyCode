//
// Created by admin on 2020/7/23.
//
#include<bits/stdc++.h>
using namespace std;
const int N = 500006, INF = 0x3f3f3f3f;
int n, m, a[N];
struct T {
    int l, r, s, lx, rx, ans,add;
} t[N*4];
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}

void build(int p, int l, int r) {
    t[p].l = l;
    t[p].r = r;
    if (l == r) {
        t[p].s = t[p].lx = t[p].rx = t[p].ans = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(p << 1, l, mid);
    build(p << 1 | 1, mid + 1, r);
    t[p].s = t[p<<1].s + t[p<<1|1].s;
    t[p].lx = max(t[p<<1].lx, t[p<<1].s + t[p<<1|1].lx);
    t[p].rx = max(t[p<<1|1].rx, t[p<<1].rx + t[p<<1|1].s);
    t[p].ans = max(max(t[p<<1].ans, t[p<<1|1].ans), t[p<<1].rx + t[p<<1|1].lx);
}
void change(int p, int x, int y) {
    if (t[p].l == t[p].r) {
        t[p].s = t[p].lx = t[p].rx = t[p].ans = y;
        return;
    }
    int mid = (t[p].l + t[p].r) >> 1;
    if (x <= mid) change(p << 1, x, y);
    else change(p << 1 | 1, x, y);
    t[p].s = t[p<<1].s + t[p<<1|1].s;
    t[p].lx = max(t[p<<1].lx, t[p<<1].s + t[p<<1|1].lx);
    t[p].rx = max(t[p<<1|1].rx, t[p<<1].rx + t[p<<1|1].s);
    t[p].ans = max(max(t[p<<1].ans, t[p<<1|1].ans), t[p<<1].rx + t[p<<1|1].lx);
}
T ask(int p, int l, int r) {
    if (l <= t[p].l && r >= t[p].r) return t[p];
    T a, b, ans;
    a.s = a.lx = a.rx = a.ans = b.s = b.lx = b.rx = b.ans = -INF;
    ans.s = 0;
    int mid = (t[p].l + t[p].r) >> 1;
    if (l <= mid) {
        a = ask(p << 1, l, r);
        ans.s += a.s;
    }
    if (r > mid) {
        b = ask(p << 1 | 1, l, r);
        ans.s += b.s;
    }
    ans.ans = max(max(a.ans, b.ans), a.rx + b.lx);
    ans.lx = max(a.lx, a.s + b.lx);
    ans.rx = max(b.rx, b.s + a.rx);
    if (l > mid) ans.lx = max(ans.lx, b.lx);
    if (r <= mid) ans.rx = max(ans.rx, a.rx);
    return ans;
}
int main() {
    n=read();
    for (int i = 1; i <= n; i++) a[i]=read();
    m=read();
    build(1, 1, n);
    while (m--) {
        int t, x, y;
        t=read();x=read();y=read();
        if (t == 1) {
            if (x > y)
                swap(x, y);
            printf("%d\n",ask(1, x, y).ans);
        }
        else change(1, x, y);
    }
    return 0;
}
