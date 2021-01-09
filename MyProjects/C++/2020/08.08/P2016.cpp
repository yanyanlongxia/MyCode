//File: P2016.cpp
//Author: yanyanlongxia
//Date: 2020/8/8
//
#include <bits/stdc++.h>
using namespace std;
int n,dp[2500][2];//每个点选与不选
vector<int>son[2500];
bool vis[2500];
void dfs(int x)
{
    dp[x][0]=0;dp[x][1]=1;
    for(int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        dfs(y);
        dp[x][0]+=dp[y][1];//如果当前点不选，它的子节点必须选（每条边都需要被监控）
        dp[x][1]+=min(dp[y][0],dp[y][1]);//如果当前点选了，它的子节点选不选都无所谓，选最小值
    }
}
int main()
{
    memset(dp,0x3f3f3f3f,sizeof(dp));//这个不赋值应该也没关系（我没试过）
    scanf("%d",&n);
    int x,y,z,root=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        for(int j=1;j<=y;j++)
        {
            scanf("%d",&z);
            vis[z]=true;
            son[x].push_back(z);
        }
    }
    for(int i=0;i<n;i++)
        if(!vis[i])//找根节点
        {
            root=i;
            break;
        }
    dfs(root);
    cout<<min(dp[root][0],dp[root][1]);
}