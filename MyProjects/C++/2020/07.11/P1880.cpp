//
// Created by admin on 2020/7/12.
//
#include <bits/stdc++.h>
using namespace std;
int a[310],dp1[310][310],dp2[310][310],sum[310],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    memset(dp1,0x3f3f3f3f,sizeof(dp1));
    memset(dp2,-0x3f3f3f3f,sizeof(dp2));
    for(int i=1;i<=n;i++)
    {
        dp1[i][i]=0;
        dp2[i][i]=0;
        sum[i]=sum[i-1]+a[i];
    }
    for(int len=2;len<=n;len++)   //枚举区间长度
        for(int l=1;l<=n-len+1;l++)  //枚举左端点
        {
            int r=l+len-1;  //右端点
            for(int k=l;k<r;k++)  //更新答案
            {
                dp1[l][r]=min(dp1[l][r],dp1[l][k]+dp1[k+1][r]+sum[r]-sum[l-1]);
                dp2[l][r]=max(dp2[l][r],dp2[l][k]+dp2[k+1][r]+sum[r]-sum[l-1]);
            }
        }
    cout<<dp1[1][n]-1<<endl<<dp2[1][n]<<endl;  //整个区间最值
    return 0;
}
