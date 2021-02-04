//File: P1240.cpp
//Author: yanyanlongxia
//Date: 2020/9/22
//
#include <bits/stdc++.h>
#define mo 504
using namespace std;
int n,k,dp[200][20000],len[200];
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i <= 2 * n - 1; i++)
        dp[i][0] = 1;
    for (int i = 1; i <= 2 * n - 1; i++) {
        if (i % 2==0)
            len[i] = i - 1;
        else
            len[i] = i;
    }
    for (int i = 1; i <= 2 * n - 1; i++)
        for (int j = 1; j <= len[i]; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1] * (len[i] - j + 1);
            dp[i][j] %= mo;
        }
    printf("%d\n", dp[2 * n - 1][k]);
    return 0;
}
