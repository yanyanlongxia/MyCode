//File: P3478.cpp
//Author: yanyanlongxia
//Date: 2020/8/13
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,sz[1000005],depth[1000005],dp[1000005],ans,id;
vector<int>son[1000005];
void dfs1(int x,int fa)
{
    sz[x]=1;
    for (int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if(y==fa)
            continue;
        depth[y]=depth[x]+1;
        dfs1(y,x);
        sz[x]+=sz[y];
    }
}
void dfs2(int x,int fa)
{
    for(int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if(y==fa)
            continue;
        dp[y]=dp[x]-sz[y]+sz[1]-sz[y];
        dfs2(y,x);
    }
}
signed main() {
    int x, y;
    scanf("%lld", &n);
    for (int i = 1; i < n; ++i) {
        scanf("%lld%lld", &x, &y);
        son[x].push_back(y);
        son[y].push_back(x);
    }
    dfs1(1, 0);
    for (int i = 2; i <= n; i++)
        dp[1] += depth[i];
    dfs2(1, 0);
    for (int i = 1; i <= n; ++i) {
        if (ans < dp[i]) {
            ans = dp[i];
            id = i;
        }
    }
    printf("%lld\n", id);
    return 0;
}