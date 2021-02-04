#include<bits/stdc++.h>
using namespace std;
const int maxn=1005;
const int maxm=2005;
int ans,tot,a,b,c,d,n,m,K,e;
int dp[maxn],now[maxm],ff[maxn][maxm],edge[2*maxm],f[maxm],q[5*maxm],dis[maxm],DIS[maxn],to[2*maxm],head[maxm],nxt[2*maxm];
bool vis[maxn];
void add(int x,int y,int z)
{
    to[++tot]=y;nxt[tot]=head[x];head[x]=tot;edge[tot]=z;
}
int read()
{
    int ch=0,x=0;while(ch=getchar(),ch<'0'||ch>'9');
    while(x=x*10+ch-48,ch=getchar(),ch>='0'&&ch<='9');
    return x;
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
        if(vis[x]||now[x])
            continue;
        vis[x]=1;
        for(int i=head[x];i;i=nxt[i])
        {
            if(now[i])
                continue;
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
    n=read();m=read();K=read();e=read();
    for(int i=1;i<=e;i++)
    {
        a=read();b=read();c=read();
        add(a,b,c);add(b,a,c);
    }
    d=read();
    for(int i=1;i<=d;i++)
    {
        a=read();b=read();c=read();
        for(int j=b;j<=c;j++)
            ff[j][a]=1;
    }
    memset(dp,63,sizeof(dp));
    dp[0]=-K;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)now[j]=0;
        for(int j=i;j>=1;j--)
        {
            for(int k=1;k<=m;k++)
                if(ff[j][k])
                    now[k]=1;
            dijkstra();
            if(dis[m]>=100000000)
                break;
            dp[i]=min(dp[i],dp[j-1]+(i-j+1)*dis[m]+K);
        }
    }
    printf("%d",dp[n]);
    return 0;
}