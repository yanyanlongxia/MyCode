//
// Created by admin on 2020/7/30.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,k,e,tot,ans,dp[500],edge[500],head[500],nxt[500],dis[500],to[500];
bool vis[500],cl[500][500],cvis[500];
int read()
{
    int x=0,f=1;char ch=getchar();
    while(!isdigit(ch)){if(ch=='-') f=-1;ch=getchar();}
    while(isdigit(ch)){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
void add(int x,int y,int z)
{
    tot++;
    edge[tot]=z;
    nxt[tot]=head[x];
    to[tot]=y;
    head[x]=tot;
}
void dijkstra()
{
    memset(dis,0x3f3f3f3f,sizeof(dis));
    memset(vis,0,sizeof(vis));
    priority_queue< pair<int,int> >q;
    dis[1]=0;
    q.push(make_pair(0,1));
    while(!q.empty())
    {
        int x=q.top().second;q.pop();
        if(vis[x]||cvis[x])
            continue;
        vis[x]=1;
        for(int i=head[x];i;i=nxt[i])
        {
            int z=edge[i],y=to[i];
            if(dis[y]>dis[x]+z)
            {
                dis[y]=dis[x]+z;
                q.push(make_pair(-dis[y],y));
            }
        }
    }
}
int main()
{
    int x,y,z,d;
    n=read();m=read();k=read();e=read();
    for(int i=1;i<=e;i++)
    {
        x=read();y=read();z=read();
        add(x,y,z);
        add(y,x,z);
    }
    d=read();
    for(int i=1;i<=d;i++)
    {
        x=read();y=read();z=read();
        for(int j=y;j<=z;j++)
            cl[j][x]=1;
    }
    memset(dp,0x3f3f3f3f,sizeof(dp));
    dp[0]=-k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cvis[j]=0;
        for(int j=i;j>=1;j--)
        {
            for(int u=1;u<=m;u++)
                if(cl[j][u])
                    cvis[u]=1;
            dijkstra();
            if(dis[m]>=100000000)
                break;
            dp[i]=min(dp[i],dp[j-1]+(i-j+1)*dis[m]+k);
        }
    }
    printf("%d\n",dp[n]);
    return 0;
}