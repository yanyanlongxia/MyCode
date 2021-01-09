//File: P2004.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>

using namespace std;
int n,m,c,sum[10000][10000],val[10000][10000],maxn=-0x3f3f3f3f;
pair<int,int>maxi;
int main() {
    scanf("%d%d%d",&n,&m,&c);
    for (int i=1;i<=n;i++)
        for (int j = 1; j <= m; ++j) {
            scanf("%d",&val[i][j]);
        }
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            sum[i][j]=sum[i-1][j]+sum[i][j-1]+val[i][j]-sum[i-1][j-1];
    for (int i=1;i<=n-c+1;i++)
        for (int j=1;j<=m-c+1;j++)
        {
            int dat=sum[i+c-1][j+c-1]-sum[i-1][j+c-1]-sum[i+c-1][j-1]+sum[i-1][j-1];
            if (dat>maxn)
            {
                maxn=dat;
                maxi.first=i;
                maxi.second=j;
            }
        }
    printf("%d %d\n",maxi.first,maxi.second);
    return 0;
}
