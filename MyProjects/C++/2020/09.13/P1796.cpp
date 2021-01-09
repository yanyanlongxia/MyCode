//File: P1796.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>

using namespace std;
int n,dp[200][200],ans=0x3f3f3f3f,m;
int main() {
    int x,y,z;
    memset(dp,0x3f3f3f3f,sizeof(dp));
    scanf("%d",&n);
    dp[0][1]=0;
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if (i==n)
            m=x;
        for (int j=1;j<=x;j++)
        {
            while (1)
            {
                scanf("%d",&y);
                if (y==0)
                    break;
                scanf("%d",&z);
                dp[i][j]=min(dp[i][j],dp[i-1][y]+z);`
            }
        }
    }
    for (int i=1;i<=m;i++)
        ans=min(ans,dp[n][i]);
    printf("%d\n",ans);
    return 0;
}
