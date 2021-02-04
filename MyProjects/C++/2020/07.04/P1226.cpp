//
// Created by admin on 2020/7/4.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,p;
int power(int a,int b,int mo)
{
    int ans=1;
    for(;b;b>>=1)
    {
        if(b&1)
            ans=(long long)ans*a%mo;
        a=(long long)a*a%mo;
    }
    return ans;
}
signed main()
{
    cin>>n>>m>>p;
    if(m==0) //特判
    {
        printf("%lld^%lld mod %lld=%d",n,m,p,0);
        return 0;
    }
    printf("%lld^%lld mod %lld=%lld",n,m,p,power(n,m,p));
    return 0;
}
