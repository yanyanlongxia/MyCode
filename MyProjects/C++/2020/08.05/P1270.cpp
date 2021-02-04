//File: P1270.cpp
//Author: yanyanlongxia
//Date: 2020/8/6
//
#include <bits/stdc++.h>

using namespace std;
int t,ti[10000],pi[10000],dp[1005][1005];
inline int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch)) {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (isdigit(ch)) {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x * f;
}
void dfsread(int p)
{
    ti[p]=read()*2;//因为去了还要回来，所以要乘2
    pi[p]=read();
    if(pi[p]==0)
    {
        dfsread(p*2);
        dfsread(p*2+1);
    }
}
void dfs(int p,int j)
{
    if(dp[p][j]!=-1)//访问过了
        return ;
    if(j<1)//没时间了，不拿画
    {
        dp[p][j]=0;
        return;
    }
    if (pi[p])
    {
        dp[p][j]=min(pi[p],(j-ti[p])/5);//当前能拿的画的数量
        return;
    }
    for(int i=0;i<=j-ti[p];i++)//枚举给左儿子分配的时间
    {
        dfs(p*2,i);
        dfs(p*2+1,j-ti[p]-i);//dfs下降
        dp[p][j]=max(dp[p][j],dp[p*2][i]+dp[p*2+1][j-ti[p]-i]);
    }
}
int main() {
    memset(dp,-1,sizeof(dp));
    t=read();
    t--;//要在警察来之前跑走，而不是在门口碰见警察
    dfsread(1);
    dfs(1,t);
    printf("%d\n",dp[1][t]);
    return 0;
}