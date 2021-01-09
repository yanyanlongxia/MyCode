//
// Created by admin on 2020/7/14.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,dp[110][60][60],a[60][60];
signed main()
{
    cin>>n;
    int x,y,z;
    cin>>x>>y>>z;
    while(x!=0||y!=0)
    {
        a[x][y]=z;
        cin>>x>>y>>z;
    }
    for(int i=0;i<n+n-2;i++)  //枚举路径长度
        for(int j=1;j<=n&&j<=i+1;j++)
            for(int k=1;k<=n&&k<=i+1;k++)
            {
                if (j == k)
                {
                    dp[i+1][j][k] = max(dp[i+1][j][k], dp[i][j][k] + a[j][i+3-j]);
                    dp[i+1][j+1][k+1] = max(dp[i+1][j+1][k+1], dp[i][j][k] + a[j+1][i+2-j]);
                } else
                {
                    dp[i+1][j][k] = max(dp[i+1][j][k], dp[i][j][k] + a[j][i+3-j] + a[k][i+3-k]);
                    dp[i+1][j+1][k+1] = max(dp[i+1][j+1][k+1], dp[i][j][k] + a[j+1][i+2-j] + a[k+1][i+2-k]);
                }
                if (j + 1 == k)
                    dp[i+1][j+1][k] = max(dp[i+1][j+1][k], dp[i][j][k] + a[j+1][i+2-j]);
                else
                    dp[i+1][j+1][k] = max(dp[i+1][j+1][k], dp[i][j][k] + a[j+1][i+2-j] + a[k][i+3-k]);
                if (k + 1 == j)
                    dp[i+1][j][k+1] = max(dp[i+1][j][k+1], dp[i][j][k] + a[j][i+3-j]);
                else
                    dp[i+1][j][k+1] = max(dp[i+1][j][k+1], dp[i][j][k] + a[j][i+3-j] + a[k+1][i+2-k]);
            }
    cout<<dp[n+n-2][n][n]<<endl;
    return 0;
}
