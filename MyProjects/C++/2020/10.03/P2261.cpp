//File: P2261.cpp
//Author: yanyanlongxia
//Date: 2020/10/4
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;
ll n,m,ans,lim;
int main() {
    scanf("%lld%lld",&m,&n);
    lim=min(n,m);
    ans=(n)*(m);
    ll cnt=0;
    for (ll l=1,r;l<=lim;l=r+1)
    {
        r=min(n/(n/l),lim);
        cnt=(cnt+((l+r)*(r-l+1)/2*(n/l)));
    }
    ans=(ans-cnt);
    printf("%lld\n",ans);
    return 0;
}
