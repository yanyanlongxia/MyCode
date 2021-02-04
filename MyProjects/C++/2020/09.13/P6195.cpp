//File: P6195.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>
#define int long long
#define mo 1000000007
using namespace std;
int n,m,ans;
int power(int a,int b)
{
    int res=1;
    for (;b;b>>=1)
    {
        if (b&1)
            res=res*a%mo;
        a=a*a%mo;
    }
    return res;
}
signed main() {
    scanf("%lld%lld",&n,&m);
    ans=n+1;
    ans*=power(2,m);
    ans-=1;
    ans=(ans+mo)%mo;
    printf("%lld\n",ans);
    return 0;
}
