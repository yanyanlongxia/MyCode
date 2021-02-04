//
// Created by admin on 2020/7/14.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,tot,prime[10000],dp[10000];
bool vis[10000];
signed main()
{
    cin>>n;
    for(int i=2;i<=n;i++)  //线性筛
    {
        if(!vis[i])
        {
            tot++;
            prime[tot]=i;
        }
        for(int j=1;j<=tot&&i*prime[j]<=n;j++)
        {
            vis[i*prime[j]]=true;
            if(i%prime[j]==0)
                break;
        }
    }
    dp[0]=1;
    for (int i = 1; i <= tot; ++i) {  //完全背包
        for(int j=prime[i];j<=n;j++)
            dp[j]+=dp[j-prime[i]];
    }
    cout<<dp[n]<<endl;
    return 0;
}
