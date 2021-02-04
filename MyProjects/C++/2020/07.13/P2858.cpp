//
// Created by admin on 2020/7/16.
//
#include <bits/stdc++.h>
using namespace std;
int n,v[2500],dp[2500][2500],ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
        dp[i][i]=v[i]*n;
    for(int len=1;len<=n;len++)
        for(int l=1;l+len-1<=n;l++)
        {
            int r=l+len-1; int tm=n-len+1;
            dp[l][r]=max(dp[l+1][r]+tm*v[l],dp[l][r-1]+tm*v[r]);
        }
    cout<<dp[1][n]<<endl;
    return 0;
}
