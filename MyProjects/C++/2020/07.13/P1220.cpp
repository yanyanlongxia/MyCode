//P1220
// Created by admin on 2020/7/16.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,c,f[100],pos[100],dp[100][100][2],sum[100];
signed main()
{
    cin>>n>>c;
    for(int i=1;i<=n;i++)
        cin>>pos[i]>>f[i];
    memset(dp,0x3f,sizeof(dp));
    for(int i=1;i<=n;i++)
        sum[i]=sum[i-1]+f[i];//记录前缀和
    dp[c][c][0]=dp[c][c][1]=0;
    for(int len=2;len<=n;len++)//穷举区间长度
        for(int l=1;l<=c&&l+len-1<=n;l++)  //穷举区间左端点
        {
            int r=l+len-1;
            if(r>=c)//剪枝
                break;
            dp[l][r][0]=min(dp[l+1][r][0]+(pos[l+1]-pos[l])*(sum[l]+sum[n]-sum[r]),dp[l+1][r][1]+(pos[r]-pos[l])*(sum[l]+sum[n]-sum[r]));
            dp[l][r][1]=min(dp[l][r-1][1]+(pos[r]-pos[r-1])*(sum[l-1]+sum[n]-sum[r-1]),dp[l][r-1][0]+(pos[r]-pos[l])*(sum[l-1]+sum[n]-sum[r-1]));
        }
    cout<<min(dp[1][n][0],dp[1][n][1])<<endl;
    return 0;
}