//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
int t,n,m,pr[1500][1500]/*第i天第j件物品价格*/,dp[15000];
int main()
{
    cin>>t>>n>>m;
    for(int i=1;i<=t;i++)
        for(int j=1;j<=n;j++)
            cin>>pr[i][j];
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