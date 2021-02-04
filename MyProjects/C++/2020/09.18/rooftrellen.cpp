//File: rooftrellen.cpp
//Author: yanyanlongxia
//Date: 2020/9/20
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,id,a[1000005],m,maxn;
signed main() {
    freopen("rooftrellen.in","r",stdin);
    freopen("rooftrellen.out","w",stdout);
    scanf("%lld",&id);
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld%lld",&n,&m);
        int tot=0;
        maxn=-0x3f3f3f3f;
        for (int i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            maxn=max(maxn,a[i]);
        }
        for (int i=1;i<=n;i++)
            tot+=maxn-a[i];
        if (tot<m)
        {
            puts("No");
            continue;
        }

        tot-=m;
        if (tot%n==0)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}
