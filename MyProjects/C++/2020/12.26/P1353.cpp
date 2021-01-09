//File: P1353.cpp
//Author: yanyanlongxia
//Date: 2020/12/26
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e4,K=1e3;
int n,m,d[N],dp[N][K];
int main() {
    freopen("data.in","rev",stdin);
    //freopen("P1353.out","w",stdout);
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&d[i]);
    for(int i=1;i<=n;i++)
        for(int j=0;j<=m;j++){
            dp[i][0]=max(dp[i][0],dp[i-1][0]);
            if(i+j-1<=n)
                dp[i+j-1][0]=max(dp[i+j-1][0],dp[i-1][j]);
            if(j!=0)
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+d[i]);
        }
    printf("%d\n",dp[n][0]);
    return 0;
}
