//File: P2440.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,k,len[1000005];
bool check(int x)
{
    int cnt=0;
    for (int i=1;i<=n;i++)
        cnt+=len[i]/x;
    return cnt>=k;
}
signed main() {
    int l=0,r=0,mid;
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld",&len[i]);
        r=max(r,len[i]);
    }
    while (l<r)
    {
        mid=l+r+1>>1;
        if (check(mid))
            l=mid;
        else
            r=mid-1;
    }
    printf("%lld\n",l);
    return 0;
}
