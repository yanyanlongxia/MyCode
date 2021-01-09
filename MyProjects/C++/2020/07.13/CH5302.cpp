//
// Created by admin on 2020/7/16.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mo=1e9;
int dp[1000][1000];
char s[1000];
int dfs(int l,int r)
{
    if(l>r)
        return 0;
    if(l==r)
        return 1;
    if(dp[l][r] != -1)
        return dp[l][r];
    if(s[l]!=s[r])
        return 0;
    dp[l][r]=0;
    for(int i=l+2;i<=r;i++)
        dp[l][r]=(dp[l][r]+dfs(l+1,i-1)*dfs(i,r))%mo;
    return dp[l][r];
}
signed main()
{
    cin>>(s+1);
    memset(dp,-1,sizeof(dp));
    cout<<dfs(1,strlen(s+1))<<endl;
    return 0;
}
