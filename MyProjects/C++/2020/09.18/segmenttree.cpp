//File: segmenttree.cpp
//Author: yanyanlongxia
//Date: 2020/9/19
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1000005],q;
struct segment
{
    int l,r,sum,add;
}t[8000005];
inline void update(int p)
{
    t[p].sum=t[p<<1].sum+t[p<<1|1].sum;
}
void build(int p,int l,int r)
{
    t[p].l=l;t[p].r=r;
    if (l==r)
    {
        t[p].sum=a[l];
        return;
    }
    int mid=l+r>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(p);
}
void spread(int p)
{
    if (t[p].add)
    {
        t[p<<1].sum+=(t[p<<1].r-t[p<<1].l+1)*t[p].add;
        t[p<<1|1].sum+=(t[p<<1|1].r-t[p<<1|1].l+1)*t[p].add;
        t[p<<1].add+=t[p].add;
        t[p<<1|1].add+=t[p].add;
        t[p].add=0;
    }
}
void change(int p,int l,int r,int val)
{
    if (l<=t[p].l && t[p].r<=r)
    {
        t[p].sum+=(t[p].r-t[p].l+1)*val;
        t[p].add+=val;
        return;
    }
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    if (l<=mid)
        change(p<<1,l,r,val);
    if (r>mid)
        change(p<<1|1,l,r,val);
    update(p);
}
int ask(int p,int l,int r)
{
    if (l<=t[p].l && t[p].r<=r)
        return t[p].sum;
    spread(p);
    int mid=t[p].l+t[p].r>>1,val=0;
    if (l<=mid)
        val+=ask(p<<1,l,r);
    if (r>mid)
        val+=ask(p<<1|1,l,r);
    return val;
}
signed main() {
    int x,y,z,opt;
    scanf("%lld%lld",&n,&q);
    for (int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    build(1,1,n);
    for (int i=1;i<=q;i++)
    {
        scanf("%lld",&opt);
        if (opt==1)
        {
            scanf("%lld%lld%lld",&x,&y,&z);
            change(1,x,y,z);
        }
        else
        {
            scanf("%lld%lld",&x,&y);
            printf("%lld\n",ask(1,x,y));
        }
    }
    return 0;
}
