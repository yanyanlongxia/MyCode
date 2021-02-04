//File: P1273.cpp
//Author: yanyanlongxia
//Date: 2020/8/12
//
#include <bits/stdc++.h>

using namespace std;
int n,m,dp[3005][3005],val[3005],sz[3005];
vector<pair<int,int> >node[3005];
void dfs(int x)
{
    if (val[x])
    {
        dp[x][1]=val[x];
        sz[x]=1;
        return ;
    }
    for (int i=0;i<node[x].size();i++)
    {
        int y=node[x][i].first,z=node[x][i].second;
        dfs(y);
        sz[x]+=sz[y];
        for (int j=m;j>=1;j--)
            for (int k=0;k<=min(j,sz[y]);k++)
                dp[x][j]=max(dp[x][j],dp[x][j-k]+dp[y][k]-z);
    }
}
int main() {
    memset(dp,0xcf,sizeof(dp));
    int x,y,z;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; ++i) {
        dp[i][0]=0;
    }
    for (int i = 1; i <= n - m; ++i) {
        scanf("%d",&x);
        for (int j = 1; j <= x; ++j) {
            scanf("%d%d",&y,&z);
            node[i].push_back(make_pair(y,z));
        }
    }
    for (int i = 1; i <= m; ++i) {
        scanf("%d",&val[n-m+i]);
    }
    dfs(1);
    for(int i=m;i>=0;i--)
        if(dp[1][i]>=0)
        {
            printf("%d\n",i);
            return 0;
        }
    return 0;
}