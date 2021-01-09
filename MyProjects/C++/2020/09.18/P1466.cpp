//File: P1466.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,need,dp[1005];
signed main() {
    scanf("%lld",&n);
    need=((n+1)*n)/2;
    if (need%2==1)
    {
        puts("0");
        return 0;
    }
    need/=2;
    dp[0]=1;
    for (int i=1;i<=n;i++)
        for (int j=need;j>=i;j--)
            dp[j]+=dp[j-i];
    printf("%lld\n",dp[need]/2);
    return 0;
}
