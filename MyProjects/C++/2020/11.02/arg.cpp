//File: arg.cpp
//Author: yanyanlongxia
//Date: 2020/11/2
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=20;
int n,m,a[N],li[N],ans;
int vis[N-4],t[N-4];
inline void add(int x,int val){
    for(;x<=n;x+=(x & -x))
        t[x]=max(t[x],val);
}
inline int ask(int x){
    int ret=0;
    for(;x;x-=(x & -x))
        ret=max(ret,t[x]);
    return ret;
}
bool check(){
    memset(vis,0,sizeof(vis));
    memset(t,0,sizeof(t));
    for(int i=1;i<=n;i++)
        vis[a[i]]=i;
    for(int i=2;i<=m;i++)
        if(vis[li[i]]<vis[li[i-1]])
            return false;
    int res=0;
    for(int i=1;i<=n;i++){
        int ret=ask(a[i]-1);
        res=max(res,ret+1);
        add(a[i],ret+1);
    }
    if (res==m)
        return true;
    else
        return false;
}
int main() {
    freopen("arg.in","r",stdin);
    freopen("arg.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
        scanf("%d",&li[i]);
    for(int i=1;i<=n;i++)
        a[i]=i;
    do{
        if (check())
            ans++;
    } while (next_permutation(a+1,a+1+n));
    printf("%d\n",ans);
    return 0;
}
