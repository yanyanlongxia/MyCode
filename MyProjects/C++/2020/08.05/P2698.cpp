//File: P2698.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//[USACO12MAR]Flowerpot S
#include <bits/stdc++.h>
#define N 1000005
using namespace std;
int n,d,maxzb,stmin[N][21],stmax[N][21];
int query(int l,int r) {
    int t = log2(r - l + 1);
    int maxn = max(stmax[l][t], stmax[r - (1 << t) + 1][t]);
    int minn = min(stmin[l][t], stmin[r - (1 << t) + 1][t]);
    return maxn - minn;
}
bool check(int x) {
    for (int i = 1; i <= maxzb - x; i++) {
        int to = i + x;
        if (query(i, to) >= d)
            return true;
    }
    return false;
}
signed main() {
    scanf("%d%d", &n, &d);
    memset(stmin, 0x3f3f3f3f, sizeof(stmin));
    for (int x, y, i = 1; i <= n; i++) {
        scanf("%d%d", &x, &y);
        maxzb = max(maxzb, x);
        stmax[x][0] = max(stmax[x][0], y);
        stmin[x][0] = min(stmin[x][0], y);
    }
    int t = log2(maxzb);
    for (int j = 1; j <= t; j++) {
        for (int i = 1; i <= maxzb - (1 << j) + 1; i++) {
            stmax[i][j] = max(stmax[i][j - 1], stmax[i + (1 << j - 1)][j - 1]);
            stmin[i][j] = min(stmin[i][j - 1], stmin[i + (1 << j - 1)][j - 1]);
        }
    }
    int l = 1, r = maxzb;
    int ans = -1;
    while (l <= r) {
        int mid = l + r >> 1;
        if (check(mid)) ans = mid, r = mid - 1;
        else l = mid + 1;
    }
    printf("%d\n", ans);
    return 0;
}