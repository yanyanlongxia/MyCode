//File: SP1043.cpp
//Author: yanyanlongxia
//Date: 2020/8/14
//
#include <bits/stdc++.h>

using namespace std;
int n,m,a[50005];
struct segment
{
    int l,r,lmax,rmax,dat,sum;
}t[400005];
void build(int p,int l,int r)
{
    t[p].l=l,t[p].r=r;
    if(l==r)
    {
        t[p].lmax=t[p].rmax=t[p].dat=t[p].sum=a[l];
        return;
    }
    int mid=(l+r)>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    t[p].sum=t[p<<1].sum+t[p<<1|1].sum;
    t[p].lmax=max(t[p<<1].lmax,t[p<<1].sum+t[p<<1|1].lmax);
    t[p].rmax=max(t[p<<1|1].rmax,t[p<<1|1].sum+t[p<<1].rmax);
    t[p].dat=max(t[p<<1].dat,max(t[p<<1|1].dat,t[p<<1].rmax+t[p<<1|1].lmax));
}
segment ask(int p,int l,int r)
{
    segment a,b,ans;
    a.lmax=a.rmax=a.sum=a.dat=b.lmax=b.rmax=b.sum=b.dat=-0x3f3f3f3f;
    ans.sum=0;
    if(l<=t[p].l&&t[p].r<=r)
    {
        return t[p];
    }
    int mid=(t[p].l+t[p].r)>>1;
    if(l<=mid)
    {
        a=ask(p<<1,l,r);
        ans.sum+=a.sum;
    }
    if(r>mid)
    {
        b=ask(p<<1|1,l,r);
        ans.sum+=b.sum;
    }
    ans.dat=max(a.dat,max(b.dat,a.rmax+b.lmax));
    ans.lmax=max(a.lmax,a.sum+b.lmax);
    ans.rmax=max(b.rmax,b.sum+a.rmax);
    //if(l>mid)
    //    ans.lmax=max(ans.lmax,b.lmax);
    //if(r<=mid)
    //    ans.rmax=max(ans.rmax,a.rmax);
    return ans;
}
int main() {
    int x,y;
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&a[i]);
    }
    build(1,1,n);
    scanf("%d",&m);
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d",&x,&y);
        printf("%d\n",ask(1,x,y).dat);
    }
    return 0;
}
