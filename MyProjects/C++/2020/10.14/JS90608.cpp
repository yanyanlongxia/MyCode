//File: JS90608.cpp
//Author: yanyanlongxia
//Date: 2020/10/17
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e6+5;
ll gcd(ll a,ll b)
{
    return b==0?a:gcd(b,a%b);
}
ll exgcd(ll a,ll b,ll &x,ll &y)
{
    if (!b)
    {
        x=1;
        y=0;
        return a;
    }
    ll r=exgcd(b,a%b,y,x);
    y-=x*(a/b);
    return r;
}
int n;
ll a[N],res=1,p,lgcd;
int main() {
    freopen("data.in","r",stdin);
    //freopen("JS90608.out","w",stdout);
    scanf("%d",&n);
    scanf("%lld",&p);
    for (int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    lgcd=a[1];
    for (int i=2;i<=n;i++)
        lgcd=gcd(lgcd,a[i]);
    ll x=0,y=0;
    exgcd(lgcd,p,x,y);
    lgcd=x;
    for (int i=1;i<=n;i++)
    {
        a[i]%=p;
        res*=a[i];
        res%=p;
    }
    res*=lgcd;
    res%=p;
    printf("%lld\n",res);
    return 0;
}
