//
// Created by admin on 2020/7/22.
//
#include <bits/stdc++.h>
using namespace std;
int n,q;
double a[50000],a1[50000],a2[50000];//下取整差值，上取整差值
bool vis[50000]
int xia(double x)
{
    int an=x;
    return an;
}
int shan(double x)
{
    int an=x;
    if(x>an)
        return an+1;
    else
        return an;
}
struct segment_tree
{
    int l,r;
    double xcm,scm;
    priority_queue<pair<double,int>>datx,dats;//下取整差值最小值和上取整差值
}t[40000];
void merge(int p1,int p2,int p)
{
    for(int i=1;i<=t[p1].datx.size();i++)
    {
        t[p].datx.push(t[p1].datx.top());
        t[p1].datx.pop();
    }
    for(int i=1;i<=t[p2].datx.size();i++)
    {
        t[p].datx.push(t[p2].datx.top());
        t[p2].datx.pop();
    }
    for(int i=1;i<=t[p1].dats.size();i++)
    {
        t[p].dats.push(t[p1].dats.top());
        t[p1].dats.pop();
    }
    for(int i=1;i<=t[p2].dats.size();i++)
    {
        t[p].dats.push(t[p2].dats.top());
        t[p2].dats.pop();
    }
}
void build(int p,int l,int r)
{
    t[p].l=l;t[p].r=r;
    if(l==r)
    {
        t[p].datx.push(make_pair(a1[l],l));
        t[p].dats.push(make_pair(a1[l],l));
        return ;
    }
    int mid=(l+r)/2;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
    merge(p*2,p*2+1,p);
}
double ask(int  p,int l,int r)
{

}
int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];

}