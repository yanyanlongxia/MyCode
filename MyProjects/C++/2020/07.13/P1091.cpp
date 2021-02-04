//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
int dp[1000][2]/*dp[i][0]是i后（包括i）的最长下降子序列，dp[i][1]是i前（包括i）的最长上升子序列*/,a[1000],ans=-1,n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i][0]=dp[i][1]=1;
    }
    for(int i=n-1;i>=1;i--)
        for(int j=i+1;j<=n;j++)
            if(a[j]<a[i])
                dp[i][0]=max(dp[i][0],dp[j][0]+1);//求出最长下降子序列
    for(int i=2;i<=n;i++)
        for(int j=1;j<i;j++)
            if(a[i]>a[j])
                dp[i][1]=max(dp[i][1],dp[j][1]+1);
    for(int i=1;i<=n;i++)
        ans=max(ans,dp[i][0]+dp[i][1]-1);
    cout<<n-ans<<endl;
    return 0;
}
