//
// Created by admin on 2020/7/27.
//
#include <bits/stdc++.h>
using namespace std;
int n,q,f[100005][22],depth[100005],maxd;
vector<int>no[100005];
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
    for(int i=log2(maxd);i>=0;i--)
        if(f[x][i]!=f[y][i])
        {
            x=f[x][i];
            y=f[y][i];
        }
    return f[x][0];
}
int query(int x,int y)
{
    return depth[x]+depth[y]-2*depth[lca(x,y)];
}
int main()
{
    cin>>n;
    int x,y;
    for(int i=1;i<=n-1;i++)
    {
        scanf("%d%d",&x,&y);
        no[x].push_back(y);
        no[y].push_back(x);
    }
    dfs(1,0);
    for(int i=1;i<=log2(maxd);i++)
        for(int j=1;j<=n;j++)
            if((1<<i)<=depth[j])
                f[j][i]=f[f[j][i-1]][i-1];
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",query(x,y));
    }
    return 0;
}