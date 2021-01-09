//File: math.cpp
//Author: yanyanlongxia
//Date: 2020/10/24
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=4e6;
int n;
ll m[N],prod=1,lcm;
ll gcd(ll a,ll b){
    return (!b)?a:gcd(b,a%b);
}
int main() {
    freopen("math.in","r",stdin);
    freopen("math.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&m[i]);
        prod*=m[i];
        if (i==1)
            lcm=m[i];
        else
            lcm=lcm*m[i]/gcd(lcm,m[i]);
    }
    printf("%lld\n",prod-lcm);
    return 0;
}
