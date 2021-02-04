//File: P1894.cpp
//Author: yanyanlongxia
//Date: 2020/12/27
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e3;
int n,m,match[N],tot,head[N],nxt[N],ver[N],ans;
bool vis[N];
inline void add(int x,int y){
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
bool dfs(int x){
    if(vis[x])
        return false;
    vis[x]=true;
    for(int i=head[x];i;i=nxt[i]){
        int y=ver[i];
        if(!match[y]||dfs(match[y])){
            match[y]=x;
            return true;
        }
    }
    return false;
}
int main() {
    freopen("data.in","rev",stdin);
    //freopen("P1894.out","w",stdout);
    int op,x,y;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&op);
        for(int j=1;j<=op;j++){
            scanf("%d",&x);
            add(i,x);
        }
    }
    for(int i=1;i<=n;i++){
        memset(vis,0,sizeof(vis));
        if(dfs(i))
            ans++;
    }
    printf("%d",ans);
    return 0;
}
