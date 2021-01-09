
// Problem : P1049 装箱问题
// Contest : Luogu
// URL : https://www.luogu.com.cn/problem/P1049
// Memory Limit : 125 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)
//
// Created by admin on 2020/7/14.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,v[40],w[400000],dp[400000];
int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&v[i]);
        w[i]=v[i];
    }
    for (int i = 1; i <= n; ++i) {
        for(int j=m;j>=w[i];j--)
            dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
    }
    cout<<m-dp[m]<<endl;
    return 0;
}

