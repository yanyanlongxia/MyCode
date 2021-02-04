//File: btest1.cpp
//Author: yanyanlongxia
//Date: 2020/8/7
//U125752 王后万岁
#include <bits/stdc++.h>

using namespace std;
int n,p[1000005],dp[1000005];
vector<int>son[1000005];
void dfs(int x,int fa)
{
    for(int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if(y==fa)
            continue;
        dfs(y,x);
        if(dp[y]>0)
            dp[x]+=dp[y];
    }
    dp[x]+=p[x];
}
int main() {
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&p[i]);
    int x,y;
    for(int i=1;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        son[x].push_back(y);
        son[y].push_back(x);
    }
    dfs(1,0);
    int maxn=-0x3f3f3f3f;
    for(int i=1;i<=n;i++)
        maxn=max(maxn,dp[i]);
    printf("%d\n",maxn);
    return 0;
}