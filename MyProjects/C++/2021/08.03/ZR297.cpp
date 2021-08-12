//Created by yanyanlongxia on 2021/8/4
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e6;
int n,u[N],v[N],w[N],dis[2][N],ans,m,nxt[N],ver[N],head[N],edge[N],tot,st[2];
bool vis[N];
priority_queue<pair<int,int> >q;
inline void add(int x,int y,int z){
    ver[++tot]=y;
    nxt[tot]=head[x];
    edge[tot]=z;
    head[x]=tot;
}
inline int read() {
    char s = getchar();
    int ret = 0;
    while (!isdigit(s)) {
        s = getchar();
    }
    while (isdigit(s)) {
        ret = 10 * ret + s - '0';
        s = getchar();
    }
    return ret;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR297.out","w",stdout);
    n=read(),m=read();
    for(int i=1;i<=m;i++){
        scanf("%d%d%d",&u[i],&v[i],&w[i]);
        add(u[i],v[i],w[i]);
        add(v[i],u[i],w[i]);
    }
    infm(dis);
    st[0]=n;st[1]=1;
    for(int i=0;i<=1;i++){
        clm(vis);
        q.push(make_pair(0,st[i]));
        dis[i][st[i]]=0;
        while(!q.empty()){
            int x=q.top().second;
            q.pop();
            if(vis[x])
                continue;
            vis[x]=true;
            for(int j=head[x];j;j=nxt[j]){
                int y=ver[j],z=edge[j];
                if(dis[i][x]+z<dis[i][y]){
                    dis[i][y]=dis[i][x]+z;
                    q.push(make_pair(-dis[i][y],y));
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",dis[0][i]+dis[1][i]);
    for(int i=1;i<=m;i++)
        printf("%d\n", min(dis[0][u[i]]+dis[1][v[i]],dis[1][u[i]]+dis[0][v[i]])+w[i]);
    return 0;
}
