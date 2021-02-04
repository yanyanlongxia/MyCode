//
// Created by admin on 2020/7/31.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,dp[2600][2],w[2600];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        scanf("%d",&w[i]);
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
        for(int j=m;j>=w[i];j--)
            dp[j][0]=(dp[j-w[i]][0]+dp[j][0]+10)%10;
    for(int i=1;i<=n;i++)
    {
        dp[0][1]=1;
        for(int j=1;j<=m;j++)
        {
            if(w[i]>j)
                dp[j][1]=dp[j][0];
            else
                dp[j][1]=(dp[j][0]-dp[j-w[i]][1]+10)%10;
            cout<<dp[j][1];
        }
        cout<<endl;
    }
    return 0;
}
