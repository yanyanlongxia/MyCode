//File: P2458.cpp
//Author: yanyanlongxia
//Date: 2020/8/7
//[SDOI2006]保安站岗
#include <bits/stdc++.h>

using namespace std;
int n,dp[100005][3],p[100005];
vector<int>son[100005];
void dfs(int x,int fa) {
    dp[x][0] = p[x];
    dp[x][2] = 0x3f3f3f3f;
    for (int i = 0; i < son[x].size(); i++) {
        int y = son[x][i];
        if (y == fa)
            continue;
        dfs(y, x);
        dp[x][1] += min(dp[y][0], dp[y][2]);
        dp[x][0] += min(dp[y][0], min(dp[y][1], dp[y][2]));
    }
    for (int i = 0; i < son[x].size(); i++) {
        int y = son[x][i];
        if (y == fa)
            continue;
        dp[x][2] = min(dp[x][2], dp[x][1] - min(dp[y][0], dp[y][2]) + dp[y][0]);
    }
}
int main() {
    scanf("%d", &n);
    int x, y, z;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        scanf("%d%d", &p[x], &y);
        for (int j = 1; j <= y; ++j) {
            scanf("%d", &z);
            son[x].push_back(z);
            son[z].push_back(x);
        }
    }
    dfs(1, 0);
    printf("%d\n", min(dp[1][0], dp[1][2]));
    return 0;
}