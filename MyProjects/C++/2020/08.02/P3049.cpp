//File: P3049.cpp
//Author: yanyanlongxia
//Date: 2020/8/4
//[USACO12FEB]Relocation S
#include <bits/stdc++.h>

using namespace std;
int n,x,y,z,a[1500],b[1500],dp[1500][1500],as,bs;
int main() {
    int u,v;
    scanf("%d%d%d%d",&n,&x,&y,&z);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&u,&v);
        for (int j = 1; j <= u; ++j) {
            a[++as]=i;
        }
        for (int j = 1; j <= v; ++j) {
            b[++bs]=i;
        }
    }
    memset(dp,0x3f3f3f3f,sizeof(dp));
    dp[0][0]=0;
    for(int i=1;i<=as;i++)
        dp[i][0]=i*y;
    for(int i=1;i<=bs;i++)
        dp[0][i]=i*x;
    for(int i=1;i<=as;i++)
        for(int j=1;j<=bs;j++)
        {
            dp[i][j]=min(dp[i][j],dp[i][j-1]+x);
            dp[i][j]=min(dp[i][j],dp[i-1][j]+y);
            dp[i][j]=min(dp[i][j],dp[i-1][j-1]+z*abs(a[i]-b[j]));
        }
    printf("%d\n",dp[as][bs]);
    return 0;
}