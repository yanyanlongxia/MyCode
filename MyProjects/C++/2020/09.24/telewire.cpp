//File: telewire.cpp
//Author: yanyanlongxia
//Date: 2020/9/27
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1000005],c,m,dp[100005][105],ans=0x3f3f3f3f;
signed main() {
    freopen("telewire.in","r",stdin);
    freopen("telewire.out","w",stdout);
    scanf("%lld%lld", &n, &c);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        m = max(m, a[i]);
    }
    memset(dp, 0x3f3f3f3f, sizeof(dp));
    for (int i = a[1]; i <= m; i++)
        dp[1][i] = (i - a[1]) * (i - a[1]);
    for (int i = 2; i <= n; i++) {
        int yylx = 0x3f3f3f3f;
        for (int j = a[i - 1]; j <= m; j++) {
            yylx = min(yylx, dp[i - 1][j] - j * c);
            if (j >= a[i])
                dp[i][j] = yylx + (j - a[i]) * (j - a[i]) + j * c;
        }
        yylx = 0x3f3f3f3f;
        for (int j = m; j >= a[i]; j--) {
            yylx = min(yylx, dp[i - 1][j] + j * c);
            dp[i][j] = min(dp[i][j], yylx + (j - a[i]) * (j - a[i]) - c * j);
        }
    }
    for (int i = 0; i <= m; i++)
        ans = min(ans, dp[n][i]);
    printf("%lld\n", ans);
    return 0;
}
