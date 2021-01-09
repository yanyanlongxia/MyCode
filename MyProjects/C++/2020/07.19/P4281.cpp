//
// Created by admin on 2020/7/27.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,f[500005][22],depth[500005],maxd;
vector<int>no[500005];
inline int read()
{
    int x=0,f=1;char c=getchar();
    while(!isdigit(c)){if(c=='-')  f=-1; c=getchar();}
    while(isdigit(c)) {x=x*10+c-'0';c=getchar();}
    return x*f;
}
void dfs(int x,int fa)
{
    depth[x]=depth[fa]+1;
    f[x][0]=fa;
    maxd=max(maxd,depth[x]);
    for(int i=0;i<no[x].size();i++)
    {
        int y=no[x][i];
        if(y!=fa)
            dfs(y,x);
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
int dist(int x,int y)
{
    return depth[x]+depth[y]-2*depth[lca(x,y)];
}
int main()
{
    int x,y,z;
    n=read();m=read();
    for(int i=1;i<n;i++)
    {
        x=read();y=read();
        no[x].push_back(y);
        no[y].push_back(x);
    }
    dfs(1,0);
    maxd=log2(maxd);
    for(int i=1;i<=maxd;i++)
        for(int j=1;j<=n;j++)
            f[j][i]=f[f[j][i-1]][i-1];
    while(m--)
    {
        x=read();y=read();z=read();
        int l1=lca(x,y),l2=lca(y,z),l3=lca(x,z),ans=0,res=0;
        if(l1==l2)
            ans=l3;
        else
        {
            if(l2==l3)
                ans=l1;
            else
                ans=l2;
        }
        res=dist(ans,x)+dist(ans,y)+dist(ans,z);
        printf("%d %d\n",ans,res);
    }
    return 0;
}
