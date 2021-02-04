//
// Created by admin on 2020/7/16.
//
#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000],v[1000]/*体积*/,m[1000]/*质量*/,w[1000]/*卡路里*/,maxv/*体积限制*/,maxm/*质量限制*/,n;
int main()
{
    cin>>maxv>>maxm;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i]>>m[i]>>w[i];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
        for(int j=maxv;j>=v[i];j--)
            for(int k=maxm;k>=m[i];k--)
                dp[j][k]=max(dp[j][k],dp[j-v[i]][k-m[i]]+w[i]);
    cout<<dp[maxv][maxm]<<endl;
    return 0;
}
