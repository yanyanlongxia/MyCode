//File: P4933.cpp
//Author: yanyanlongxia
//Date: 2020/8/4
//
#include <bits/stdc++.h>
#define int long long
#define mo 998244353
using namespace std;
int n,dp[1005][40005],h[10000],maxh,ans;
signed main() {
    scanf("%lld",&n);
    for(int i=1;i<=n;i++) {
        scanf("%lld", &h[i]);
        maxh=max(maxh,h[i]);
    }
    for(int i=2;i<=n;i++)
        for (int j = 1; j < i; ++j) {
            dp[i][h[i] - h[j] + maxh] = (dp[i][h[i] - h[j] + maxh] + dp[j][h[i] - h[j] + maxh] + 1) % mo;
            ans = (ans + dp[j][h[i] - h[j] + maxh] + 1) % mo;
        }
    ans=(ans+n)%mo;
    printf("%lld\n",ans);
    return 0;
}