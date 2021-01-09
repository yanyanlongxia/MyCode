//File: SP1557.cpp
//Author: yanyanlongxia
//Date: 2020/8/15
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mn=1e5;
int n,a[1000005],q,pre[1000005],last[1000005],ans[1000005];
struct segment
{
    int l,r,dat,sum,dtag,stag;
}t[1000005];
struct query
{
    int l,r,id;
}as[1000005];
void build(int p,int l,int r)
{
    t[p].l=l;t[p].r=r;
    if(l==r)
        return;
    int mid=(l+r)>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
}
void spread(int p)
{
    if(t[p].dtag || t[p].stag)
    {
        int ls=p<<1,rs=p<<1|1;
        t[ls].dat=max(t[ls].dat,t[ls].sum+t[p].dtag);
        t[ls].sum+=t[p].stag;
        t[ls].dtag=max(t[ls].dtag,t[ls].stag+t[p].dtag);
        t[ls].stag+=t[p].stag;
        t[rs].dat=max(t[rs].dat,t[rs].sum+t[p].dtag);
        t[rs].sum+=t[p].stag;
        t[rs].dtag=max(t[rs].dtag,t[rs].stag+t[p].dtag);
        t[rs].stag+=t[p].stag;
        t[p].stag=t[p].dtag=0;
    }
}
void add(int p,int l,int r,int d)
{
    if(l<=t[p].l && t[p].r<=r)
    {
        t[p].sum+=d;
        t[p].dat=max(t[p].dat,t[p].sum);
        t[p].stag+=d;
        t[p].dtag=max(t[p].dtag,t[p].stag);
        return;
    }
    spread(p);
    int mid=(t[p].l+t[p].r)/2;
    if(l<=mid)
        add(p<<1,l,r,d);
    if(r>mid)
        add(p<<1|1,l,r,d);
    t[p].sum=max(t[p<<1].sum,t[p<<1|1].sum);
    t[p].dat=max(t[p<<1].dat,t[p<<1|1].dat);
}
int ask(int p,int l,int r)
{
    if(l<=t[p].l && t[p].r<=r)
        return t[p].dat;
    spread(p);
    int mid=(t[p].l+t[p].r)>>1,res=-0x3f3f3f3f;
    if(l<=mid)
        res=max(res,ask(p<<1,l,r));
    if(r>mid)
        res=max(res,ask(p<<1|1,l,r));
    return res;
}
bool cmp(query a1,query b1)
{
    return a1.r<b1.r;
}
signed main() {
    int x,y;
    scanf("%lld",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld",&a[i]);
        pre[i]=last[a[i]+mn];
        last[a[i]+mn]=i;
    }
    scanf("%lld",&q);
    for (int i = 1; i <= q; ++i) {
        scanf("%lld%lld",&as[i].l,&as[i].r);
        as[i].id=i;
    }
    sort(as+1,as+q+1,cmp);
    build(1,1,n);
    int tmp=1;
    for (int i = 1; i <= n; ++i) {
        add(1,pre[i]+1,i,a[i]);
        for (;tmp<=q&&as[tmp].r<=i;tmp++)
        {
            ans[as[tmp].id]=ask(1,as[tmp].l,as[tmp].r);
        }
    }
    for (int i = 1; i <= q; ++i) {
        printf("%lld\n",ans[i]);
    }
    return 0;
}
