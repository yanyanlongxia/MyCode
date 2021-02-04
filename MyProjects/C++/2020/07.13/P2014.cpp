//
// Created by admin on 2020/7/18.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,dp[500][500],va[500];
vector<int>son[500];
void dfs(int x)
{
    for(int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        dfs(y);
        for(int t=m;t>=0;t--)
            for(int j=0;j<=t;j++)
                dp[x][t]=max(dp[x][t],dp[x][t-j]+dp[y][j]);
    }
    if(x!=0)
        for(int j=m;j>0;j--)
            dp[x][j]=dp[x][j-1]+va[x];
}
int main()
{
    int x,y;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        son[x].push_back(i);
        va[i]=y;
    }
    dfs(0);
    cout<<dp[0][m]<<endl;
    return 0;
}
