//Created by yanyanlongxia on 2021/8/26
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=200,T=2e5,M=1e6;
int n,t,m,s,dp[N][T];
int cnt,ver[M],nxt[M],edge[M],head[M];
inline void add(int x,int y,int z){
    ver[++cnt]=y;
    edge[cnt]=z;
    nxt[cnt]=head[x];
    head[x]=cnt;
}
int dfs(int x,int el){
    if(dp[x][el])
        return dp[x][el];
    int maxm=-0x3f3f3f3f;
    if(el==0)
        return 0;
    maxm= max(maxm,dfs(x,el-1));
    for(int i=head[x];i;i=nxt[i]){
        int y=ver[i],z=edge[i];
        maxm= max(maxm, dfs(y,el-1)+z);
    }
    dp[x][el]=maxm;
    return maxm;
}
int main() {
    freopen("collect.in","r",stdin);
    freopen("collect.out","w",stdout);
    int x,y,z;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d%d%d",&x,&y,&z);
        add(x,y,z);
    }
    scanf("%d%d",&s,&t);
    printf("%d\n", dfs(s,t));
    return 0;
}
