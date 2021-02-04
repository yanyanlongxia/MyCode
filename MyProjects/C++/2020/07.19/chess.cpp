//
// Created by admin on 2020/7/20.
//
#include <bits/stdc++.h>
#define int long long
#define MN 1000005
using namespace std;
int n,m,a[MN],f[MN],q[MN],l,r,s[MN];
inline int read()
{
    int x=0,ff=1;char ch=getchar();
    while (!isdigit(ch))
    {
        if (ch=='-')
            ff=-1;
        ch=getchar();
    }
    while (isdigit(ch))
    {
        x=x*10+ch-48;
        ch=getchar();
    }
    return x*ff;
}
void push(int x,int i)
{
    while(l<=r&&q[r]<=x)
        --r;
    q[++r]=x;
    s[r]=i;
}
signed main()
{
    n=read();m=read();
    for(int i=1;i<=n;i++)
        a[i]=read();
    l=1,r=0;
    push(-f[n]+a[n],n);
    for(int i=n-1;i>=0;i--)
    {
        while (s[l]>i+m)
            l++;
        f[i]=q[l];
        push(-f[i]+a[i],i);
    }
    cout<<f[0]<<endl;
    return 0;
}
