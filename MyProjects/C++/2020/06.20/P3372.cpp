//
// Created by admin on 2020/6/21.
//
#include <bits/stdc++.h>
using namespace std;
struct segment_tree
{
    int l,r,sum;
}t[1500000];
int n,m,a[300000];
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
void add(int p,int l,int r,int k)
{
    if(l<=t[p].l&&t[p].r<=r)
    {
        int d=(t[p].r-t[p].l+1)*k;
        t[p].sum+=d;
        return ;
    }
    int mid=(t[p].l+t[p].r)/2;
    if(mid>=l)
        add(p*2,l,r,k);
    if(mid<r)
        add(p*2+1,l,r,k);
    t[p].sum=t[p*2].sum+t[p*2+1].sum;//从下往上传递
}
int ask(int p,int l,int r)
{
    if(l<=t[p].l&&t[p].r<=r)
        return t[p].sum;
    int mid=(t[p].l+t[p].r)/2,val=0;
    if(l<=mid)
        val+=ask(p*2,l,r);
    if(r>mid)
        val+=ask(p*2+1,l,r);
    return val;
}
int main()
{
    ios::sync_with_stdio(false); //优化
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