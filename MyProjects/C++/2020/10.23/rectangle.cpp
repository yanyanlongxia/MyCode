//File: rectangle.cpp
//Author: yanyanlongxia
//Date: 2020/10/28
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const ll mo=1e9+7;
ll n,m,ans;

int main() {
    freopen("rectangle.in","r",stdin);
    freopen("rectangle.out","w",stdout);
    scanf("%lld%lld",&n,&m);
    n%=mo;
    m%=mo;
    ans=(n*m)%mo;
    ans=(ans/4*((n*m-n-m+1)%mo))%mo;
    printf("%lld\n",ans);
    return 0;
}
