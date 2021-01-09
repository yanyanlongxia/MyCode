//
// Created by admin on 2020/7/17.
//
//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,m,pr[1500][1500]/*第i天第j件物品价格*/,dp[550000];
signed main()
{
    cin>>n>>t>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=t;j++)
            cin>>pr[j][i];
    for(int i=1;i<t;i++)
    {
        memset(dp,0,sizeof(dp));
        for(int j=1;j<=n;j++)
            for(int k=pr[i][j];k<=m;k++)
                dp[k]=max(dp[k],dp[k-pr[i][j]]+pr[i+1][j]-pr[i][j]);
        m=max(m,dp[m]+m);
    }
    cout<<m<<endl;
    return 0;
}
