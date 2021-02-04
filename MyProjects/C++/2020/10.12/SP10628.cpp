//File: SP10628.cpp
//Author: yanyanlongxia
//Date: 2020/10/13
//
#include <bits/stdc++.h>
#define int long long
#define ll long long
using namespace std;
int n,m,val[10000005],cnt,fat[10000005],sz[10000005],depth[10000005],root[10000005],son[10000005];
vector<int>so[10000005];
struct node
{
    int l,r,sum;
}t[80000005];
vector<int>v;
map<int,int>id;
void insert(int &p,int l,int r,int pre,int k)
{
    t[++cnt]=t[pre];
    p=cnt;
    t[p].sum++;
    if (l==r)
        return;
    int mid=l+r>>1ll;
    if (k<=mid)
        insert(t[p].l,l,mid,t[pre].l,k);
    else
        insert(t[p].r,mid+1,r,t[pre].r,k);
}
void dfs1(int x,int fa)
{
    insert(root[x],1,n,root[fa],id[val[x]]);
    depth[x]=depth[fa]+1;
    sz[x]=1;
    fat[x]=fa;
    int maxm=-1;
    for (int i=0;i<so[x].size();i++)
    {
        int y=so[x][i];
        if (y==fa)
            continue;
        dfs1(y,x);
        sz[x]+=sz[y];
        if (sz[y]>maxm)
        {
            son[x]=y;
            maxm=sz[y];
        }
    }
}
int dft,dfn[10000005],rk[10000005],top[10000005];
void dfs2(int x,int to)
{
    top[x]=to;
    dfn[x]=++dft;
    rk[dft]=x;
    if (!son[x])
        return;
    dfs2(son[x],to);
    for (int i=0;i<so[x].size();i++)
    {
        int y=so[x][i];
        if (y==fat[x] || y==son[x])
            continue;
        dfs2(y,y);
    }
}
inline int lca(int x,int y)
{
    while (top[x]!=top[y])
    {
        if (depth[top[x]]<depth[top[y]])
            swap(x,y);
        x=fat[top[x]];
    }
    return depth[x]<depth[y] ? x : y;
}
int ask(int up,int vp,int nl,int fl,int l,int r,int k)
{
    if (l==r)
        return l;
    int tmp=t[t[up].l].sum+t[t[vp].l].sum-t[t[nl].l].sum-t[t[fl].l].sum;
    int mid=l+r>>1ll;
    if (k<=tmp)
        return ask(t[up].l,t[vp].l,t[nl].l,t[fl].l,l,mid,k);
    else
        return ask(t[up].r,t[vp].r,t[nl].r,t[fl].r,mid+1,r,k-tmp);
}
signed main() {
    //freopen("P2633.in","r",stdin);
    //freopen("P2633.out","w",stdout);
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld",&val[i]);
        v.push_back(val[i]);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for (int i=0;i<v.size();i++)
        id[v[i]]=i+1;
    int last=0ll,x,y,z;
    for (int i=1;i<n;i++)
    {
        scanf("%lld%lld",&x,&y);
        so[x].push_back(y);
        so[y].push_back(x);
    }
    dfs1(1,0);
    dfs2(1,1);
    for (int i=1;i<=m;i++)
    {
        scanf("%lld%lld%lld",&x,&y,&z);
        int lc=lca(x,y);
        last=v[ask(root[x],root[y],root[lc],root[fat[lc]],1,n,z)-1];
        printf("%lld\n",last);
    }
    return 0;
}
