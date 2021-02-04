//
// Created by admin on 2020/7/5.
//
//#include <bits/stdc++.h>
#include <cstdio>
#include <cctype>
#include <algorithm>
using namespace std;
int a[1000000];
struct seg
{
    int l,r;
    int max;
}t[6000000];
inline void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if(l==r)
    {
        t[p].max=a[l];
        return;
    }
    int mid=(l+r) >> 1;
    build(p << 1,l,mid);
    build(p << 1 | 1,mid+1,r);
    t[p].max=max(t[p << 1].max,t[p << 1 | 1].max);
}
inline int ask(int p,int l,int r)
{
    if(l<=t[p].l&&r>=t[p].r)
        return t[p].max;
    int mid=(t[p].l+t[p].r) >> 1,res=-0x3f3f3f3f;
    if(l<=mid)
        res=max(res,ask(p << 1,l,r));
    if(mid<r)
        res=max(res,ask(p << 1 | 1,l,r));
    return res;
}
inline int read(void)
{
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}
inline void write(int x)
{
    if(x<0) putchar('-'),x=-x;
    if(x>9) write(x/10);
    putchar(x%10+'0');
}
int main(void)
{
    int x=0,y=0,n=0,m=0;
    n=read();m=read();
    for(int i=1;i<=n;++i)
        a[i]=read();
    build(1,1,n);
    for(int i=1;i<=m;++i)
    {
        x=read();y=read();
        write(ask(1,x,y));
        puts("");
    }
    return 0;
}
