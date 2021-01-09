//File: P6569.cpp
//Author: yanyanlongxia
//Date: 2020/10/5
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,m,q,ans[500];
struct matrix
{
    ll num[105][105];
    ll ns,ms;
    matrix()
    {
        memset(num,0, sizeof(num));
        ns=ms=0;
    }
    void clear ()
    {
        for (ll i=1;i<=ns;i++)
                num[i][i]=1;
    }
    matrix operator * (matrix b)const
    {
        matrix res;
        res.ns=ns;
        res.ms=b.ms;
        for (ll i=1;i<=ns;i++)
            for (ll j=1;j<=b.ms;j++)
                for (ll k=1;k<=ms;k++)
                    res.num[i][j]^=num[i][k]*b.num[k][j];
        return res;
    }
    matrix operator ^ (ll k)const
    {
        matrix res,now;
        now=*this;
        res.ns=ns;
        res.ms=ms;
        res.clear();
        for (;k;k>>=1)
        {
            if (k&1)
                res=res*now;
            now=now*now;
        }
        return res;
    }
}pres[35];
void pm(const matrix& x)
{
    for (ll i=1;i<=x.ns;i++)
    {
        for (ll j=1;j<=x.ms;j++)
            printf("%lld ",x.num[i][j]);
        printf("\n");
    }
}
int main() {
    ll x,y;
    scanf("%lld%lld%lld",&n,&m,&q);
    matrix lsq,base;
    lsq.ns=1;
    lsq.ms=n;
    for (ll i=1;i<=n;i++)
        scanf("%lld",&lsq.num[1][i]);
    base.ns=base.ms=n;
    while (m--)
    {
        scanf("%lld%lld",&x,&y);
        base.num[x][y]=base.num[y][x]=1;
    }
    pres[0]=base;
    for (ll i=1;i<=33;i++)
        pres[i]=pres[i-1]*pres[i-1];
    while (q--)
    {
        matrix now=lsq;
        scanf("%lld",&x);
        for (ll i=33;i>=0;i--)
        {
            if (x&(1ll<<i))
                now=now*pres[i];
        }
        printf("%lld\n",now.num[1][1]);
    }
    return 0;
}
