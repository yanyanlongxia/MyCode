//File: P3958.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,h,r,x[100005],y[100005],z[100005],fa[100005],sz[100005];
bool bot[100005],top[100005];
int find(int now)
{
    if(fa[now]==now)
        return now;
    return fa[now]=find(fa[now]);
}
inline void merge(int fi,int se)//se to fi
{
    if (find(fi)==find(se))
        return;
    if (sz[find(fi)]<sz[find(se)])
        swap(fi,se);
    sz[find(fi)]+=sz[find(se)];
    sz[find(se)]=0;
    fa[find(se)]=find(fi);
}
inline bool check(int fi,int se)
{
    return (x[fi]-x[se])*(x[fi]-x[se])+(y[fi]-y[se])*(y[fi]-y[se])+(z[fi]-z[se])*(z[fi]-z[se])<=4*r*r ;
}
signed main() {
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld%lld%lld",&n,&h,&r);
        for (int i=1;i<=n;i++)
        {
            top[i]=false;
            bot[i]=false;
            scanf("%lld%lld%lld",&x[i],&y[i],&z[i]);
            fa[i]=i;
            sz[i]=1;
            for (int j=1;j<i;j++)
                if (check(j,i))
                    merge(j,i);
        }
        for (int i=1;i<=n;i++)
        {
            if (z[i]<=r)
                bot[find(i)]=true;
            if (z[i]+r>=h)
                top[find(i)]=true;
        }
        bool flag=false;
        for (int i=1;i<=n;i++)
            if (top[i]&&bot[i])
            {
                flag=true;
                puts("Yes");
                break;
            }
        if (!flag)
            puts("No");
    }
}
