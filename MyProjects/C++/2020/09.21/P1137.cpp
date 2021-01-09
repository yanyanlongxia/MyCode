//File: P1137.cpp
//Author: yanyanlongxia
//Date: 2020/9/22
//
#include <bits/stdc++.h>

using namespace std;
int n,m,tot,head[1000005],nxt[1000005],ver[1000005],dp[1000005];
inline void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
int dfs(int x)
{
    if (dp[x])
        return dp[x];
    dp[x]=1;
    for (int i=head[x];i;i=nxt[i])
        dp[x]=max(dp[x],dfs(ver[i])+1);
    return dp[x];
}
int main() {
    int x,y;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&y);
        add(y,x);
    }
    for (int i=1;i<=n;i++)
        printf("%d\n",dfs(i));
    return 0;
}
