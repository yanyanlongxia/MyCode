//File: SP1487.cpp
//Author: yanyanlongxia
//Date: 2020/10/13
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,head[1000005],dfout[1000005],rk[1000005],nxt[1000005],ver[1000005],val[1000005],dfn[1000005],dft,cnt,tot,root[1000005],fat[1000005],sz[1000005];
struct node{
    int l,r,sum;
}t[8000005];
int v[1000005];
map<int,int>id,pos;
inline void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void insert(int &p,int l,int r,int pre,int k)
{
    t[++cnt]=t[pre];
    p=cnt;
    t[p].sum++;
    if (l==r)
        return;
    int mid=l+r>>1;
    if (k<=mid)
        insert(t[p].l,l,mid,t[pre].l,k);
    else
        insert(t[p].r,mid+1,r,t[pre].r,k);
}
void dfs(int x,int fa)
{
    dfn[x]=++dft;
    rk[dft]=x;
    sz[x]=1;
    fat[x]=fa;
    for (int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if (y==fa)
            continue;
        dfs(y,x);
        sz[x]+=sz[y];
    }
    dfout[x]=dft;
}
int ask(int l,int r,int L,int R,int k)
{
    if (l==r)
        return l;
    int mid=l+r>>1,tmp=t[t[R].l].sum-t[t[L].l].sum;
    if (k<=tmp)
        return ask(l,mid,t[L].l,t[R].l,k);
    else
        return ask(mid+1,r,t[L].r,t[R].r,k-tmp);
}
int query(int x,int k)
{
    int ans=v[ask(1,n,root[dfn[x]-1],root[dfout[x]],k)];
    return pos[ans];
}
int main() {
    int x,y,k;
    freopen("data.in","r",stdin);
    //freopen("SP1487.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&val[i]);
        v[i]=val[i];
    }
    sort(v+1,v+n+1);
    for (int i=1;i<=n;i++)
        id[v[i]]=i;
    for (int i=1;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        add(x,y);
        add(y,x);
    }
    dfs(1,0);
    for (int i=1;i<=n;i++)
        insert(root[i],1,n,root[i-1],id[val[rk[i]]]);
    for (int i=1;i<=n;i++)
        pos[val[i]]=i;
    scanf("%d",&m);
    for (int i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&k);
        printf("%d\n",query(x,k));
    }
    return 0;
}
