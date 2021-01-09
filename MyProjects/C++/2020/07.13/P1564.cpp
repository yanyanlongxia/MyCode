//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,dp[100000],s[100000];
int main()
{
    cin>>n>>m;
    int a;
    memset(dp,0x3f3f3f3f,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a==1)
            s[i]=s[i-1]+1;
        else
            s[i]=s[i-1]-1;
    }
    dp[0]=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            if(abs(s[i]-s[j-1])==i-j+1 || abs(s[i]-s[j-1])<=m)
                dp[i]=min(dp[i],dp[j-1]+1);
    cout<<dp[n]<<endl;
    return 0;
}
