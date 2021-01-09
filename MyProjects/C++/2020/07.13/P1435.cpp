//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
char s1[5000],s2[5000];
int n,dp[2000][2000];
int main()
{
    cin>>(s1+1);
    n=strlen(s1+1);
    for(int i=1;i<=n;i++)
        s2[i]=s1[n-i+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(s1[i]==s2[j])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    cout<<n-dp[n][n]<<endl;
    return 0;
}
