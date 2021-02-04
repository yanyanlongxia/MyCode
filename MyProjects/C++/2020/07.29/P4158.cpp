//
// Created by admin on 2020/7/30.
//
#include <bits/stdc++.h>
using namespace std;
int dp[100][2501],pa[100][2501][51],sum[100][2501],n,m,t,ans;
string s;
int main()
{
    scanf("%d%d%d",&n,&m,&t);
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        for(int j=0;j<s.size();j++)
        {
            sum[i][j+1]=sum[i][j];
            if(s[j]=='1')
                sum[i][j+1]++;
        }
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            for(int k=j;k<=m;k++)
                for(int q=j-1;q<k;q++)
                    pa[i][j][k]=max(pa[i][j][k],pa[i][j-1][q]+max(sum[i][k]-sum[i][q],k-q-sum[i][k]+sum[i][q]));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=t;j++)
            for(int k=1;k<=min(j,m);k++)
                dp[i][j]=max(dp[i][j],dp[i-1][j-k]+pa[i][k][m]);
    for(int i=1;i<=t;i++)
        ans=max(ans,dp[n][i]);
    printf("%d\n",ans);
    return 0;
}