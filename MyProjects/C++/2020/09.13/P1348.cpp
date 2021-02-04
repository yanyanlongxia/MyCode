//File: P1348.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int a,b,ans;
signed main() {
    scanf("%lld%lld",&a,&b);
    for (int i=a;i<=b;i++)
        if (i%2!=0 || i%4==0)
            ans++;
    printf("%lld\n",ans);
    return 0;
}
