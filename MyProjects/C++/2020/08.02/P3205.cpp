//File: P3205.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//
#include <bits/stdc++.h>
#define mo 19650827
using namespace std;
int n,h[1005],dp[1005][1005][2],ans;
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &h[i]);
    for (int i = 1; i <= n; i++)
        dp[i][i][0] = 1;
    for (int len = 2; len <= n; len++)
        for (int l = 1, r; l <= n - len + 1; l++) {
            r = l + len - 1;
            if (h[l] < h[l + 1])
                dp[l][r][0] += dp[l + 1][r][0];
            if (h[l] < h[r]) {
                dp[l][r][0] += dp[l + 1][r][1];
                dp[l][r][1] += dp[l][r - 1][0];
            }
            if (h[r] > h[r - 1])
                dp[l][r][1] += dp[l][r - 1][1];
            dp[l][r][1] %= mo;
            dp[l][r][0] %= mo;
        }
    ans = (dp[1][n][0] + dp[1][n][1]) % mo;
    printf("%d\n", ans);
    return 0;
}