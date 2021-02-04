//File: SP2916.cpp
//Author: yanyanlongxia
//Date: 2020/8/15
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,q,a[100005],ti;
struct segment
{
    int l,r,dat,lmax,rmax,sum;
}t[800000];
void update(segment &fa,segment &ls,segment &rs)
{
    fa.sum=ls.sum+rs.sum;
    fa.lmax=max(ls.lmax,ls.sum+rs.lmax);
    fa.rmax=max(rs.rmax,rs.sum+ls.rmax);
    fa.dat=max(ls.dat,max(rs.dat,ls.rmax+rs.lmax));
}
void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if(l==r)
    {
        t[p].lmax=t[p].rmax=t[p].sum=t[p].dat=a[l];
        return;
    }
    int mid=(l+r)>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(t[p],t[p<<1],t[p<<1|1]);
}
segment ask(int p,int l,int r)
{
    segment tr;
    if(l>r)
        return tr;
    if(l<=t[p].l && t[p].r<=r)
    {
        return t[p];
    }
    int mid=t[p].l+t[p].r>>1;
    if(l>mid)
        return ask(p<<1|1,l,r);
    else
    {
        if(r<=mid)
            return ask(p<<1,l,r);
        else
        {
            segment ls,rs;
            ls=ask(p<<1,l,r);
            rs=ask(p<<1|1,l,r);
            update(tr,ls,rs);
            return tr;
        }
    }
}
signed main() {
    int a1,b1,a2,b2;
    scanf("%lld",&ti);
    while (ti--)
    {
        scanf("%lld",&n);
        for (int i = 1; i <= n; ++i) {
            scanf("%lld",&a[i]);
        }
        build(1,1,n);
        scanf("%lld",&q);
        for (int i = 1; i <= q; ++i) {
            scanf("%lld%lld%lld%lld",&a1,&b1,&a2,&b2);
            if(b1<a2)
                printf("%lld\n",max(ask(1,a1,b1-1).rmax,(int)0)+ask(1,b1,a2).sum+max(ask(1,a2+1,b2).lmax,(int)0));
            else
            {
                int tmp=ask(1,a2,b1).dat;
                tmp=max(tmp,ask(1,a2,b1).lmax+ask(1,a1,a2-1).rmax);
                tmp=max(tmp,ask(1,b1+1,b2).lmax+ask(1,a2,b1).rmax);
                tmp=max(tmp,ask(1,a2,b1).sum+max(ask(1,a1,a2-1).rmax,(int)0)+max(ask(1,b1+1,b2).lmax,(int)0));
                printf("%lld\n",tmp);
            }
        }
    }
}
