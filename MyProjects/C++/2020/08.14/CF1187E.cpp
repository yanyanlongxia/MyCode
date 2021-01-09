//File: CF1187E.cpp
//Author: yanyanlongxia
//Date: 2020/8/14
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,sz[300000],dp[300000],ans;
vector<int>son[300000];
void dfs1(int x,int fa)
{
    sz[x]=1;
    for(int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if(y==fa)
            continue;
        dfs1(y,x);
        sz[x]+=sz[y];
    }
}
void dfs2(int x,int fa)
{
    for (int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if(y==fa)
            continue;
        dp[y]=dp[x]-2*sz[y]+sz[1];
        dfs2(y,x);
    }
}
signed main() {
    int x,y;
    scanf("%lld",&n);
    for (int i = 1; i <= n - 1; ++i) {
        scanf("%lld%lld",&x,&y);
        son[x].push_back(y);
        son[y].push_back(x);
    }
    dfs1(1,0);
    for (int i = 1; i <= n; ++i) {
        dp[1]+=sz[i];
    }
    dfs2(1,0);
    for (int i = 1; i <= n; ++i) {
        ans=max(ans,dp[i]);
    }
    printf("%lld\n",ans);
    return 0;
}