//File: P2585.cpp
//Author: yanyanlongxia
//Date: 2020/8/12
//
#include <bits/stdc++.h>

using namespace std;
char s[1000000];
int n,dp[1000000][3][2],now;//绿色，红色，蓝色;最大，最小
vector<int>son[1000000];
void dfs_read(int index)
{
    now++;
    if(s[index]=='0')
        return ;
    if(s[index]=='1')
    {
        son[index].push_back(index+1);
        dfs_read(index+1);
    }
    if(s[index]=='2')
    {
        son[index].push_back(index+1);
        dfs_read(index+1);
        son[index].push_back(now+1);
        dfs_read(now+1);
    }
}
void dfs(int x)
{
    if(son[x].empty())
    {
        dp[x][0][0]=dp[x][0][1]=1;
        dp[x][1][0]=dp[x][2][0]=dp[x][1][1]=dp[x][2][1]=0;
        return;
    }
    if(son[x].size()==1)
    {
        int y=son[x][0];
        dfs(y);
        dp[x][0][0]=max(dp[y][1][0],dp[y][2][0])+1;
        dp[x][1][0]=max(dp[y][0][0],dp[y][2][0]);
        dp[x][2][0]=max(dp[y][0][0],dp[y][1][0]);
        dp[x][0][1]=min(dp[y][1][1],dp[y][2][1])+1;
        dp[x][1][1]=min(dp[y][0][1],dp[y][2][1]);
        dp[x][2][1]=min(dp[y][0][1],dp[y][1][1]);
    }else
    {
        int y=son[x][0],z=son[x][1];
        dfs(y);
        dfs(z);
        dp[x][0][0]=max(dp[y][1][0]+dp[z][2][0],dp[z][1][0]+dp[y][2][0])+1;
        dp[x][1][0]=max(dp[y][0][0]+dp[z][2][0],dp[z][0][0]+dp[y][2][0]);
        dp[x][2][0]=max(dp[y][0][0]+dp[z][1][0],dp[z][0][0]+dp[y][1][0]);
        dp[x][0][1]=min(dp[y][1][1]+dp[z][2][1],dp[z][1][1]+dp[y][2][1])+1;
        dp[x][1][1]=min(dp[y][0][1]+dp[z][2][1],dp[z][0][1]+dp[y][2][1]);
        dp[x][2][1]=min(dp[y][0][1]+dp[z][1][1],dp[z][0][1]+dp[y][1][1]);
    }
}
int main() {
    scanf("%s",(s+1));
    n=strlen(s+1);
    for(int i=1;i<=n;i++)
        for(int j=0;j<2;j++)
            dp[i][j][1]=0x3f3f3f3f;
    dfs_read(1);
    dfs(1);
    printf("%d %d\n",max(dp[1][0][0],max(dp[1][1][0],dp[1][2][0])),min(dp[1][0][1],min(dp[1][1][1],dp[1][2][1])));
    return 0;
}