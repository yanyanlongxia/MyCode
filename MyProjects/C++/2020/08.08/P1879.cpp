//File: P1879.cpp
//Author: yanyanlongxia
//Date: 2020/8/10
//[USACO06NOV]Corn Fields G
#include <bits/stdc++.h>

using namespace std;
const int mo=1e8;
int n,m,maxn,field[13],dp[13][9000],ans;
bool possi[9000];
int main() {
    int x;
    scanf("%d%d", &m, &n);
    maxn = 1 << n;
    dp[0][0] = 1;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &x);
            field[i] = (field[i] << 1) + x;
        }
    for (int i = 0; i < maxn; i++)
        if (!(i & (i << 1)) && !(i & (i >> 1)))
            possi[i] = true;
    for (int i = 1; i <= m; i++)
        for (int j = 0; j < maxn; j++) {
            if (possi[j] && ((j & field[i]) == j))
                for (int k = 0; k < maxn; k++)
                    if (!(k & j))
                        dp[i][j] = (dp[i][j] + dp[i - 1][k]) % mo;
        }
    for (int i = 0; i < maxn; i++)
        ans = (ans + dp[m][i]) % mo;
    printf("%d\n", ans);
    return 0;
}