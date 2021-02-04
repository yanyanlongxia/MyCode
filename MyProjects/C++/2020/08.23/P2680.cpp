//File: P2680.cpp
//Author: yanyanlongxia
//Date: 2020/8/28
//
#include <bits/stdc++.h>

using namespace std;
int n,m,st[1000005],en[1000005],edge[1000005],nxt[1000005],ver[1000005],tot,head[1000005],ge[1000005],fat[1000005],son[1000005],depth[1000005],sz[1000005];
struct segment
{
    int l,r,mn,sum,mi;
    segment(){l=r=mi=0;mn=sum=-0x3f3f3f3f;}
}t[8000005];
inline void add(int x,int y,int z)
{
    ver[++tot]=y;
    edge[tot]=z;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs1(int x,int fa)
{
    depth[x]=depth[fa]+1;
    fat[x]=fa;sz[x]=1;
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(y==fa)
            continue;
        ge[y]=i;
        dfs1(y,x);
        sz[x]+=sz[y];
        if(sz[y]>sz[son[x]])
            son[x]=y;
    }
}
int dft,dfn[1000005],rk[1000005],top[1000005];
void dfs2(int x,int to)
{
    dfn[ge[x]]=dft;
    rk[dft]=ge[x];
    dft++;
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
inline segment choose(segment p,segment q)
{
     segment nex;
    if (p.mn>q.mn) {
        nex.mn=p.mn;
        nex.mi=p.mi;
    } else {
        nex.mn=q.mn;
        nex.mi=q.mi;
    }
    nex.sum=p.sum+q.sum;
    nex.l=p.l;
    nex.r=q.r;
    return nex;
}
inline void update(int p)
{
    t[p]=choose(t[p<<1],t[p<<1|1]);
}
void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if(l==r)
    {
        t[p].mi=l;
        t[p].sum=t[p].mn=edge[rk[l]];
        return;
    }
    int mid=(l+r)>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(p);
}
void change(int p,int ind)
{
    if(t[p].l==t[p].r)
    {
        t[p].mn=t[p].sum=0;
        return;
    }
    int mid=t[p].l+t[p].r>>1;
    if(ind<=mid)
        change(p<<1,ind);
    else
        change(p<<1|1,ind);
    update(p);
}
segment ask(int p,int l,int r)
{
    if(l<=t[p].l && t[p].r<=r)
        return t[p];
    int mid=t[p].l+t[p].r>>1;
    segment val,a,b;
    val.mn=-0x3f3f3f3f;
    if (l<=mid) {
        a=ask(p<<1,l,r);
        val=choose(val,a);
    } else {
        b=ask(p<<1|1,l,r);
        val=choose(val,b);
    }
    return val;
}
inline segment getdist(int x,int y)
{
    segment res;
    while (top[x]!=top[y])
    {
        if(depth[top[x]]<depth[top[y]])
            swap(x,y);
        res=choose(res,ask(1,dfn[ge[top[x]]],dfn[ge[x]]));
        x=fat[top[x]];
    }
    if(depth[x]<depth[y])
        swap(x,y);
    res=choose(res,ask(1,dfn[ge[y]],dfn[ge[x]]));
    return res;
}
int main() {
    int x,y,z,maxn=-0x3f3f3f3f,maxd;
    scanf("%d%d",&n,&m );
    for (int i = 1; i < n; i++) {
        scanf("%d%d%d",&x,&y,&z );
        add(x,y,z);
        add(y,x,z);
    }
    dfs1(1,0);
    dfs2(1,1);
    build(1,1,n);
    for (int i = 1; i <= m; i++) {
        scanf("%d%d",&st[i],&en[i] );
    }
    for (int i = 1; i <= m; i++) {
        segment di=getdist(st[i],en[i]);
        int ind=di.mi;
        if (di.sum>maxn) {
            maxn=di.sum;
            maxd=ind;
        }
    }
    printf("%d\n",ver[maxd]);
    change(1,dfn[maxd]);
    edge[maxd]=0;
    maxn=-0x3f3f3f3f;
    //printf("%d\n",son[1]);
    //printf("%d\n",top[3]);
    //printf("%d\n",getlca(3,6));
    for (int i = 1; i <= m; i++) {
        segment di=getdist(st[i],en[i]);
        maxn=max(maxn,di.sum);
    }
    printf("%d\n",maxn );
    return 0;
}
