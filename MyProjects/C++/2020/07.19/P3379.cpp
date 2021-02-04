//
// Created by admin on 2020/7/27.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,root,f[500005][20],depth[500005],maxd;
vector<int>no[500005];
void dfs(int x,int fa)
{
    depth[x]=depth[fa]+1;
    maxd=max(maxd,depth[x]);
    f[x][0]=fa;
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
    for(int i=0;del>0;i++)  //二进制拆分
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
int main()
{
    cin>>n>>m>>root;
    int x,y;
    for(int i=1;i<=n-1;i++)
    {
        scanf("%d%d",&x,&y);
        no[x].push_back(y);
        no[y].push_back(x);
    }
    dfs(root,0);
    for(int i=1;i<=log2(maxd);i++)
        for(int j=1;j<=n;j++)
            if((1<<i) <= depth[j])
                f[j][i]=f[f[j][i-1]][i-1];
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",lca(x,y));
    }
    return 0;
}