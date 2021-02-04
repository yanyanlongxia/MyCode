//File: CF1009F.cpp
//Author: yanyanlongxia
//Date: 2020/8/17
//
#include <bits/stdc++.h>

using namespace std;
int n,tot,maxn,head[5000005],nxt[5000005],ver[5000005],buc[5000005],sz[5000005],son[5000005],id=0x3f3f3f3f,ans[5000005],depth[5000005];
bool vis[5000005];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs1(int x,int fa)
{
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
    if(buc[depth[x]]>maxn)
    {
        id=depth[x];
        maxn=buc[depth[x]];
    }else
        if(buc[depth[x]]==maxn)
            id=min(id,depth[x]);
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(y==fa || vis[y])
            continue;
        calc(y,x,val);
    }
}
void dfs2(int x,int fa,int val)
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
    ans[x]=id-depth[x];
    vis[son[x]]=0;
    if(!val)
    {
        calc(x,fa,-1);
        maxn=0;
        id=0x3f3f3f3f;
    }
}
int main() {
    int x,y;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        add(x,y);
        add(y,x);
    }
    dfs1(1,0);
    dfs2(1,0,0);
    for (int i = 1; i <= n; ++i) {
        printf("%d\n",ans[i]);
    }
    return 0;
}
