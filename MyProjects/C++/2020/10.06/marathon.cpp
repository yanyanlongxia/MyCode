//File: marathon.cpp
//Author: yanyanlongxia
//Date: 2020/10/8
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,x[1000005],y[1000005],dp[600][600];
#define dist(i,j) (abs(x[i]-x[j])+abs(y[i]-y[j]))
int main() {
    freopen("marathon.in","r",stdin);
    freopen("marathon.out","w",stdout);
    memset(dp,0x3f3f3f3f, sizeof(dp));
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&x[i],&y[i]);
    for (int i=0;i<=n;i++)
        dp[i][i]=0;
    dp[1][0]=0;
    for (int i=1;i<=n;i++)
        for (int j=0;j<=min(i-1,k);j++)
            for (int c=0;c<=j;c++)
                dp[i][j]=min(dp[i][j],dp[i-c-1][j-c]+dist(i,i-c-1));
    printf("%d\n",dp[n][k]);
    return 0;
}
