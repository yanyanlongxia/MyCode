//File: P3302.cpp
//Author: yanyanlongxia
//Date: 2020/10/13
//
#include <bits/stdc++.h>

//#define ll long long
using namespace std;
const int N=5e5+5;
int n,c,m,val[N],cnt,fat[N],sz[N],depth[N],root[N],son[N],fa[N],size[N];
vector<int>so[N];
vector<int>rt;
bool visited[N];
struct node
{
    int l,r,sum;
}t[N*40];
int v[N],vs;
inline int getid(int x)
{
    return lower_bound(v+1,v+1+vs,x)-v;
}
int find(int x)
{
    if (fa[x]==x)
        return x;
    return fa[x]= find(fa[x]);
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
void dfs1(int x,int f)
{
    son[x]=0;
    visited[x]= true;
    insert(root[x], 1, n, root[f], getid(val[x]));
    depth[x]= depth[f] + 1;
    sz[x]=1;
    fat[x]=f;//887344429
    int maxm=-1;
    for (int i=0;i<so[x].size();i++)
    {
        int y=so[x][i];
        if (y == f)
            continue;
        fa[y]=find(x);
        dfs1(y,x);
        sz[x]+=sz[y];
        if (sz[y]>maxm)
        {
            son[x]=y;
            maxm=sz[y];
        }
    }
}
int top[N];
void dfs2(int x,int to)
{
    top[x]=to;
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
    int mid=l+r>>1;
    if (k<=tmp)
        return ask(t[up].l,t[vp].l,t[nl].l,t[fl].l,l,mid,k);
    else
        return ask(t[up].r,t[vp].r,t[nl].r,t[fl].r,mid+1,r,k-tmp);
}
int main() {
    int tttttttt;
    //freopen("data.in","r",stdin);
    //freopen("P2633.out","w",stdout);
    scanf("%d",&tttttttt);
    scanf("%d%d%d",&n,&m,&c);
    for (int i=1;i<=n;i++)
    {
        fa[i]=i;
        scanf("%d",&val[i]);
        v[++vs]=val[i];
    }
    sort(v+1,v+vs+1);
    vs=unique(v+1,v+vs+1)-v;
    int last=0,x,y,z;
    char opt[10];
    for (int i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&y);
        so[x].push_back(y);
        so[y].push_back(x);
    }
    for (int i=1;i<=n;i++)
        if (!visited[i])
        {
            dfs1(i,0);
            rt.push_back(i);
        }
    for (int i=0;i<rt.size();i++)
        dfs2(rt[i],rt[i]);
    for (int i=1;i<=c;i++)
    {
        scanf("%s",opt);
        if (opt[0]=='Q') {
            scanf("%d%d%d", &x, &y, &z);
            x = x ^ last;
            y = y ^ last;
            z = z ^ last;
            int lc = lca(x, y);
            last = v[ask(root[x], root[y], root[lc], root[fat[lc]], 1, n, z) ];
            printf("%d\n", last);
        }else {
            scanf("%d%d", &x, &y);
            x = x ^ last;
            y = y ^ last;
            int fx=find(x),fy=find(y);
            if (fx==fy)
                continue;
            if (sz[fx]<sz[fy])
            {
                swap(x,y);
                swap(fx,fy);
            }
            so[x].push_back(y);
            so[y].push_back(x);
            dfs1(x,fat[x]);
            dfs2(fx,fx);
        }
    }
    return 0;
}
