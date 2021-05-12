//Created by yanyanlongxia on 2021/5/9
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e6;
int n,m,r,cnt,ver[N],nxt[N],head[N],dep[N],son[N],fat[N],top[N],sz[N];
inline void add(int x,int y){
    ver[++cnt]=y;
    nxt[cnt]=head[x];
    head[x]=cnt;
}
void dfs1(int x,int fa){
    fat[x]=fa;
    dep[x]=dep[fa]+1;
    sz[x]=1;
    for(int i=head[x];i;i=nxt[i]){
        int y=ver[i];
        if(y==fa)
            continue;
        dfs1(y,x);
        sz[x]+=sz[y];
        if(sz[y]>sz[son[x]])
            son[x]=y;
    }
}
void dfs2(int x,int to){
    top[x]=to;
    if(!son[x])
        return;
    dfs2(son[x],to);
    for(int i=head[x];i;i=nxt[i]){
        int y=ver[i];
        if(y==fat[x]||y==son[x])
            continue;
        dfs2(y,y);
    }
}
inline int lca(int x,int y){
    while(top[x]!=top[y]){
        if(dep[top[x]]>dep[top[y]])
            swap(x,y);
        y=fat[top[y]];
    }
    return dep[x]<dep[y]?x:y;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3379.out","w",stdout);
    int x,y;
    scanf("%d%d%d",&n,&m,&r);
    for(int i=1;i<n;i++){
        scanf("%d%d",&x,&y);
        add(x,y);
        add(y,x);
    }
    dfs1(r,0);
    dfs2(r,r);
    while(m--){
        scanf("%d%d",&x,&y);
        printf("%d\n", lca(x,y));
    }
    return 0;
}
