//
// Created by admin on 2020/8/2.
//qwq线段树细节怎么这么恶心……调了好久
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,x[100000],tot,ans;
struct segment
{
    int l,r,sum,len;
}t[800000];
struct sl
{
    int l,r,h,m;
}line[800000];
void build(int p,int l,int r)
{
    t[p].l=l;t[p].r=r;
    if(l==r)
        return ;
    int mid=(l+r)/2;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
}
void update(int p)
{
    if(t[p].sum)
        t[p].len=x[t[p].r+1]-x[t[p].l];
    else
        t[p].len=t[p*2].len+t[p*2+1].len;
}
void change(int p,int l,int r,int c)
{
    if(l<=x[t[p].l]&&x[t[p].r+1]<=r)
    {
        t[p].sum+=c;
        update(p);
        return ;
    }
    //update(p);
    int mid=(x[t[p].l]+x[t[p].r])/2;
    if(l<=mid)
        change(p*2,l,r,c);
    if(r>mid)
        change(p*2+1,l,r,c);
    update(p);
}
bool cmp(sl a,sl b)
{
    return a.h<b.h;
}
signed main()
{
    scanf("%lld",&n);
    int xu,xd,yu,yd;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld%lld",&xu,&yu,&xd,&yd);
        x[2*i-1]=xd;x[2*i]=xu;
        line[2*i-1]=(sl){xu,xd,yd,1};
        line[2*i]=(sl){xu,xd,yu,-1};
    }
    n*=2;
    sort(x+1,x+1+n);
    sort(line+1,line+1+n,cmp);
    tot=unique(x+1,x+n+1)-x-1;
    tot--;
    build(1,1,tot);
    for(int i=1;i<n;i++)
    {
        change(1,line[i].l,line[i].r,line[i].m);
        ans+=t[1].len*(line[i+1].h-line[i].h);
    }
    printf("%d\n",ans);
    return 0;
}