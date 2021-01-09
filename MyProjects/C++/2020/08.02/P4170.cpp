//File: P4170.cpp
//Author: yanyanlongxia
//Date: 2020/8/4
//
#include <bits/stdc++.h>

using namespace std;
int n,dp[100][100];
char s[100];
int main() {
    scanf("%s",(s+1));
    n=strlen(s+1);
    memset(dp,0x3f3f3f3f,sizeof(dp));
    for(int i=1;i<=n;i++)
        dp[i][i]=1;
    for(int len=2;len<=n;len++)
        for(int l=1,r;l<=n-len+1;l++)
        {
            r=l+len-1;
            if(s[l]==s[r])
                dp[l][r]=min(dp[l+1][r],dp[l][r-1]);
            else
                for(int mid=l;mid<r;mid++)
                    dp[l][r]=min(dp[l][r],dp[l][mid]+dp[mid+1][r]);
        }
    printf("%d\n",dp[1][n]);
    return 0;
}