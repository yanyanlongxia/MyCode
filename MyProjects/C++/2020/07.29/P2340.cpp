//
// Created by admin on 2020/7/31.
//
#include <bits/stdc++.h>
using namespace std;
const int maxn=400000;
int n,dp[maxn<<1 | 1],z[450],q[450],ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%d%d",&z[i],&q[i]);
    memset(dp,0xcf,sizeof(dp));
    dp[maxn]=0;
    for(int i=1;i<=n;i++)
    {
        if(z[i]>=0)
            for(int j=maxn<<1;j>=z[i];j--)
                dp[j]=max(dp[j],dp[j-z[i]]+q[i]);
        else
            for(int j=0;j<=(maxn<<1)+z[i];j++)
                dp[j]=max(dp[j],dp[j-z[i]]+q[i]);
    }
    for(int i=maxn;i<=maxn<<1;i++)
        if(dp[i]>=0)
            ans=max(ans,dp[i]+i-maxn);
    printf("%d\n",ans);
    return 0;
}