//
// Created by admin on 2020/7/31.
//
#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL x,y,n,m,l;
LL e_gcd(LL a,LL b,LL &p,LL &q)
{
    if(b==0)
    {
        p=1;
        q=0;
        return a;
    }
    LL r=e_gcd(b,a%b,p,q);
    LL d=p;
    p=q;
    q=d-a/b*q;
    return r;
}
int main()
{
    LL p,q;
    scanf("%lld%lld%lld%lld%lld",&x,&y,&m,&n,&l);
    LL a=n-m,b=l,c=x-y;
    if(a<0) a=-a,c=-c;
    LL z=e_gcd(a,b,p,q);
    if(c%z==0)
    {
        int k=b/z;
        printf("%lld\n",((p*c/z)%k+k)%k);
    }
    else printf("Impossible\n");
    return 0;
}


