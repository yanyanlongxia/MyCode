//File: P5003.cpp
//Author: yanyanlongxia
//Date: 2020/8/20
//
#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
int n,m,dp[1005][1005][2][2];//小，大、右，下
char s[1005][1005];
int main() {
    scanf("%d%d",&m,&n);
    for (int i = 1; i <= m; ++i) {
        scanf("%s",(s[i]+1));
        for (register int j = 1; j <= n; ++j) {
            dp[i][j][1][0]=dp[i][j][0][0]=INF;
            dp[i][j][0][1]=dp[i][j][1][1]=-INF;
        }
    }
    dp[1][1][1][0]=dp[1][1][1][1]=dp[1][1][0][0]=dp[1][1][0][1]=0;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s[i][j]=='o' && (dp[i][j][0][1]!=INF || dp[i][j][1][1]!=INF))
            {
                if(s[i][j+1]=='o')
                {
                    dp[i][j+1][0][0]=min(dp[i][j+1][0][0],dp[i][j][1][0]+1);
                    dp[i][j+1][1][0]=min(dp[i][j+1][1][0],dp[i][j][1][0]);
                    dp[i][j+1][0][1]=max(dp[i][j+1][0][1],dp[i][j][1][1]+1);
                    dp[i][j+1][1][1]=max(dp[i][j+1][1][1],dp[i][j][1][1]);
                }
                if(s[i+1][j]=='o')
                {
                    dp[i+1][j][0][0]=min(dp[i+1][j][0][0],dp[i][j][0][0]);
                    dp[i+1][j][1][0]=min(dp[i+1][j][1][0],dp[i][j][0][0]+1);
                    dp[i+1][j][0][1]=max(dp[i+1][j][0][1],dp[i][j][0][1]);
                    dp[i+1][j][1][1]=max(dp[i+1][j][1][1],dp[i][j][0][1]+1);
                }
            }
        }
    }
    int ansi=min(dp[m][n][0][0],dp[m][n][1][0]),ansa=max(dp[m][n][0][1],dp[m][n][1][1]);
    if(ansi==INF || ansa==-INF)
        puts("-1");
    else
        printf("%d %d\n",ansa-1,ansi);
    return 0;
}
