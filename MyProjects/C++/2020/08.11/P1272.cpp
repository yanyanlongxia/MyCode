//File: P1272.cpp
//Author: yanyanlongxia
//Date: 2020/8/12
//
#include <bits/stdc++.h>

using namespace std;
int n,m,dp[205][205],sz[205],d[205],ans=0x3f3f3f3f;
vector<int>son[205];
void dfs(int x)
{
    dp[x][1]=d[x];
    sz[x]=1;
    for (int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        dfs(y);
        sz[x]+=sz[y];
        for (int j=m;j>=1;j--)
            for (int k=1;k<=min(sz[y],j);k++)
            {
                dp[x][j]=min(dp[x][j],dp[x][j-k]+dp[y][k]-2);
            }
    }
}
int main() {
    memset(dp,0x3f3f3f3f,sizeof(dp));
    scanf("%d%d",&n,&m);
    int x,y;
    for (int i = 1; i < n; ++i) {
        scanf("%d%d",&x,&y);
        son[x].push_back(y);
        d[x]++;
        d[y]++;
    }
    dfs(1);
    for (int i = 1; i <= n; ++i) {
        ans=min(ans,dp[i][m]);
    }
    printf("%d\n",ans);
    return 0;
}