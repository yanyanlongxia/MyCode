//File: P1896.cpp
//Author: yanyanlongxia
//Date: 2020/8/11
//[SCOI2005]互不侵犯
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,k,dp[20][2000][105],maxn,sum[2000],ans;
bool state[2000];
int getsum(int x)
{
    int tot=0;
    for(;x;x>>=1)
        if(x & 1)
            tot++;
    return tot;
}
signed main() {
    scanf("%lld%lld",&n,&k);
    maxn=1<<n;
    for(int i=0;i<maxn;i++)
    {
        sum[i]=getsum(i);
        if(!(i & (i<<1)))
            state[i]=1;
    }
    for(int i=0;i<maxn;i++)
        if(state[i])
            dp[1][i][sum[i]]=1;
    for (int i=2;i<=n;i++)
    {
        for (int j=0;j<maxn;j++)
        {
            if (state[j])
                for (int u=0;u<maxn;u++)
                {
                    if(state[u] && !(j & u) && !(j & (u<<1)) && !(j & (u>>1)))
                    {
                        for (int v=0;v<=k;v++)
                            dp[i][j][v+sum[j]]+=dp[i-1][u][v];
                    }
                }
        }
    }
    for (int i=0;i<maxn;i++)
        ans+=dp[n][i][k];
    printf("%lld\n",ans);
    return 0;
}