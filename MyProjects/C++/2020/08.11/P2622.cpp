//File: P2622.cpp
//Author: yanyanlongxia
//Date: 2020/8/12
//
#include <bits/stdc++.h>

using namespace std;
int n,m,dp[1024],a[101][101],maxn,ans;
int main() {
    memset(dp,0x3f3f3f3f,sizeof(dp));
    scanf("%d%d",&n,&m);
    maxn=1<<n;
    dp[maxn-1]=0;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    for (int i=maxn-1;i>=0;i--)
        for (int j = 1; j <= m; ++j) {
            int now=i;
            for (int k=0;k<n;k++)
            {
                if(a[j][k+1]==1 && (i & (1<<k)))
                    now=now ^ (1<<k);
                if(a[j][k+1]==-1 && !(i & (1<<k)))
                    now=now ^ (1<<k);
            }
            dp[now]=min(dp[now],dp[i]+1);
        }
    if(dp[0]==0x3f3f3f3f)
    {
        puts("-1");
        return 0;
    }
    printf("%d\n",dp[0]);
    return 0;
}