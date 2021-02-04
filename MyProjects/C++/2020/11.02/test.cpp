#include <bits/stdc++.h>
using namespace std;
int p[10],ans,n,k;
bool vis[10];
bool gat(int x){
    memset(vis,0,sizeof (vis));

    while (!vis[p[x]]){
        if (p[x]==0)
            return true;
        x=p[x];
        vis[x]=true;
    }
    return false;
}
bool solve(){
    for(int i=1;i<=k;i++)
        if (!gat(i))
            return false;
    for(int i=k+1;i<=n;i++)
        if (gat(i))
            return false;
    return true;
}
void dfs(int step){
    if (step==n-1){
        for(int i=1;i<=n;i++) {
            p[step+1]=i;
            if (solve())
                ans++;
        }
        return;
    }
    for(int i=1;i<=n;i++)
    {
        p[step+1]=i;
        dfs(step+1);
    }
}
int main() {
    freopen("data.out","w",stdout);
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++) {
            ans=0;
            n=i;
            k=j;
            dfs(0);
            printf("%d ", ans);
        }
        puts("");
    }
    return 0;
}
