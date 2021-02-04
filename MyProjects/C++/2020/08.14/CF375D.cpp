//File: CF375D.cpp
//Author: yanyanlongxia
//Date: 2020/8/17
//
#include <bits/stdc++.h>

using namespace std;
int n,m,tot,head[1000005],nxt[1000005],ver[1000005],cnt[1000005],col[1000005],buc[1000005],ans[1000005],sz[1000005],son[1000005];
bool vis[1000005];
struct query
{
    int x,id;
};
vector<query>q[1000005];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs1(int x,int fa)
{
    sz[x]=1;
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
void calc(int x,int fa,int val) {
    if (val == 1) {
        cnt[col[x]]++;
        buc[cnt[col[x]]]++;
    } else {
        buc[cnt[col[x]]]--;
        cnt[col[x]]--;
    }
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
    for (int i=head[x];i;i=nxt[i])
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
        ans[q[x][i].id]=buc[q[x][i].x];
    vis[son[x]]=0;
    if(!val)
        calc(x,fa,-1);
}
int main() {
    int x,y;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d",&col[i]);
    }
    for (int i = 1; i <= n-1; ++i) {
        scanf("%d%d",&x,&y);
        add(x,y);
        add(y,x);
    }
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d",&x,&y);
        q[x].push_back((query){y,i});
    }
    dfs1(1,0);
    dfs2(1,0,0);
    for (int i = 1; i <= m; ++i) {
        printf("%d\n",ans[i]);
    }
    return 0;
}
