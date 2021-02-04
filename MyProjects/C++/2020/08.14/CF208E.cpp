//File: CF208E.cpp
//Author: yanyanlongxia
//Date: 2020/8/16
//
#include <bits/stdc++.h>

using namespace std;
int n,m,head[100005],nxt[100005],ver[100005],tot,depth[100005],sz[100005],son[100005],ans[100005],buc[100005];
bool vis[100005];
int f[100005][25];
struct query
{
    int x,id;
};
vector<int>root;
vector<query>q[100005];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs1(int x,int fa)
{
    f[x][0]=fa;
    sz[x]=1;
    depth[x]=depth[fa]+1;
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
void calc(int x,int fa,int val)
{
    buc[depth[x]]+=val;
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(y==fa || vis[y])
            continue;
        calc(y,x,val);
    }
}
void dfs2(int x,int fa,int flag)
{
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(y==fa || y==son[x])
            continue;
        dfs2(y,x,0);
    }
    if(son[x])
    {
        dfs2(son[x],x,1);
        vis[son[x]]=1;
    }
    calc(x,fa,1);
    for(int i=0;i<q[x].size();i++)
    {
        ans[q[x][i].id]=buc[q[x][i].x]-1;
    }
    vis[son[x]]=0;
    if(!flag)
    {
        calc(x,fa,-1);
    }
}
int main() {
    int x,y;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x)
            add(x,i);
        else
            root.push_back(i);
    }
    for (int i=0;i<root.size();i++)
        dfs1(root[i],0);
    for (int i=1;i<=24;i++)
        for (int j = 1; j <= n; ++j) {
            f[j][i]=f[f[j][i-1]][i-1];
        }
    scanf("%d",&m);
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d",&x,&y);
        int dep=depth[x];
        for(int j=24;j>=0;j--)
            if(y & (1<<j))
                x=f[x][j];
        q[x].push_back((query){dep,i});
    }
    for(int i=0;i<root.size();i++)
        dfs2(root[i],0,0);
    for (int i = 1; i <= m; ++i) {
        printf("%d ",ans[i]);
    }
    puts("");
    return 0;
}
