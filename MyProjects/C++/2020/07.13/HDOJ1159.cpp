//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
char s1[1000],s2[1000];
int dp[1000][1000],n,m;
int main()
{
    while(cin>>(s1+1)>>(s2+1))
    {
        int n=strlen(s1+1),m=strlen(s2+1);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(s1[i]==s2[j])
                    dp[i][j]=dp[i-1][j-1]+1;
                dp[i][j]=max(dp[i][j],max(dp[i-1][j],dp[i][j-1]));
            }
        cout<<dp[n][m]<<endl;

    }
    return 0;
}
