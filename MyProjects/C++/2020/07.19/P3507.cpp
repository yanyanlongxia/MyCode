//
// Created by admin on 2020/7/20.
//
#include <bits/stdc++.h>
using namespace std;
int a[1500000],dp[1500000],n;//dp[i]表示排序后a的前i为能使本次自身与对手的差值为多少
bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1,cmp);
    for(int i=n;i>=1;i--)
        dp[i]=max(dp[i+1],a[i]-dp[i+1]);
    cout<<dp[1]<<endl;
    return 0;
}
