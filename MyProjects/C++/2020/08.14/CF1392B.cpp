//File: CF1392B.cpp
//Author: yanyanlongxia
//Date: 2020/8/16
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[1000005],t1[1000005],t2[1000005],maxn,k;
signed main() {
    scanf("%lld",&t);
    while (t--)
    {
        maxn=-0x3f3f3f3f;
        scanf("%lld%lld",&n,&k);
        for (int i = 1; i <= n; ++i) {
            scanf("%lld",&a[i]);
            maxn=max(maxn,a[i]);
        }
        for (int i = 1; i <= n; ++i) {
            t1[i]=maxn-a[i];
        }
        if(k%2==1)
        {
            for (int i = 1; i <= n; ++i) {
                printf("%lld ",t1[i]);
            }
            puts("");
            continue;
        }
        maxn=-0x3f3f3f3f;
        for (int i = 1; i <= n; ++i) {
            maxn=max(maxn,t1[i]);
        }
        for (int i = 1; i <= n; ++i) {
            t2[i]=maxn-t1[i];
            printf("%lld ",t2[i]);
        }
        puts("");
    }
    return 0;
}
