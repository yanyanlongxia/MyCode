//File: P3399.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>

using namespace std;
int n,m,d[10005],c[10005],dp[1005][1005],ans=0x3f3f3f3f;
int main() {
    //for (int i=0;i<=m;i++)
    //    dp[0][i]=0;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
        scanf("%d",&d[i]);
    for (int i=1;i<=m;i++)
        scanf("%d",&c[i]);
    for (int i=1;i<=n;i++)
    {
        dp[i][i]=dp[i-1][i-1]+d[i]*c[i];
        for (int j=i+1;j<=m;j++)
            dp[i][j]=min(dp[i][j-1],dp[i-1][j-1]+d[i]*c[j]);
    }
    for (int i=n;i<=m;i++)
        ans=min(ans,dp[n][i]);
    printf("%d\n",ans);
    return 0;
}
