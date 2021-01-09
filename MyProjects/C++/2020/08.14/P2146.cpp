//File: P2146.cpp
//Author: yanyanlongxia
//Date: 2020/8/18
//[NOI2015]软件包管理器
#include <bits/stdc++.h>

using namespace std;
int n,q,tot,head[1000005],nxt[1000005],ver[1000005],sz[1000005],depth[1000005],fat[1000005],son[1000005],top[1000005];
int dft,dfn[1000005],rank[1000005];
struct segment
{
    int l,r,sum,tag;
}t[8000005];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs1(int x,int fa)
{
    if(fa!=-1)
    {
        sz[x]=1;
        depth[x]=depth[fa]+1;
        fat[x]=fa;
    }else
    {
        sz[x]=1;
        depth[x]=1;
        fat[x]=fa;
    }
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
    top[x]=to;
    dfn[x]=++dft;
    rank[dft]=x;
    if(son[x]==-1)
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
    t[p].tag=-1;
    if(l==r)
        return;
    int mid=(l+r)>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
}
void spread(int p)
{
    if(t[p].tag!=-1)
    {
        t[p<<1].sum=(t[p<<1].r-t[p<<1].l+1)*t[p].tag;
        t[p<<1|1].sum=(t[p<<1|1].r-t[p<<1|1].l+1)*t[p].tag;
        t[p<<1].tag=t[p<<1|1].tag=t[p].tag;
        t[p].tag=-1;
    }
}
void change(int p,int l,int r,int val)
{
    if(l<=t[p].l && t[p].r<=r)
    {
        t[p].sum=(t[p].r-t[p].l+1)*val;
        t[p].tag=val;
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
int install(int x)//软件安装
{
    int res=0;
    while(top[x]!=0)
    {
        res+=dfn[x]-dfn[top[x]]+1-ask(1,dfn[top[x]],dfn[x]);
        change(1,dfn[top[x]],dfn[x],1);
        x=fat[top[x]];
    }
    res+=dfn[x]-dfn[0]+1-ask(1,dfn[0],dfn[x]);
    change(1,dfn[0],dfn[x],1);
    return res;
}
int uninstall(int x)//软件卸载
{
    int res=ask(1,dfn[x],dfn[x]+sz[x]-1);
    change(1,dfn[x],dfn[x]+sz[x]-1,0);//
    return res;
}
int main() {
    memset(son,-1,sizeof(son));
    string s;int x,y;
    scanf("%d",&n);
    for (int i = 1; i < n; ++i) {
        scanf("%d",&x);
        add(i,x);
        add(x,i);
    }
    dfs1(0,-1);
    dfs2(0,0);
    build(1,1,n);
    scanf("%d",&q);
    for (int i = 1; i <= q; ++i) {
        cin>>s;
        scanf("%d",&x);
        if(s=="install")
            printf("%d\n",install(x));
        else
            printf("%d\n",uninstall(x));
    }
    return 0;
}
