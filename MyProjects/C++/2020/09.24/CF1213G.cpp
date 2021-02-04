//File: CF1213G.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans[1000005],fa[1000005],sz[1000005];
struct lsq
{
    int u,v,w;
}edge[1000005];
inline bool cmp(lsq a,lsq b)
{
    return a.w<b.w;
}
inline int find(int x)
{
    if (fa[x]==x)
        return x;
    return fa[x]=find(fa[x]);
}
inline void merge(int x,int y)
{
    if (sz[find(x)]<sz[find(y)])
        swap(x,y);
    sz[find(x)]+=sz[find(y)];
    fa[find(y)]=find(x);
}
signed main() {
    int q;
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<n;i++)
        scanf("%lld%lld%lld",&edge[i].u,&edge[i].v,&edge[i].w);
    sort(edge+1,edge+n,cmp);
    for (int i=1;i<=2e5;i++)
    {
        fa[i]=i;
        sz[i]=1;
    }
    for (int i=1;i<n;i++)
    {
        ans[edge[i].w]+=sz[find(edge[i].u)]*sz[find(edge[i].v)];
        merge(edge[i].u,edge[i].v);
    }
    for (int i=1;i<=2e5;i++)
        ans[i]+=ans[i-1];
    for (int i=1;i<=m;i++)
    {
        scanf("%lld",&q);
        printf("%lld ",ans[q]);
    }
    puts("");
    return 0;
}
