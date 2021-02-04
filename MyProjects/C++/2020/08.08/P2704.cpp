//File: P2704.cpp
//Author: yanyanlongxia
//Date: 2020/8/11
//[NOI2001]炮兵阵地
#include <bits/stdc++.h>

using namespace std;
int n,m,dp[1024][1024][5],field[105],maxn,sum[3000],ans;
bool state[3000];
char s[105];
int getsum(int x) {
    int tot = 0;
    for (; x; x >>= 1)
        if (x & 1)
            tot++;
    return tot;
}
int main() {
    scanf("%d%d",&n,&m);
    maxn=1<<m;
    for(int i=0;i<maxn;i++)
        sum[i]=getsum(i);
    for(int i=0;i<maxn;i++)
        if(!((i<<1)&i) && !((i<<2)&i) && !((i>>1)&i) && !((i>>2)&i))
            state[i]=true;
    for(int i=1;i<=n;i++)
    {
        scanf("%s",(s+1));
        for(int j=1; j <= m; j++)
        {
            if(s[j]=='P')
                field[i]=(field[i]<<1)+1;
            else
                field[i]=field[i]<<1;
        }
    }
    for (int i=0;i<maxn;i++)
    {
        if((i & field[1])==i && state[i])
        {
            dp[0][i][1]=sum[i];
        }
    }
    for (int i=0;i<maxn;i++)
    {
        for (int j=0;j<maxn;j++)
        {
            if(!(i & j) && (i & field[1])==i && (j & field[2])==j && state[i] && state[j])
            {
                dp[i][j][2]=sum[i]+sum[j];
            }
        }
    }

    for (int i=3;i<=n;i++)
    {
        for (int j=0;j<maxn;j++)
            if(state[j] && (j & field[i])==j)
            {
                for (int u=0;u<maxn;u++)
                    if(state[u] && !(j & u) && (u & field[i-1])==u)
                    {
                        for (int v=0;v<maxn;v++)
                            if(state[v] && !(v & u) && !(v & j) && (v & field[i-2])==v)
                            {
                                dp[u][j][i%3]=max(dp[u][j][i%3],dp[v][u][(i-1)%3]+sum[j]);
                            }
                    }
            }
    }
    for (int i=0;i<maxn;i++)
        for (int j=0;j<maxn;j++)
            if(state[i] && state[j] && !(i & j))
                ans=max(ans,dp[i][j][n%3]);
    printf("%d\n",ans);
    return 0;
}