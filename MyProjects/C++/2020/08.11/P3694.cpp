//File: P3694.cpp
//Author: yanyanlongxia
//Date: 2020/8/12
//
#include <bits/stdc++.h>

using namespace std;
int n,m,maxn,dp[1<<20],sum[100005][25];
int main() {
    memset(dp,0x3f3f3f3f,sizeof(dp));
    scanf("%d%d",&n,&m);
    maxn=1<<m;
    int x;
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&x);
        for(int j=1;j<=m;j++)
            sum[i][j]=sum[i-1][j];
        sum[i][x]++;
    }
    dp[0]=0;
    for(int j=0;j<maxn;j++)
    {
        int last=0;
        for (int k=0;k<m;k++)
        {
            if((j>>k)&1)
                last+=sum[n][k+1];
        }
        for (int k=0;k<m;k++)
            if(!((j>>k)&1))
            {
                int l=last,r=last+sum[n][k+1];
                dp[j ^ (1<<k)]=min(dp[j ^ (1<<k)],dp[j]+r-l-(sum[r][k+1]-sum[l][k+1]));
            }
    }
    printf("%d\n",dp[maxn-1]);
    return 0;
}