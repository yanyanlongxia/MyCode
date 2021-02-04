//
// Created by admin on 2020/8/1.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k;
int mul(int a,int b,int p)
{
    int ans=0;
    for(;b;b>>=1)
    {
        if(b&1)
            ans=(ans+a)%p;
        a=(a+a)%p;
    }
    return ans;
}
int power(int a,int b,int p)
{
    int ans=1;
    for(;b;b>>=1)
    {
        if(b&1)
            ans=mul(ans,a,p);
        a=mul(a,a,p);
    }
    return ans;
}
signed main()
{
    scanf("%lld%lld%lld",&n,&m,&k);
    printf("%lld\n",mul(k,power(n/2+1,m,n+1),n+1));
    return 0;
}