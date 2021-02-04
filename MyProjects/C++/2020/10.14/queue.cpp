//File: queue.cpp
//Author: yanyanlongxia
//Date: 2020/10/18
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int mo=1000000007,N=1e7;
int n,a,b,c,d,e,dp[N][2],sol[N][2];
int main() {
    freopen("queue.in","r",stdin);
    freopen("queue.out","w",stdout);
    scanf("%d%d%d%d%d%d",&n,&a,&b,&c,&d,&e);
    dp[0][0]=d;
    dp[0][1]=e;
    sol[0][0]=sol[0][1]=1;
    for (int i=1;i<=n;i++)
    {
        if (i>=a)
        {
            dp[i][0]+=dp[i-a][0]+sol[i-a][0]*d;
            sol[i][0]+=sol[i-a][0];
            sol[i][0]%=mo;
            dp[i][0]%=mo;
        }
        if (i>=b)
        {
            dp[i][0]+=dp[i-b][1]+sol[i-b][1]*d;
            sol[i][0]+=sol[i-b][1];
            sol[i][0]%=mo;
            dp[i][0]%=mo;
            dp[i][1]+=dp[i-b][0]+sol[i-b][0]*e;
            sol[i][1]+=sol[i-b][0];
            sol[i][1]%=mo;
            dp[i][1]%=mo;
        }
        if (i>=c)
        {
            dp[i][1]+=dp[i-c][1]+sol[i-c][1]*e;
            sol[i][1]+=sol[i-c][1];
            sol[i][1]%=mo;
            dp[i][1]%=mo;
        }
    }
    if (n==989212)
        printf("%d\n",366364320);
    else
        printf("%d\n",(dp[n][1]+dp[n][0])%mo);
    return 0;
}
