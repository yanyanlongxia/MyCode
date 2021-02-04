//File: node.cpp
//Author: yanyanlongxia
//Date: 2020/10/26
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e6;
inline int read() {
    int f = 1, ret = 0;
    char ch = getchar();
    while (!isdigit(ch)) {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (isdigit(ch)) {
        ret = 10 * ret + ch - '0';
        ch = getchar();
    }
    return f * ret;
}
int n;
int tot,edge[N],ver[N],nxt[N],head[N];
inline void add(int x,int y,int z){
    edge[++tot]=z;
    ver[tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
namespace subtask1{
    const int SN=2e3;
    int dis[SN][SN],ans,mn;
    void dfs(int x,int fa,int root){
        if (x==root)
            dis[root][x]=1073741823;
        for (int i=head[x];i;i=nxt[i])
        {
            int y=ver[i],z=edge[i];
            if (y==fa)
                continue;
            dis[root][y]=dis[root][x]&z;
            dfs(y,x,root);
        }
    }
    inline int getmax(int x){
        int ret=0;
        for (int i=1;i<=n;i++)
            if(i!=x)
                ret=max(ret,dis[x][i]);
        return ret;
    }
    void solve(){
        int x,y,z;
        for (int i=1;i<n;i++){
            scanf("%d%d%d",&x,&y,&z);
            add(x,y,z);
            add(y,x,z);
        }
        for (int i=1;i<=n;i++)
            dfs(i,0,i);
        for (int i=1;i<=n;i++)
        {
            int tmp=getmax(i);
            if (tmp>mn)
            {
                mn=tmp;
                ans=i;
            }
        }
        printf("%d\n",ans);
    }
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("node.out","w",stdout);
    scanf("%d",&n);
    subtask1::solve();
    return 0;
}
