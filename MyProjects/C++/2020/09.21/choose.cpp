//File: choose.cpp
//Author: yanyanlongxia
//Date: 2020/9/21
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,k,a[1000005];
bool check(int x)
{
    int cnt=1,now=a[1];
    for (int i=2;i<=n;i++)
        if (a[i]>=now+x)
        {
            cnt++;
            now=a[i];
        }
    return cnt>=k;
}
signed main() {
    freopen("choose.in","r",stdin);
    freopen("choose.out","w",stdout);
    scanf("%lld%lld",&n,&k);
    for (int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    int l=0,r=1000000000000,mid;
    sort(a+1,a+n+1);
    while (l<r)
    {
        mid=l+r>>1;
        if (check(mid))
            l=mid+1;
        else
            r=mid;
    }
    printf("%lld\n",l-1);
}
