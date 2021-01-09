//File: CF1392C.cpp
//Author: yanyanlongxia
//Date: 2020/8/16
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[1000005],maxn;
signed main() {
    scanf("%lld",&t);
    while (t--)
    {
        maxn=0;
        scanf("%lld",&n);
        for (int i = 1; i <= n; ++i) {
            scanf("%lld",&a[i]);
        }
        for (int i = 1; i <= n - 1; ++i) {
            if(a[i+1]>a[i])
                maxn=max(maxn,a[i+1]-a[i]);
        }
        printf("%lld\n",maxn);
    }
}
