//
// Created by admin on 2020/6/26.
//
#include <bits/stdc++.h>
using namespace std;
int s[1100],w[1100],dp[1001][101],n,m;
int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i]>>w[i];
    for(int i=1;i<=n;i++)
        for(int j=m;j>=0;j--)
            if (j>=s[i])
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-s[i]]+w[i]);
            else
                dp[i][j]=dp[i-1][j];
    cout<<dp[n][m]<<endl;
    return 0;
}
