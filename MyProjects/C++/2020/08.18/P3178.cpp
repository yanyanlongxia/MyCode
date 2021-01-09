//File: P3178.cpp
//Author: yanyanlongxia
//Date: 2020/8/18
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,v[1000005],head[1000005],ver[1000005],nxt[1000005],tot,sz[1000005],depth[1000005],fat[1000005],son[1000005],top[1000005];
struct segment
{
    int l,r,sum,tag;
}t[1000005];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs1(int x,int fa)
{
    sz[x]=1;
    fat[x]=fa;
    depth[x]=depth[fa]+1;
    for (int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(y==fa)
            continue;
        dfs1(y,x);
        sz[x]+=sz[y];
        if(sz[y]>sz[son[x]])
            son[x]=y;
    }
}
int dft,dfn[1000005],rank[1000005];
void dfs2(int x,int to)
{
    top[x]=to;
    dfn[x]=++dft;
    rank[dft]=x;
    if(!son[x])
        return;
    dfs2(son[x],to);
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(y==fat[x] || y==son[x])
            continue;
        dfs2(y,y);
    }
}
void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if(l==r)
    {
        t[p].sum=v[rank[l]];
        return;
    }
    int mid=l+r>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    t[p].sum=t[p<<1].sum+t[p<<1|1].sum;
}
void spread(int p)
{
    if(t[p].tag)
    {
        t[p<<1].sum=t[p<<1].sum+(t[p<<1].r-t[p<<1].l+1)*t[p].tag;
        t[p<<1|1].sum=t[p<<1|1].sum+(t[p<<1|1].r-t[p<<1|1].l+1)*t[p].tag;
        t[p<<1].tag+=t[p].tag;
        t[p<<1|1].tag+=t[p].tag;
        t[p].tag=0;
    }
}
void change(int p,int l,int r,int val)
{
    if(l<=t[p].l && t[p].r<=r)
    {
        t[p].sum=t[p].sum+(t[p].r-t[p].l+1)*val;
        t[p].tag+=val;
        return;
    }
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    if(l<=mid)
        change(p<<1,l,r,val);
    if(r>mid)
        change(p<<1|1,l,r,val);
    t[p].sum=t[p<<1].sum+t[p<<1|1].sum;
}
int ask(int p,int l,int r)
{
    if(l<=t[p].l && t[p].r<=r)
    {
        return t[p].sum;
    }
    spread(p);
    int mid=t[p].l+t[p].r>>1,val=0;
    if(l<=mid)
        val+=ask(p<<1,l,r);
    if(r>mid)
        val+=ask(p<<1|1,l,r);
    return val;
}
void action1(int x,int y)
{
    change(1,dfn[x],dfn[x],y);
}
void action2(int x,int y)
{
    change(1,dfn[x],dfn[x]+sz[x]-1,y);
}
int action3(int x)
{
    int res=0;
    while (top[x]!=1)
    {
        res+=ask(1,dfn[top[x]],dfn[x]);
        x=fat[top[x]];
    }
    res+=ask(1,1,dfn[x]);
    return res;
}
signed main() {
    int x,y,opt;
    scanf("%lld%lld",&n,&m);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld",&v[i]);
    }
    for (int i = 1; i <= n - 1; ++i) {
        scanf("%lld%lld",&x,&y);
        add(x,y);
        add(y,x);
    }
    dfs1(1,0);
    dfs2(1,1);
    build(1,1,n);
    for (int i = 1; i <= m; ++i) {
        scanf("%lld",&opt);
        switch (opt) {
            case 1:
                scanf("%lld%lld",&x,&y);
                action1(x,y);
                break;
            case 2:
                scanf("%lld%lld",&x,&y);
                action2(x,y);
                break;
            case 3:
                scanf("%lld",&x);
                printf("%lld\n",action3(x));
                break;
        }
    }
    return 0;
}
