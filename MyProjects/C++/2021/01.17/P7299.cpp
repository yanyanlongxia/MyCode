//Created by yanyanlongxia on 2021/1/29
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
using namespace std;
const int N=1e6+5;
int n,ans[N],cow[N],k;
bool vis[N];
set<int>s[N];
void dfs1(int u,int k,bool first){
    if(!first && u==k)
        return;
    vis[u]=1;
    s[k].insert(s[u].begin(),s[u].end());
    dfs1(cow[u],k,0);
}
void dfs2(int u,int k,bool first){
    if(!first && u==k)
        return;
    ans[u]=s[k].size();
    dfs2(cow[u],k,0);
}
int main() {
    //freopen("P7299.in","r",stdin);
    //freopen("P7299.out","w",stdout);
    int x,y;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        cow[i]=i;
        s[i].insert(i);
    }
    for(int i=1;i<=k;i++){
        scanf("%d%d",&x,&y);
        swap(cow[x],cow[y]);
        s[cow[x]].insert(y);
        s[cow[y]].insert(x);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs1(i,i,1);
            dfs2(i,i,1);
        }
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",ans[i]);
    return 0;
}
