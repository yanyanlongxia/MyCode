//File: trip.cpp
//Author: yanyanlongxia
//Date: 2020/10/24
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e6+10;
int n,dp[N][2],a[N],ans=0;
inline int read(){
    int f=1,ret=0;char ch=getchar();
    while (!isdigit(ch))
    {
        if (ch=='-')
            f=-1;
        ch=getchar();
    }
    while (isdigit(ch)){
        ret=10*ret+ch-'0';
        ch=getchar();
    }
    return f*ret;
}
vector<int>son[N];
void dfs(int x,int fa){
    dp[x][1]=dp[x][0]=a[x];
    for (int i=0;i<son[x].size();i++) {
        int y = son[x][i];
        if (y == fa)
            continue;
        dfs(y, x);
        dp[x][1]+=max(0,dp[y][1]);
        dp[x][0]+=min(0,dp[y][0]);
    }
}
int main() {
    int x,y;
    freopen("trip.in","r",stdin);
    freopen("trip.out","w",stdout);
    //scanf("%d",&n);
    n=read();
    for (int i=1;i<=n;i++) {
        //scanf("%d", &a[i]);
        a[i]=read();
        if (a[i]==0)
            a[i]=-1;
    }
    for (int i=1;i<n;i++)
    {
        //scanf("%d%d",&x,&y);
        x=read();y=read();
        son[x].push_back(y);
        son[y].push_back(x);
    }
    dfs(1,0);
    for (int i=1;i<=n;i++)
    {
        ans=max(ans,dp[i][1]);
        ans=max(ans,-dp[i][0]);
    }
    printf("%d\n",ans);
    return 0;
}
