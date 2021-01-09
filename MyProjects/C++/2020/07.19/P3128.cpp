//
// Created by admin on 2020/7/27.
//
#include <bits/stdc++.h>
#define MN 50005
using namespace std;
int n,m,depth[MN],f[MN][22],sum[MN],tag[MN],maxd,ans;
vector<int>no[MN];
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(!isdigit(ch)){if(ch=='-') f=-1;  ch=getchar();}
    while (isdigit(ch)){ x=10*x+ch-'0';ch=getchar();}
    return x*f;
}
void dfs1(int x,int fa)
{
    depth[x]=depth[fa]+1;
    f[x][0]=fa;
    maxd=max(maxd,depth[x]);
    for(int i=0;i<no[x].size();i++)
    {
        int y=no[x][i];
        if(y!=fa)
            dfs1(y,x);
    }
}
int lca(int x,int y)
{
    if(depth[x]<depth[y])
        swap(x,y);
    int del=depth[x]-depth[y];
    for(int i=0;del>0;i++)
    {
        if(del&1)
            x=f[x][i];
        del>>=1;
    }
    if(x==y)
        return x;
    for(int i=maxd;i>=0;i--)
        if(f[x][i]!=f[y][i])
        {
            x=f[x][i];
            y=f[y][i];
        }
    return f[x][0];
}
void dfs2(int x,int fa)
{
    sum[x]=tag[x];
    for(int i=0;i<no[x].size();i++)
    {
        int y=no[x][i];
        if(y!=fa)
        {
            dfs2(y,x);
            sum[x]+=sum[y];
        }
    }
    ans=max(ans,sum[x]);
}
int main()
{
    int x,y;
    n=read();m=read();
    for(int i=1;i<n;i++)
    {
        x=read();y=read();
        no[x].push_back(y);
        no[y].push_back(x);
    }
    dfs1(1,0);
    maxd=log2(maxd);
    for(int i=1;i<=maxd;i++)
        for(int j=1;j<=n;j++)
            f[j][i]=f[f[j][i-1]][i-1];
    while (m--)
    {
        x=read();y=read();
        int z=lca(x,y);
        tag[x]++;tag[y]++;tag[z]--;tag[f[z][0]]--;
    }
    dfs2(1,0);
    printf("%d\n",ans);
    return 0;
}