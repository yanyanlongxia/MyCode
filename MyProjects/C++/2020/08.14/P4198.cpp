//File: P4198.cpp
//Author: yanyanlongxia
//Date: 2020/8/15
//
#include <bits/stdc++.h>

using namespace std;
int n,m;
double a[100000];
struct segment
{
    int l,r,len;
    double ml;
}t[800000];
void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if(l==r)
        return;
    int mid=(l+r)>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
}
int update(double x,int p)
{
    if(t[p].ml<=x)
        return 0;
    if(a[t[p].l]>x)
        return t[p].len;
    if(t[p].l==t[p].r)
        return a[t[p].l]>x;
    int mid=t[p].l+t[p].r>>1;
    if(t[p<<1].ml<=x)
        return update(x,p<<1|1);
    else
        return update(x,p<<1)+t[p].len-t[p<<1].len;
}
void change(int p,int x,int y)
{
    if(t[p].l==t[p].r)
    {
        t[p].ml=(double)y/x;
        t[p].len=1;
        return;
    }
    int mid=(t[p].l+t[p].r)>>1;
    if(x<=mid)
        change(p<<1,x,y);
    else
        change(p<<1|1,x,y);
    t[p].ml=max(t[p<<1].ml,t[p<<1|1].ml);
    t[p].len=t[p<<1].len+update(t[p<<1].ml,p<<1|1);
}
int main() {
    scanf("%d%d",&n,&m);
    int x,y;
    build(1,1,n);
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d",&x,&y);
        a[x]=(double)y/x;
        change(1,x,y);
        printf("%d\n",t[1].len);
    }
    return 0;
}
