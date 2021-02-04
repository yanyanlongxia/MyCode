//File: P2279.cpp
//Author: yanyanlongxia
//Date: 2020/8/6
//[HNOI2003]消防局的设立
#include <bits/stdc++.h>

using namespace std;
int n,dp[1005][5];
vector<int>son[1005];
void dfs(int x)
{
    int ans1=0x3f3f3f3f,ans2=0x3f3f3f3f;
    if(son[x].empty())
    {
        dp[x][2]=dp[x][0]=dp[x][1]=1;
        dp[x][3]=dp[x][4]=0;
        return;
    }
    for(int i=0; i<son[x].size(); i++)
    {
        int y=son[x][i];
        dfs(y);
        dp[x][2]+=dp[y][4];
        dp[x][3]+=dp[y][0];
        dp[x][4]+=dp[y][3];
        ans1=min(ans1,dp[y][2]-dp[y][3]);
        ans2=min(ans2,dp[y][1]-dp[y][0]);
    }
    dp[x][0]=dp[x][3]+ans2;
    dp[x][1]=dp[x][4]+ans1;
    dp[x][2]+=1;
    dp[x][4]=min(min(dp[x][0],min(dp[x][4],dp[x][3])),min(dp[x][2],dp[x][1]));
    dp[x][3]=min(min(dp[x][3],dp[x][2]),min(dp[x][1],dp[x][0]));
    dp[x][0]=min(dp[x][0],min(dp[x][1],dp[x][2])); dp[x][1]=min(dp[x][1],dp[x][2]);
}
int main() {
    int x;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        scanf("%d",&x);
        son[x].push_back(i);
    }
    dfs(1);
    printf("%d\n",dp[1][0]);
    return 0;
}