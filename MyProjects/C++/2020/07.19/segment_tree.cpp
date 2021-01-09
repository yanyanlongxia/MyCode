//
// Created by admin on 2020/7/19.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
struct segment_tree
{
    int l,r,sum,add;
}t[1500000];
int n,m,a[3000000];
void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if(l==r)
    {
        t[p].sum=a[l];
        return ;
    }
    int mid=(l+r)/2;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
    t[p].sum=t[p*2].sum+t[p*2+1].sum;
}
void spread(int p)
{
    if(t[p].add)
    {
        t[p*2].sum+=t[p].add*(t[p*2].r-t[p*2].l+1);
        t[p*2+1].sum+=t[p].add*(t[p*2+1].r-t[p*2+1].l+1);
        t[2*p].add+=t[p].add;
        t[2*p+1].add+=t[p].add;
        t[p].add=0;
    }
}
void add(int p,int l,int r,int k)
{
    if(l<=t[p].l&&t[p].r<=r)
    {
        t[p].add+=k;
        int d=(long long)(t[p].r-t[p].l+1)*k;
        t[p].sum+=d;
        return ;
    }
    int mid=(t[p].l+t[p].r)/2;
    spread(p);
    if(mid>=l)
        add(p*2,l,r,k);
    if(mid<r)
        add(p*2+1,l,r,k);
    t[p].sum=t[p*2].sum+t[p*2+1].sum;
}
int ask(int p,int l,int r)
{
    if(l<=t[p].l&&t[p].r<=r)
        return t[p].sum;
    spread(p);
    int mid=(t[p].l+t[p].r)/2,val=0;
    if(l<=mid)
        val+=ask(p*2,l,r);
    if(r>mid)
        val+=ask(p*2+1,l,r);
    return val;
}
signed main()
{
    int op,x,y,z;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    build(1,1,n);
    while (m--)
    {
        cin>>op;
        if(op==1)
        {
            cin>>x>>y>>z;
            add(1,x,y,z);
        }
        else
        {
            cin>>x>>y;
            cout<<ask(1,x,y)<<endl;
        }
    }
    return 0;
}
