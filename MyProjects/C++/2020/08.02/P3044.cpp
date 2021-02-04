//File: P3044.cpp
//Author: yanyanlongxia
//Date: 2020/8/4
//[USACO12MAR]Landscaping S
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <cstdio>
using namespace std;
int n,m,k,mar[10],dis[10][20000],tm[10],ans=0x3f3f3f3f;
bool vis[20000];
vector<pair<int,int> >edge[20000];
void add(int x,int y,int z)
{
    edge[x].push_back(make_pair(y,z));
    edge[y].push_back(make_pair(x,z));
}
void dijkstra(int times,int root)
{
    priority_queue< pair<int,int> >q;
    while(!q.empty())
        q.pop();
    q.push(make_pair(0,root));
    memset(dis[times],0x3f3f3f3f,sizeof(dis[times]));
    dis[times][root]=0;
    memset(vis,0,sizeof(vis));
    while (!q.empty())
    {
        int x=q.top().second;
        q.pop();
        if(vis[x])
            continue;
        vis[x]=true;
        for(int i=0;i<edge[x].size();i++)
        {
            int y=edge[x][i].first,z=edge[x][i].second;
            if(dis[times][y]>dis[times][x]+z)
            {
                dis[times][y]=dis[times][x]+z;
                q.push(make_pair(-dis[times][y],y));
            }
        }
    }
}
signed main() {
    int x,y,z;
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=k;i++)
        scanf("%d",&mar[i]);
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        add(x,y,z);
    }
    for(int i=1;i<=k;i++)
        dijkstra(i,mar[i]);
    for(int root=1;root<=n;root++)
    {
        bool flag=0;
        for(int i=1;i<=k;i++)
        {
            tm[i]=i;
            if(root==mar[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            continue;
        do
        {
            int tmp;
            tmp=dis[tm[1]][root];
            for(int i=1;i<k;i++)
                tmp+=dis[tm[i]][mar[tm[i+1]]];
            tmp+=dis[tm[k]][root];
            ans=min(ans,tmp);
        }while (next_permutation(tm+1,tm+1+k));
    }
    printf("%d\n",ans);
    return 0;
}