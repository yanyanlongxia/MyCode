//File: P1131.cpp
//Author: yanyanlongxia
//Date: 2020/8/6
//[ZJOI2007]时态同步
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,s,dp[1000005],m[1000005];//dp:以i为根的子树时态同步所需要的最少步数; m:在已i为子树做到时态同步花费最少的步数的情况下i到子树叶子节点的距离
vector<pair<int,int> >node[1000005];
void dfs(int x,int fa)
{
    for(int i=0;i<node[x].size();i++)
    {
        int y=node[x][i].first,z=node[x][i].second;
        if(y==fa)
            continue;
        dfs(y,x);
        m[x]=max(m[x],m[y]+z);
    }
    for(int i=0;i<node[x].size();i++)
    {
        int y=node[x][i].first,z=node[x][i].second;
        if(y==fa)
            continue;
        dp[x]+=dp[y]+m[x]-m[y]-z;
    }
}
signed main() {
    int x,y,z;
    scanf("%lld%lld",&n,&s);
    for (int i = 1; i <= n - 1; ++i) {
        scanf("%lld%lld%lld",&x,&y,&z);
        node[x].push_back(make_pair(y,z));
        node[y].push_back(make_pair(x,z));
    }
    dfs(s,0);
    printf("%lld\n",dp[s]);
    return 0;
}