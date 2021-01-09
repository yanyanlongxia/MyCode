//
// Created by admin on 2020/7/20.
//
#include <bits/stdc++.h>
using namespace std;
int dp[2005][2005]/*dp[i][j]表示还剩i个没取,前一个人去了j个时,本次能取得钱的最大值*/,sum[2005],n,c[2005];
int main()
{
    cin>>n;
    for(int i=n;i>=1;i--)
        scanf("%d",&c[i]);
    for(int i=1;i<=n;i++)
        sum[i]=sum[i-1]+c[i]; //求逆序前缀和
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=dp[i][j-1];  //转移的完全包含
            int k=2*j-1;
            if(k<=i)
                dp[i][j]=max(dp[i][j],sum[i]-dp[i-k][k]),k++;//新增状态1
            if(k<=i)
                dp[i][j]=max(dp[i][j],sum[i]-dp[i-k][k]);//新增状态2
        }
    cout<<dp[n][1]<<endl;
    return 0;
}