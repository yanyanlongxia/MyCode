//File: bf.cpp
//Author: yanyanlongxia
//Date: 2020/9/21
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,sum;
signed main() {
    int x;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&x);
        sum+=x;
    }
    printf("%lld\n",sum);
    return 0;
}
