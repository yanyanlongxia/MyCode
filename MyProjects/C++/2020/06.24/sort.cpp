//
// Created by admin on 2020/6/25.
//
#include <bits/stdc++.h>
using namespace std;
long long n,a[3000000];
int main()
{
    freopen("sort.in","r",stdin);
    freopen("sort.out","w",stdout);
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    sort(a+1,a+n+1);
    for(long long i=1;i<n;i++)
        printf("%lld ",a[i]);
    printf("%lld\n",a[n]);
    return 0;
}
