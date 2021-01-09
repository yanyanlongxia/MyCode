//File: magnus.cpp
//Author: yanyanlongxia
//Date: 2020/9/20
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int id,n,m,q,root,head1[1000005],nxt1[1000005],ver1[1000005],tot1,tot2,head2[1000005],ver2[1000005],nxt2[1000005],dist[1000005];
int sz[1000005],son[1000005],depth[1000005],fat[1000005];
set<pair<int,int> >s;
deque<int>qu;
inline void add1(int x,int y)
{
    ver1[++tot1]=y;
    nxt1[tot1]=head1[x];
    head1[x]=tot1;
}
inline void add2(int x,int y)
{
    ver2[++tot2]=y;
    nxt2[tot2]=head2[x];
    head2[x]=tot2;
}
void dfs1(int x,int fa)
{
    fat[x]=fa;
    depth[x]=depth[fa]+1;
    sz[x]=1;
    for(int i=head1[x];i;i=nxt1[i])
    {
        int y=ver1[i];
        if (y==fa)
            continue;
        dist[y]=dist[x];
        dfs1(y,x);
        sz[x]+=sz[y];
        if (sz[y]>sz[son[x]])
            son[x]=y;
    }
    for(int i=head2[x];i;i=nxt2[i])
    {
        int y=ver2[i];
        if (y==fa)
            continue;
        dist[y]=dist[x]+1;
        dfs1(y,x);
        sz[x]+=sz[y];
        if (sz[y]>sz[son[x]])
            son[x]=y;
    }
}
int top[1000005];
void dfs2(int x,int to)
{
    top[x]=to;
    if (!son[x])
        return;
    dfs2(son[x],to);
    for (int i=head1[x];i;i=nxt1[i])
    {
        int y=ver1[i];
        if (y==fat[x] || y==son[x])
            continue;
        dfs2(y,y);
    }
}
inline int getlca(int x,int y)
{
    while (top[x]!=top[y])
    {
        if (depth[top[x]]<depth[top[y]])
            swap(x,y);
        x=fat[top[x]];
    }
    while (x!=y)
    {
        if (depth[x]<depth[y])
            swap(x,y);
        x=fat[x];
    }
    return x;
}
inline int getdist(int x,int y)
{
    return dist[x]+dist[y]-2*dist[getlca(x,y)];
}
signed main() {
    //freopen("magnus in","r",stdin);
    //freopen("magnus out","w",stdout);
    memset(dist,0x3f3f3f3f,sizeof(dist));
    int x,y;
    scanf("%lld",&id);
    scanf("%lld%lld%lld",&n,&m,&q);
    for (int i=1;i<=m;i++)
    {
        scanf("%lld%lld",&x,&y);
        add1(x,y);
        if (s.find(make_pair(x,y))!=s.end())
            s.erase(make_pair(x,y));
        else
            s.insert(make_pair(y,x));
    }
    for (set<pair<int,int> >::iterator it=s.begin();it!=s.end();it++)
    {
        pair<int,int>t=*it;
        add2(t.first,t.second);
    }
    if (q==1)
    {
        scanf("%lld%lld",&x,&y);
        qu.push_back(x);
        dist[x]=0;
        while (!qu.empty())
        {
            int now=qu.front();
            qu.pop_front();
            for (int i=head1[now];i;i=nxt1[i])
            {
                int next=ver1[i];
                if (dist[now]<dist[next])
                {
                    qu.push_front(next);
                    dist[next]=dist[now];
                }
            }
            for (int i=head2[now];i;i=nxt2[i])
            {
                int next=ver2[i];
                if (dist[now]+1<dist[next])
                {
                    qu.push_back(next);
                    dist[next]=dist[now]+1;
                }
            }
        }
        if (dist[y]==0x3f3f3f3f)
            dist[y]=-1;
        printf("%lld\n",dist[y]);
    }
    else
    {
        root=1;
        dist[1]=0;
        dfs2(root,0);
        dfs1(root,root);
        for (int i=1;i<=m;i++)
            scanf("%lld%lld",&x,&y);
        int ans=getdist(x,y);
        if (ans>=0x3f3f3f3f)
            ans=-1;
        printf("%lld\n",getdist(x,y));
    }
    return 0;
}
