//File: P3384.cpp
//Author: yanyanlongxia
//Date: 2020/9/19
//
#include <bits/stdc++.h>

using namespace std;
int n,m,root,mo,head[1000005],nxt[1000005],ver[1000005],v[1000005],tot,fat[1000005],depth[1000005],sz[1000005],son[1000005];
struct segment
{
    int l,r,sum,add;
}t[1000005];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs1(int x,int fa)
{
    depth[x]=depth[fa]+1;
    sz[x]=1;
    fat[x]=fa;
    for (int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if (y==fa)
            continue;
        dfs1(y,x);
        sz[x]+=sz[y];
        if (sz[y]>sz[son[x]])
            son[x]=y;
    }
}
int dft,dfn[1000005],rank[1000005],top[1000005];
void dfs2(int x,int to)
{
    top[x]=to;
    dfn[x]=++dft;
    rank[dft]=x;
    if (!son[x])
        return;
    dfs2(son[x],to);
    for (int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if (y==son[x] || y==fat[x])
            continue;
        dfs2(y,y);
    }
}
inline void update(int p)
{
    t[p].sum=(t[p<<1].sum+t[p<<1|1].sum)%mo;
}
void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if (l==r)
    {
        t[p].sum=v[rank[l]]%mo;
        return;
    }
    int mid=l+r>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(p);
}
inline void spread(int p)
{
    if (t[p].add)
    {
        t[p<<1].sum=(t[p<<1].sum+(t[p<<1].r-t[p<<1].l+1)*t[p].add%mo)%mo;
        t[p<<1|1].sum=(t[p<<1|1].sum+(t[p<<1|1].r-t[p<<1|1].l+1)*t[p].add%mo)%mo;
        t[p<<1].add=(t[p<<1].add+t[p].add)%mo;
        t[p<<1|1].add=(t[p<<1|1].add+t[p].add)%mo;
        t[p].add=0;
    }
}
void change(int p,int l,int r,int val)
{
    if (l<=t[p].l && t[p].r<=r)
    {
        t[p].sum=(t[p].sum+(t[p].r-t[p].l+1)*val%mo)%mo;
        t[p].add+=val;
        return;
    }
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    if (l<=mid)
        change(p<<1,l,r,val);
    if (r>mid)
        change(p<<1|1,l,r,val);
    update(p);
}
int ask(int p,int l,int r)
{
    if (l<=t[p].l && t[p].r<=r)
        return t[p].sum;
    spread(p);
    int mid=t[p].l+t[p].r>>1,val=0;
    if (l<=mid)
        val=(val+ask(p<<1,l,r))%mo;
    if (r>mid)
        val=(val+ask(p<<1|1,l,r))%mo;
    return val;
}
inline void action1(int x,int y,int z)
{
    z%=mo;
    while (top[x]!=top[y])
    {
        if (depth[top[x]]<depth[top[y]])
            swap(x,y);
        change(1,dfn[top[x]],dfn[x],z);
        x=fat[top[x]];
    }
    if (depth[x]<depth[y])
        swap(x,y);
    change(1,dfn[y],dfn[x],z);
}
inline int action2(int x,int y)
{
    int res=0;
    while (top[x]!=top[y])
    {
        if (depth[top[x]]<depth[top[y]])
            swap(x,y);
        res=(res+ask(1,dfn[top[x]],dfn[x]))%mo;
        x=fat[top[x]];
    }
    if (depth[x]<depth[y])
        swap(x,y);
    res=(res+ask(1,dfn[y],dfn[x]))%mo;
    return res;
}
inline void action3(int x,int z)
{
    change(1,dfn[x],dfn[x]+sz[x]-1,z);
}
inline int action4(int x)
{
    return ask(1,dfn[x],dfn[x]+sz[x]-1);
}
int main() {
    int opt,x,y,z;
    scanf("%d%d%d%d",&n,&m,&root,&mo);
    for (int i=1;i<=n;i++)
        scanf("%d",&v[i]);
    for (int i=1;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        add(x,y);
        add(y,x);
    }
    dfs1(root,0);
    dfs2(root,root);
    build(1,1,n);
    for (int i=1;i<=m;i++)
    {
        scanf("%d",&opt);
        if (opt==1)
        {
            scanf("%d%d%d",&x,&y,&z);
            action1(x,y,z);
        }
        if (opt==2) {
            scanf("%d%d",&x,&y);
            printf("%d\n", action2(x, y));
        }
        if (opt==3)
        {
            scanf("%d%d",&x,&z);
            action3(x,z);
        }
        if (opt==4)
        {
            scanf("%d",&x);
            printf("%d\n",action4(x));
        }
    }
    return 0;
}
