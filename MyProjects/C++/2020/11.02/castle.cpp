//File: castle.cpp
//Author: yanyanlongxia
//Date: 2020/11/2
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const ll mo=1e9+7;
ll  K[9]={0,1,2,9,64,625,7776,117649,2097152};
ll n,k,ans;
ll power(ll a,ll b){
    ll res=1ll;
    a%=mo;
    for(;b;b>>=1){
        if (b & 1)
            res=1ll*res*a%mo;
        a=1ll*a*a%mo;
    }
    return res;
}
int main() {
    freopen("castle.in","r",stdin);
    freopen("castle.out","w",stdout);
    scanf("%lld%lld",&n,&k);
    ans=power(n-k,n-k);
    printf("%lld\n",ans*1ll*K[k]%mo);
    return 0;
}
