//File: CF600E.cpp
//Author: yanyanlongxia
//Date: 2020/8/16
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,tot,head[500000],nxt[500000],ver[500000],sz[500000],son[500000],buc[500000],col[500000],maxn,sum,ans[500000];
bool vis[500000];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs1(int x,int fa)
{
    sz[x]=1;
    for (int i=head[x];i;i=nxt[i]) {
        int y=ver[i];
        if(y==fa)
            continue;
        dfs1(y,x);
        sz[x]+=sz[y];
        if(sz[y]>sz[son[x]])
        {
            son[x]=y;
        }
    }
}
void calc(int x,int fa,int opt)
{
    buc[col[x]]+=opt;
    if(buc[col[x]]>maxn)
    {
        maxn=buc[col[x]];
        sum=col[x];
    }else
        if(buc[col[x]]==maxn)
            sum+=col[x];
    for (int i=head[x];i;i=nxt[i]) {
        int y=ver[i];
        if(y==fa || vis[y])
            continue;
        calc(y,x,opt);
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
    ans[x]=sum;
    vis[son[x]]=0;
    if(!flag)
    {
        calc(x,fa,-1);
        sum=maxn=0;
    }
}
signed main() {
    int x,y;
    scanf("%lld",&n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld",&col[i]);
    }
    for (int i = 1; i <= n - 1; ++i) {
        scanf("%lld%lld",&x,&y);
        add(x,y);
        add(y,x);
    }
    dfs1(1,0);
    dfs2(1,0,1);
    for (int i=1;i<=n;i++)
        printf("%lld\n",ans[i]);
    return 0;
}
