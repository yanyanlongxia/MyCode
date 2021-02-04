//File: Dijkstra.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//
#include <bits/stdc++.h>
using namespace std;
int n,m,head[1000000],nxt[1000000],ver[1000000],edge[1000000],tot,dis[1000000],s;
bool vis[1000000];
void add(int x,int y,int z)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    edge[tot]=z;
    head[x]=tot;
}
void dijkstra()
{
    priority_queue< pair<int,int> >q;
    memset(dis,0x3f3f3f3f,sizeof(dis));
    dis[s]=0;
    q.push(make_pair(0,s));
    while(!q.empty())
    {
        int x=q.top().second;
        q.pop();
        if(vis[x])
            continue;
        vis[x]=1;
        for(int i=head[x];i;i=nxt[i])
        {
            int y=ver[i],z=edge[i];
            if(dis[y]>dis[x]+z)
            {
                dis[y]=dis[x]+z;
                q.push(make_pair(-dis[y],y));
            }
        }
    }
}
signed main() {
    int x,y,z;
    scanf("%d%d%d",&n,&m,&s);
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        add(x,y,z);
    }
    dijkstra();
    for(int i=1;i<=n;i++)
    {
        if(dis[i]==0x3f3f3f3f)
            printf("%d ",2147483647);
        else
            printf("%d ",dis[i]);
    }
    return 0;
}