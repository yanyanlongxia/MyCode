//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
const int mo=1000007;
int n,m,a[1000],dp[1000];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    dp[0]=1;
    for(int i=1;i<=n;i++)
        for(int j=m;j>=0;j--)
            for(int k=1;k<=a[i]&&k<=j;k++)
                dp[j]=(dp[j]+dp[j-k])%mo;
    cout<<dp[m]<<endl;
    return 0;
}