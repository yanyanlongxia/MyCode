//File: P2986.cpp
//Author: yanyanlongxia
//Date: 2020/8/14
//[USACO10MAR]Great Cow Gathering G
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,sz[100005],dp[100005],dist[100005],c[100005],ans=0x3f3f3f3f3f3f3f3f;
vector<pair<int,int> >son[100005];
void dfs1(int x,int fa)
{
    sz[x]=c[x];
    for(int i=0;i<son[x].size();i++)
    {
        int y=son[x][i].first,z=son[x][i].second;
        if(y==fa)
            continue;
        dist[y]=dist[x]+z;
        dfs1(y,x);
        sz[x]+=sz[y];
    }
}
void dfs2(int x,int fa)
{
    for (int i=0;i<son[x].size();i++)
    {
        int y=son[x][i].first,z=son[x][i].second;
        if(y==fa)
            continue;
        dp[y]=dp[x]-sz[y]*z+sz[1]*z-sz[y]*z;
        dfs2(y,x);
    }
}
signed main() {
    int x,y,z;
    scanf("%lld",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld",&c[i]);
    }
    for (int i = 1; i <= n - 1; ++i) {
        scanf("%lld%lld%lld",&x,&y,&z);
        son[x].push_back(make_pair(y,z));
        son[y].push_back(make_pair(x,z));
    }
    dfs1(1,0);
    for (int i = 2; i <= n; ++i) {
        dp[1]+=dist[i]*c[i];
    }
    dfs2(1,0);
    for (int i = 1; i <= n; ++i) {
        ans=min(ans,dp[i]);
    }
    printf("%lld\n",ans);
    return 0;
}