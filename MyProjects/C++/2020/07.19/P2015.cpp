//
// Created by admin on 2020/7/21.
//
#include <bits/stdc++.h>
using namespace std;
int n,q,dp[105][105],w[105][105];
vector<int> son[105];
bool vis[105];//由于除了根节点以外的节点之间确定父子之间很不方便，于是可以在每个访问过了的点上做标记，防止无限递归
void dfs(int x)
{
    vis[x]=1;
    for(int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if(vis[y])
            continue;
        dfs(y);  //向子节点进行动态规划
        for(int j=q;j>=1;j--)  //枚举当前可选的树枝根数
            for(int k=j-1;k>=0;k--)  //枚举子节点可选数值根数
                dp[x][j]=max(dp[x][j],dp[y][k]+dp[x][j-k-1]+w[x][y]);//这么做的原因是这是一棵二叉树
    }
}
int main()
{
    int x,y,z;
    scanf("%d%d",&n,&q);
    for(int i=1;i<n;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        son[x].push_back(y);
        son[y].push_back(x);
        w[x][y]=w[y][x]=z;
    }
    dfs(1);//1为根节点
    printf("%d\n",dp[1][q]);
    return 0;
}
