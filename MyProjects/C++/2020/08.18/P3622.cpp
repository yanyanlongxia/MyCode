//File: P3622.cpp
//Author: yanyanlongxia
//Date: 2020/8/21
//
#include <bits/stdc++.h>

using namespace std;
int n,m,ans,dp[90005][40],num[90005][40];
int main() {
    int x,y,z,w,like,fear;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= m; ++i) {
        like=0,fear=0;
        scanf("%d%d%d",&x,&y,&z);
        for (int j = 1; j <= y; ++j) {
            scanf("%d",&w);
            w=(w-x+n)%n;
            fear|=1<<w;
        }
        for (int j = 1; j <= z; ++j) {
            scanf("%d",&w);
            w=(w-x+n)%n;
            like|=1<<w;
        }
        for(int j=0;j<32;j++)
            if((j & like) || ((j & fear)!=fear))
                num[x][j]++;
    }
    for (int i=0;i<32;i++)
    {
        memset(dp[0],128,sizeof(dp[0]));
        dp[0][i]=0;
        for (int j = 1; j <= n; ++j) {
            for (int k=0;k<32;k++)
            {
                dp[j][k]=max(dp[j-1][(k & 15)<<1],dp[j-1][(k & 15)<<1|1])+num[j][k];
            }
        }
        if (ans<dp[n][i])
            ans=dp[n][i];
    }
    printf("%d\n",ans);
    return 0;
}
