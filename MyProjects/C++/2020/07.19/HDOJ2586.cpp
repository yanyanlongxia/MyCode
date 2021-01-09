//
// Created by admin on 2020/7/27.
//
#include <bits/stdc++.h>
using namespace std;
int n,q,f[100005][22],depth[100005],maxd,dist[100005],T;
vector<pair<int,int>>no[100005];
void dfs(int x,int fa,int w)
{
    dist[x]=dist[fa]+w;
    depth[x]=depth[fa]+1;
    f[x][0]=fa;
    maxd=max(maxd,depth[x]);
    for(int i=0;i<no[x].size();i++)
    {
        int y=no[x][i].first,z=no[x][i].second;
        if(y!=fa)
            dfs(y,x,z);
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
    return dist[x]+dist[y]-2*dist[lca(x,y)];
}
int main()
{
    cin>>T;
    while(T--)
    {
        for(int i=0;i<100005;i++)
            no[i].clear();
        maxd=0;
        cin>>n>>q;
        int x,y,z;
        for(int i=1;i<=n-1;i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            no[x].push_back(make_pair(y,z));
            no[y].push_back(make_pair(x,z));
        }
        dfs(1,0,0);
        for(int i=1;i<=log2(maxd);i++)
            for(int j=1;j<=n;j++)
                if((1<<i)<=depth[j])
                    f[j][i]=f[f[j][i-1]][i-1];
        for(int i=1;i<=q;i++)
        {
            scanf("%d%d",&x,&y);
            printf("%d\n",query(x,y));
        }
    }
    return 0;
}

