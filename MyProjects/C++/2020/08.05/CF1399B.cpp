//File: CF1399B.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[100],b[100],ra[100],rb[100],mina,minb,ans;
signed main() {
    scanf("%lld",&t);
    while(t--)
    {
        ans=0;
        mina=0x3f3f3f3f3f3f,minb=0x3f3f3f3f3f3f;
        scanf("%lld",&n);
        for (int i = 1; i <= n; ++i) {
            scanf("%lld",&a[i]);
            mina=min(mina,a[i]);
        }
        for (int i = 1; i <= n; ++i) {
            scanf("%lld",&b[i]);
            minb=min(minb,b[i]);
        }
        for (int i = 1; i <= n; ++i) {
            ra[i]=a[i]-mina;
            rb[i]=b[i]-minb;
        }
        for (int i = 1; i <= n; ++i) {
            ans+=max(ra[i],rb[i]);
        }
        printf("%lld\n",ans);
    }
    return 0;
}