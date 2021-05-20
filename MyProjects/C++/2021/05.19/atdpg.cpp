//Created by yanyanlongxia on 2021/5/20
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e7;
int n,m,tot,nxt[N],head[N],ver[N],ans,dp[N];
bool v[N];
inline void add(int x,int y){
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs(int x) {
    v[x] = true;
    for (int i = head[x]; i; i = nxt[i]) {
        int y = ver[i];
        if (!v[y])
            dfs(y);
        dp[x] = max(dp[x], dp[y]);
    }
    if (head[x])
        dp[x]++;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("atdpg.out","w",stdout);
    scanf("%d%d",&n,&m);
    int x,y;
    for(int i=1;i<=m;i++){
        scanf("%d%d",&x,&y);
        add(x,y);
    }
    for(int i=1;i<=n;i++) {
        if (!v[i])
            dfs(i);
        ans = max(ans, dp[i]);
    }
    printf("%d\n",ans);
    return 0;
}
