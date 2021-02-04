//File: P5504.cpp
//Author: yanyanlongxia
//Date: 2020/8/13
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,s[100005],dp[100005],sum[100005],bucket[100005];
deque<int>q[100005];
int w(int p,int t)
{
    return dp[p-1]+s[p]*t*t;
}
int bsearch(int x,int y)
{
    int res=0x3f3f3f3f;
    int l=1,r=n,mid;
    while (l<=r)
    {
        mid=l+r>>1;
        if(w(x,mid-sum[x]+1)>=w(y,mid-sum[y]+1))
        {
            res=mid;
            r=mid-1;
        }else
            l=mid+1;
    }
    return res;
}
signed main() {
    scanf("%lld", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &s[i]);
        sum[i] = ++bucket[s[i]];
    }
    for (int i = 1; i <= n; ++i) {
        int tmp = s[i];
        while (q[tmp].size() >= 2 && bsearch(q[tmp][q[tmp].size()-2],q[tmp][q[tmp].size()-1])<=bsearch(q[tmp][q[tmp].size()-1],i))
        {
            q[tmp].pop_back();
        }
        q[tmp].push_back(i);
        while (q[tmp].size() >= 2 && bsearch(q[tmp][q[tmp].size()-2],q[tmp][q[tmp].size()-1])<=sum[i])
            q[tmp].pop_back();
        dp[i]=w(q[tmp][q[tmp].size()-1],sum[i]-sum[q[tmp][q[tmp].size()-1]]+1);
    }
    printf("%lld\n",dp[n]);
    return 0;
}