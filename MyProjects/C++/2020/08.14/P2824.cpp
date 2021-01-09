//File: P2824.cpp
//Author: yanyanlongxia
//Date: 2020/8/15
//
#include <bits/stdc++.h>

using namespace std;
int n,m,a[100005],opt[100005],qx[100005],qy[100005],q;
struct segment
{
    int l,r,dat,tag;
}t[800005];
void build(int p,int l,int r,int k)
{
    t[p].l=l;t[p].r=r;
    if(l==r)
    {
        t[p].dat=(a[l]>=k);
        t[p].tag=0;
        return;
    }
    int mid=(l+r)/2;
    build(p<<1,l,mid,k);
    build(p<<1|1,mid+1,r,k);
    t[p].dat=t[p<<1].dat+t[p<<1|1].dat;
    t[p].tag=0;
}
void spread(int p)
{
    if(t[p].tag!=0)
    {
        t[p<<1].tag=t[p<<1|1].tag=t[p].tag;
        int mid=t[p].l+t[p].r>>1;
        if (t[p].tag==1)
        {
            t[p<<1].dat=mid-t[p].l+1;
            t[p<<1|1].dat=t[p].r-mid;
        }else
            t[p<<1].dat=t[p<<1|1].dat=0;
        t[p].tag=0;
    }
}
int ask(int p,int l,int r)
{
    if(l<=t[p].l && t[p].r<=r)
        return t[p].dat;
    spread(p);
    int mid=t[p].l+t[p].r>>1,val=0;
    if(l<=mid)
        val+=ask(p<<1,l,r);
    if(r>mid)
        val+=ask(p<<1|1,l,r);
    return val;
}
int query(int p,int x)
{
    if(t[p].l==t[p].r)
        return t[p].dat;
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    if(x<=mid)
        return query(p<<1,x);
    else
        return query(p<<1|1,x);
}
void change(int p,int l,int r,int op)
{
    if(l<=t[p].l && t[p].r<=r)
    {
        t[p].dat=op*(t[p].r-t[p].l+1);
        t[p].tag=op ? 1 : -1;
        return;
    }
    spread(p);
    int mid=(t[p].l+t[p].r)>>1;
    if(l<=mid)
        change(p<<1,l,r,op);
    if(r>mid)
        change(p<<1|1,l,r,op);
    t[p].dat=t[p<<1].dat+t[p<<1|1].dat;
}
bool check(int x)
{
    build(1,1,n,x);
    for (int i = 1; i <= m; ++i) {
        int tmp=ask(1,qx[i],qy[i]);
        if(opt[i]==0)
        {
            change(1,qy[i]-tmp+1,qy[i],1);
            change(1,qx[i],qy[i]-tmp,0);
        }else
        {
            change(1,qx[i],qx[i]+tmp-1,1);
            change(1,qx[i]+tmp,qy[i],0);
        }
    }
    return query(1,q);
}
int main() {
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d%d",&opt[i],&qx[i],&qy[i]);
    }
    scanf("%d",&q);
    int l=1,r=n,mid;
    while (l<r)
    {
        mid=l+r+1>>1;
        if(check(mid))
            l=mid;
        else
            r=mid-1;
    }
    printf("%d\n",l);
    return 0;
}
