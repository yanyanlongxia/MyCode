//File: SP6779.cpp
//Author: yanyanlongxia
//Date: 2020/8/20
//
#include <bits/stdc++.h>

using namespace std;
int n,m,tot,a[1000005],head[1000005],ver[1000005],nxt[1000005],sz[1000005],top[1000005],son[1000005],depth[1000005],fat[1000005];
struct segment {
    int l, r, sum, lmax, rmax, dat, tag;
    segment() {
        l = r = sum = lmax = rmax = dat = 0;
        tag = 0x3f3f3f3f;
    }
}t[8000005];
void add(int x,int y) {
    ver[++tot] = y;
    nxt[tot] = head[x];
    head[x] = tot;
}
void dfs1(int x,int fa) {
    sz[x] = 1;
    depth[x] = depth[fa] + 1;
    fat[x] = fa;
    for (int i = head[x]; i; i = nxt[i]) {
        int y = ver[i];
        if (y == fa)
            continue;
        dfs1(y, x);
        sz[x] += sz[y];
        if (sz[y] > sz[son[x]])
            son[x] = y;
    }
}
int dft,dfn[1000005],rk[1000005];
void dfs2(int x,int to) {
    top[x] = to;
    dfn[x] = ++dft;
    rk[dft] = x;
    if (!son[x])
        return;
    dfs2(son[x], to);
    for (int i = head[x]; i; i = nxt[i]) {
        int y = ver[i];
        if (y == fat[x] || y == son[x])
            continue;
        dfs2(y, y);
    }
}
inline segment update(segment p,segment q) {
    segment ans;
    ans.sum = p.sum + q.sum;
    ans.lmax = max(p.lmax, p.sum + q.lmax);
    ans.rmax = max(q.rmax, q.sum + p.rmax);
    ans.dat = max(p.dat, max(q.dat, p.rmax + q.lmax));
    ans.l = p.l;
    ans.r = q.r;
    return ans;
}
void build(int p,int l,int r) {
    //t[p].l=l;t[p].r=r;
    if (l == r) {
        t[p].sum =a[rk[l]];
        t[p].lmax = t[p].rmax = t[p].dat = max(a[rk[l]],0);
        t[p].l = l;
        t[p].r = r;
        return;
    }
    int mid = l + r >> 1;
    build(p << 1, l, mid);
    build(p << 1 | 1, mid + 1, r);
    t[p] = update(t[p << 1], t[p << 1 | 1]);
    //t[p].l=l;t[p].r=r;
}
inline void spread(int p) {
    if (t[p].tag != 0x3f3f3f3f) {
        t[p << 1].sum = (t[p << 1].r - t[p << 1].l + 1) * t[p].tag;
        t[p << 1].lmax = t[p << 1].rmax = t[p << 1].dat = max(t[p << 1].sum, 0);
        t[p << 1 | 1].sum = (t[p << 1 | 1].r - t[p << 1 | 1].l + 1) * t[p].tag;
        t[p << 1 | 1].lmax = t[p << 1 | 1].rmax = t[p << 1 | 1].dat = max(t[p << 1 | 1].sum, 0);
        t[p << 1].tag = t[p].tag;
        t[p << 1 | 1].tag = t[p].tag;
        t[p].tag = 0x3f3f3f3f;
    }
}
void change(int p,int l,int r,int val) {
    if (l <= t[p].l && t[p].r <= r) {
        t[p].sum = (t[p].r - t[p].l) * val;
        t[p].lmax = max(t[p].sum, 0);
        t[p].rmax = max(t[p].sum, 0);
        t[p].dat = max(t[p].sum, 0);
        t[p].tag = val;
        return;
    }
    spread(p);
    int mid = t[p].l + t[p].r >> 1;
    if (l <= mid)
        change(p << 1, l, r, val);
    if (r > mid)
        change(p << 1 | 1, l, r, val);
    t[p] = update(t[p << 1], t[p << 1 | 1]);
}
segment ask(int p,int l,int r) {
    if (l <= t[p].l && t[p].r <= r) {
        return t[p];
    }
    spread(p);
    int mid = (t[p].l + t[p].r) >> 1;
    if (r <= mid)
        return ask(p << 1, l, r);
    if (l > mid)
        return ask(p << 1 | 1, l, r);
    return update(ask(p << 1, l, r), ask(p << 1 | 1, l, r));
}
inline void modify(int x,int y,int z) {
    while (top[x] != top[y]) {
        if (depth[top[x]] < depth[top[y]])
            swap(x, y);
        change(1, dfn[top[x]], dfn[x], z);
        x = fat[top[x]];
    }
    if (dfn[x] < dfn[y])
        swap(x, y);
    change(1, dfn[y], dfn[x], z);
}
inline int query(int x,int y) {
    segment lastx, lasty;
    while (top[x] != top[y]) {
        if (depth[top[x]] > depth[top[y]]) {
            lastx = update(lastx, ask(1, dfn[top[x]], dfn[x]));
            x = fat[top[x]];
        } else {
            lasty = update(lasty, ask(1, dfn[top[y]], dfn[y]));
            y = fat[top[y]];
        }
    }
    if (depth[x] > depth[y])
        lastx = update(lastx, ask(1, dfn[y], dfn[x]));
    else
        lasty = update(lasty, ask(1, dfn[x], dfn[y]));
    swap(lasty.rmax, lasty.lmax);
    return update(lastx, lasty).dat;
}
int main() {
    int x, y, opt, z;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++) {
        scanf("%d%d", &x, &y);
        add(x, y);
        add(y, x);
    }
    dfs1(1, 0);
    dfs2(1, 1);
    build(1, 1, n);
    scanf("%d", &m);
    while (m--) {
        scanf("%d", &opt);
        if (opt == 1) {
            scanf("%d%d", &x, &y);
            printf("%d\n", query(x, y));
        } else {
            scanf("%d%d%d", &x, &y, &z);
            modify(x, y, z);
        }
    }
    return 0;
}