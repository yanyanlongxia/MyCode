//
// Created by admin on 2020/8/2.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,k,a[5000010];
bool check(int l)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
        cnt+=(a[i]-1)/l;
    return cnt<=k;
}
signed main()
{
    int tem=0;
    scanf("%lld%lld",&n,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        tem=max(tem,a[i]);
    }
    int l=1,r=tem,mid;
    while(r>=l)
    {
        mid=(l+r)/2;
        if(check(mid))
            r=mid-1;
        else
            l=mid+1;
    }
    printf("%lld\n",l);
    return 0;
}
