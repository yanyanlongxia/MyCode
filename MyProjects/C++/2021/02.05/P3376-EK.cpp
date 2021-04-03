//Created by yanyanlongxia on 2021/3/13
//【模板】网络最大流
//Edmond-Karp
#include <bits/stdc++.h>
#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;

const int N=2e5;
int n,m,s,t,last[N];
ll flow[N];
int tot=1,edge[N],head[N],nxt[N],ver[N];
inline void add(int x, int y, int z){
    ver[++tot]=y, edge[tot]=z, nxt[tot]=head[x], head[x]=tot;
    ver[++tot]=x, edge[tot]=0, nxt[tot]=head[y], head[y]=tot;
}
bool bfs(){
    clm(last);
    queue<int>q;
    q.push(s);
    flow[s]=INF;
    while (!q.empty()){
        int x=q.front();
        q.pop();
        if(x == t)
            break;
        for(int i=head[x]; i; i=nxt[i]){
            int y=ver[i],z=edge[i];
            if(z>0 && last[y]==0){
                last[y]=i;
                flow[y]=min(flow[x],(ll)z);
                q.push(y);
            }
        }
    }
    return last[t];
}
ll EK(){
    ll maxflow=0;
    while (bfs()){
        maxflow+=flow[t];
        for(int i=t;i!=s;i=ver[last[i]^1]){
            edge[last[i]]-=flow[t];
            edge[last[i]^1]+=flow[t];
        }
    }
    return maxflow;
}
signed main(){
    freopen("data.in","r",stdin);
    //freopen("P3376-EK.out","w",stdout);
    int x,y,z;
    scanf("%d%d%d%d",&n,&m,&s,&t);
    while (m--){
        scanf("%d%d%d",&x,&y,&z);
        add(x,y,z);
    }
    printf("%lld\n",EK());
    return 0;
}
