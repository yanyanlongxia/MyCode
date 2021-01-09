//File: hopscotch.cpp
//Author: yanyanlongxia
//Date: 2020/9/14
//
#include <bits/stdc++.h>

using namespace std;
long long n,m,s;
int main() {
    freopen("hopscotch.in","r",stdin);
    freopen("hopscotch.out","w",stdout);
    scanf("%lld%lld%lld",&n,&m,&s);
    printf("%lld\n",((n-1)/s+1)*((n-1)%s+1)*((m-1)/s+1)*((m-1)%s+1));
    return 0;
}