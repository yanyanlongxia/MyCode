//File: CF1363E.cpp
//Author: yanyanlongxia
//Date: 2020/9/29
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,dp[1000005][2],a[1000005],b[1000005],c[1000005],ans;
vector<int>son[1000005];
void dfs(int x,int fa)
{
    if (b[x]!=c[x])
        dp[x][b[x]]++;
    for (int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if (y==fa)
            continue;
        a[y]=min(a[y],a[x]);
        dfs(y,x);
        dp[x][1]+=dp[y][1];
        dp[x][0]+=dp[y][0];
    }
    int now=min(dp[x][1],dp[x][0]);
    ans+=2*now*a[x];
    dp[x][1]-=now;
    dp[x][0]-=now;
}
signed main() {
    int x,y;
    scanf("%lld",&n);
    for (int i=1;i<=n;i++)
        scanf("%lld%lld%lld",&a[i],&b[i],&c[i]);
    for (int i=1;i<n;i++)
    {
        scanf("%lld%lld",&x,&y);
        son[x].push_back(y);
        son[y].push_back(x);
    }
    dfs(1,0);
    if (dp[1][0] || dp[1][1])
        puts("-1");
    else
        printf("%lld\n",ans);
    return 0;
}
