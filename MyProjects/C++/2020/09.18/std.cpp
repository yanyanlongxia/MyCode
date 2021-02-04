//File: std.cpp
//Author: yanyanlongxia
//Date: 2020/9/21
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[10000005],sum;
signed main() {
    scanf("%lld",&n);
    for (int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    for (int i=1;i<=n;i++)
        sum+=a[i];
    printf("%lld\n",sum);
    return 0;
}
