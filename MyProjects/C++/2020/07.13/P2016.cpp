//
// Created by admin on 2020/7/18.
//
#include <bits/stdc++.h>
using namespace std;
int n,dp[2500][2];
vector<int>son[2500];
bool vis[2500];
void dfs(int x)
{
    dp[x][0]=0;dp[x][1]=1;
    for(int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        dfs(y);
        dp[x][0]+=dp[y][1];
        dp[x][1]+=min(dp[y][0],dp[y][1]);
    }
}
int main()
{
    memset(dp,0x3f3f3f3f,sizeof(dp));
    cin>>n;
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
        if(!vis[i])
        {
            root=i;
            break;
        }
    dfs(root);
    cout<<min(dp[root][0],dp[root][1]);
}
