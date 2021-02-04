//File: P4873.cpp
//Author: yanyanlongxia
//Date: 2020/9/20
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1000005],dp[1000005],t,tot;
signed main() {
    int x,y;
    scanf("%lld%lld",&n,&t);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld%lld",&x,&y);
        a[i]=x+t*y;
    }
    reverse(a+1,a+n+1);
    for (int i=1;i<=n;i++) {
        if (dp[tot] <= a[i]) {
            tot++;
            dp[tot] = a[i];
        } else
            dp[upper_bound(dp + 1, dp + tot + 1, a[i]) - dp] = a[i];
    }
    printf("%lld\n",tot);
    return 0;
}
