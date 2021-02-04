//
// Created by admin on 2020/7/19.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mo=1000000007;
int n,p[1500000],dp[1500000];
signed main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%lld",&p[i]);
    for(int i=1;i<=n;i++)
        dp[i+1]=(dp[i]+dp[i]-dp[p[i]]+2)%mo;
    cout<<(dp[n+1]+mo)%mo<<endl;
    return 0;
}
