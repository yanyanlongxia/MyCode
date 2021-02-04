//File: P3384.cpp
//Author: yanyanlongxia
//Date: 2020/8/17
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,root,mod,tot,v[1000005],head[1000005],ver[1000005],nxt[1000005],depth[1000005],sz[1000005],fat[1000005],son[1000005],top[1000005];
int dft,dfn[1000005],rank[1000005];
struct segment
{
    int l,r,sum,tag;
}t[10000005];
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
    for(int i=head[x];i;i=nxt[i])
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
void dfs2(int x,int to)
{
    dfn[x]=++dft;
    rank[dft]=x;
    top[x]=to;
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
    t[p].l=l;t[p].r=r;
    if(l==r)
    {
        t[p].sum=v[rank[l]]%mod;
        return;
    }
    int mid=(l+r)>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    t[p].sum=(t[p<<1].sum+t[p<<1|1].sum)%mod;
}
void spread(int p)
{
    if(t[p].tag)
    {
        t[p<<1].sum+=(t[p<<1].r-t[p<<1].l+1)*t[p].tag%mod;
        t[p<<1].sum%=mod;
        t[p<<1|1].sum+=(t[p<<1|1].r-t[p<<1|1].l+1)*t[p].tag%mod;
        t[p<<1|1].sum%=mod;
        t[p<<1].tag+=t[p].tag;
        t[p<<1|1].tag+=t[p].tag;
        t[p].tag=0;
    }
}
void change(int p,int l,int r,int val)
{
    if(l<=t[p].l && t[p].r<=r)
    {
        t[p].sum+=(t[p].r-t[p].l+1)*val;
        t[p].sum%=mod;
        t[p].tag+=val;
        t[p].tag%=mod;
        return;
    }
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    if(l<=mid)
        change(p<<1,l,r,val);
    if(r>mid)
        change(p<<1|1,l,r,val);
    t[p].sum=(t[p<<1].sum+t[p<<1|1].sum)%mod;
}
int ask(int p,int l,int r)
{
    if(l<=t[p].l && t[p].r<=r)
        return t[p].sum;
    spread(p);
    int mid=t[p].l+t[p].r>>1,val=0;
    if(l<=mid)
        val=(val+ask(p<<1,l,r))%mod;
    if(r>mid)
        val=(val+ask(p<<1|1,l,r))%mod;
    return val;
}
void change1(int x,int y,int z)
{
    z%=mod;
    while (top[x]!=top[y])
    {
        if(depth[top[x]]<depth[top[y]])
            swap(x,y);
        change(1,dfn[top[x]],dfn[x],z);
        x=fat[top[x]];
    }
    if(depth[x]<depth[y])
        swap(x,y);
    change(1,dfn[y],dfn[x],z);
}
int query1(int x,int y)
{
    int res=0;
    while (top[x]!=top[y])
    {
        if(depth[top[x]]<depth[top[y]])
            swap(x,y);
        res=(res+ask(1,dfn[top[x]],dfn[x]))%mod;
        x=fat[top[x]];
    }
    if(depth[x]<depth[y])
        swap(x,y);
    res=(res+ask(1,dfn[y],dfn[x]))%mod;
    return res;
}
void change2(int x,int z)
{
    change(1,dfn[x],dfn[x]+sz[x]-1,z);
}
int query2(int x)
{
    return ask(1,dfn[x],dfn[x]+sz[x]-1);
}
signed main() {
    int x,y,z,opt;
    scanf("%lld%lld%lld%lld",&n,&m,&root,&mod);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld",&v[i]);
    }
    for (int i = 1; i <= n - 1; ++i) {
        scanf("%lld%lld",&x,&y);
        add(x,y);
        add(y,x);
    }
    dfs1(root,0);
    dfs2(root,root);
    build(1,1,n);
    for (int i = 1; i <= m; ++i) {
        scanf("%lld",&opt);
        switch (opt) {
            case 1:
                scanf("%lld%lld%lld",&x,&y,&z);
                change1(x,y,z);
                break;
            case 2:
                scanf("%lld%lld",&x,&y);
                printf("%lld\n",query1(x,y));
                break;
            case 3:
                scanf("%lld%lld",&x,&z);
                change2(x,z);
                break;
            case 4:
                scanf("%lld",&x);
                printf("%lld\n",query2(x));
                break;
        }
    }
    return 0;
}
