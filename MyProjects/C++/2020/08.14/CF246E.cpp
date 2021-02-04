//File: CF246E.cpp
//Author: yanyanlongxia
//Date: 2020/8/17
//
#include <bits/stdc++.h>

using namespace std;
map<string,int>m[1000005];
string s[1000005];
int n,mm,tot,k,head[1000005],nxt[1000005],ver[1000005],sz[1000005],son[1000005],depth[1000005],num[1000005],ans[1000005];
bool vis[1000005];
struct query
{
    int x,id;
};
vector<int>root;
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
    if(!m[depth[x]][s[x]])
        num[depth[x]]+=1;
    m[depth[x]][s[x]]+=val;
    if(!m[depth[x]][s[x]])
        num[depth[x]]-=1;
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
    for(int i=0;i<q[x].size();i++)
        ans[q[x][i].id]=num[q[x][i].x];
    vis[son[x]]=0;
    if(!val)
    {
        calc(x,fa,-1);
    }
}
int main() {
    string s1;
    int x,y;
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        cin>>s[i];
        scanf("%d",&x);
        if(!x)
            root.push_back(i);
        else
        {
            add(i,x);
            add(x,i);
        }
    }
    for (int i=0;i<root.size();i++)
        dfs1(root[i],0);
    scanf("%d",&mm);
    for (int i = 1; i <= mm; ++i) {
        scanf("%d%d",&x,&y);
        q[x].push_back((query){depth[x]+y,i});
    }
    for (int i = 0; i < root.size(); ++i) {
        dfs2(root[i],0,0);
    }
    for (int i = 1; i <= mm; ++i) {
        printf("%d\n",ans[i]);
    }
    return 0;
}
