//
// Created by admin on 2020/7/14.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,lose[1500],win[1500],w[1500],dp[1500];
signed main()
{
    cin>>n>>m;
    for (int i = 1; i<= n; ++i) {
        scanf("%lld%lld%lld",&lose[i],&win[i],&w[i]);
    }
    for (int i = 1; i <= n; ++i) {
        for(int j=m;j>=w[i];j--)
            dp[j]=max(dp[j]+lose[i],dp[j-w[i]]+win[i]);
        for(int j=w[i]-1;j>=0;j--)
            dp[j]+=lose[i];
    }
    printf("%lld",5ll*dp[m]);
    return 0;
}
