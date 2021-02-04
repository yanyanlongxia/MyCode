//File: P2627.cpp
//Author: yanyanlongxia
//Date: 2020/8/12
//[USACO11OPEN]Mowing the Lawn G
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,val[100005],k,sum[100005],dp[100005][2];
deque<int> q;
signed main() {
    scanf("%lld%lld",&n,&k);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld",&val[i]);
        sum[i]=sum[i-1]+val[i];
    }
    q.push_back(0);
    for (int i = 1; i <= n; ++i) {
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
        while (!q.empty() && q.front()<i-k)
            q.pop_front();
        dp[i][1]=dp[q.front()][0]+sum[i]-sum[q.front()];
        while (!q.empty() && dp[i][0]-sum[i]>dp[q.back()][0]-sum[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    printf("%lld\n",max(dp[n][1],dp[n][0]));
    return 0;
}