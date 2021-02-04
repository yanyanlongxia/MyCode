//File: T133471.cpp
//Author: yanyanlongxia
//Date: 2020/8/4
//
#include <bits/stdc++.h>

using namespace std;
int n,a[100005],b[100005];
struct segmtree {
    int l, r, minn;
}dp[1000005];
void build(int p,int l,int r) {
    dp[p].l = l;
    dp[p].r = r;
    if (l == r) {
        dp[p].minn = 0x3f3f3f3f;
        return;
    }
    int mid = (l + r) / 2;
    build(p * 2, l, mid);
    build(p * 2 + 1, mid + 1, r);
    dp[p].minn = 0x3f3f3f3f;
}
void change(int p,int ind,int k) {
    if (dp[p].l == dp[p].r) {
        dp[p].minn = min(dp[p].minn, k);
        return;
    }
    int mid = (dp[p].l + dp[p].r) / 2;
    if (ind <= mid)
        change(p * 2, ind, k);
    else
        change(p * 2 + 1, ind, k);
    dp[p].minn = min(dp[p * 2].minn, dp[p * 2 + 1].minn);
}
int ask(int p,int l,int r) {
    if (l <= dp[p].l && dp[p].r <= r)
        return dp[p].minn;
    int mid = (dp[p].l + dp[p].r) / 2;
    int val = 0x3f3f3f3f;
    if (l <= mid)
        val = min(val, ask(p * 2, l, r));
    if (r > mid)
        val = min(val, ask(p * 2 + 1, l, r));
    return val;
}
int main() {
    scanf("%d", &n);
    build(1, 1, n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &b[i]);
    }
    change(1, 0, 0);
    for (int i = 1; i <= n; ++i) {
        change(1, i, ask(1, a[i], i - 1) + 2 * b[i]);
    }
    printf("%d\n", ask(1, n, n)-b[n]);
    return 0;
}