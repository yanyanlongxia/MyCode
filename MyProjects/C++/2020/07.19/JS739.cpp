//
// Created by admin on 2020/7/23.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],c[500005];
inline int lowbit(int x)
{
    return x & -x;
}
int ask(int x,int y)
{
    int ans=-1;
    for (;y>=x;y--)
    {
        for(;y-lowbit(y)>=x;y-=lowbit(y))
            ans=max(ans,c[y]);
        ans=max(ans,a[y]);
    }
    return ans;
}
void change(int x,int y)
{
    for(;x<=n;x+=lowbit(x))
        c[x]=max(c[x],y);
}
signed main()
{
    char s[2];
    int x,y;
    scanf("%lld%lld",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        change(i,a[i]);
    }
    for(int i=1;i<=m;i++)
    {
        scanf("%s%lld%lld",s,&x,&y);
        if(s[0]=='U')
        {
            a[x]=max(a[x],y);
            change(x,y);
        }
        if(s[0]=='Q')
            printf("%lld\n",ask(x,y));
    }
    return 0;
}