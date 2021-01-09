//
// Created by admin on 2020/6/26.
//
#include <bits/stdc++.h>
using namespace std;
int a[205][205],dp[205],n;
int main()
{
    cin>>n;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(i!=j)
                cin>>a[i][j];
    for(int i=1;i<n;i++)
        dp[i]=1<<9;
    for(int i=n;i>0;i--)
        for(int j=i+1;j<=n;j++)
            dp[i]=min(dp[i],dp[j]+a[i][j]);
    cout<<dp[1]<<endl;
}
