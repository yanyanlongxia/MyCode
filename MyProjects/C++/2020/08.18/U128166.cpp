//File: U128166.cpp
//Author: yanyanlongxia
//Date: 2020/8/22
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int mod=1<<31;
int n,m,a[1000005];
inline int mo(int x)
{
    while(x>=mod)
        x-=mod;
    return x;
}
int gcd(int x,int y)
{
    if(y==0)
        return x;
    return mo(gcd(y,x%y));
}
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}
struct segment
{
    int l,r,sum,tag;
    bool judge;
}t[8000005];
inline void update(int p)
{
    t[p].judge=(t[p<<1].judge && t[p<<1|1].judge);
    t[p].sum=mo(t[p<<1].sum+t[p<<1|1].sum);
}
void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if (l==r)
    {
        if(a[l]==1)
            t[p].judge=true;
        t[p].sum=a[l];
        return;
    }
    int mid=l+r>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(p);
}
void change(int p,int l,int r,int val)
{
    if(t[p].l==t[p].r)
    {
        t[p].sum=mo(gcd(t[p].sum,val));
        if(t[p].sum==1)
            t[p].judge=true;
        return;
    }
    int mid=t[p].l+t[p].r>>1;
    if(l<=mid&&!t[p<<1].judge)
        change(p<<1,l,r,val);
    if(r>mid && !t[p<<1|1].judge)
        change(p<<1|1,l,r,val);
    update(p);
}
int ask(int p,int l,int r)
{
    if(l<=t[p].l && t[p].r<=r)
        return t[p].sum;
    int mid=t[p].l+t[p].r>>1,val=0;
    if(l<=mid)
        val=mo(val+ask(p<<1,l,r));
    if(r>mid)
        val=mo(val+ask(p<<1|1,l,r));
    return mo(val);
}
signed main() {
    int opt,x,y,z;
    n=read();m=read();
    //scanf("%lld%lld",&n,&m);
    mod*=2;
    mod=-mod;
    for (int i = 1; i <= n; ++i){
        //scanf("%lld",&a[i]);
        //a[i]=mo(a[i]);
        a[i]=mo(read());
    }
    build(1,1,n);
    while (m>0)
    {
        opt=read();
        //scanf("%lld",&opt);
        if(opt==1)
        {
            x=read();
            y=read();
            z=read();
            //scanf("%lld%lld%lld",&x,&y,&z);
            z=mo(z);
            change(1,x,y,z);
        }
        else
        {
            x=read();
            y=read();
            //scanf("%lld%lld",&x,&y);
            printf("%lld\n",ask(1,x,y));
        }
        opt=read();
        //scanf("%lld",&opt);
        if(opt==1)
        {
            x=read();
            y=read();
            z=read();
            //scanf("%lld%lld%lld",&x,&y,&z);
            z=mo(z);
            change(1,x,y,z);
        }
        else
        {
            x=read();
            y=read();
            //scanf("%lld%lld",&x,&y);
            printf("%lld\n",ask(1,x,y));
        }
        opt=read();
        //scanf("%lld",&opt);
        if(opt==1)
        {
            x=read();
            y=read();
            z=read();
            //scanf("%lld%lld%lld",&x,&y,&z);
            z=mo(z);
            change(1,x,y,z);
        }
        else
        {
            x=read();
            y=read();
            //scanf("%lld%lld",&x,&y);
            printf("%lld\n",ask(1,x,y));
        }
        opt=read();
        //scanf("%lld",&opt);
        if(opt==1)
        {
            x=read();
            y=read();
            z=read();
            //scanf("%lld%lld%lld",&x,&y,&z);
            z=mo(z);
            change(1,x,y,z);
        }
        else
        {
            x=read();
            y=read();
            //scanf("%lld%lld",&x,&y);
            printf("%lld\n",ask(1,x,y));
        }
        m-=4;
    }
    return 0;
}
