//File: P5658.cpp
//Author: yanyanlongxia
//Date: 2020/10/26
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=8e5;
int n,top,s[N];
ll ans,sum[N],op[N];
int tot,ver[N],nxt[N],head[N],fa[N];
char sign[N],ch[N];
inline void add(int x,int y){
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void dfs(int x){
    int tmp=0;
    if (sign[x]==')'){
        if (top){
            tmp=s[top];
            top--;
            op[x]=op[fa[tmp]]+1ll;
        }
    } else
        s[++top]=x;
    sum[x]=sum[fa[x]]+op[x];
    ans^=(sum[x]*(ll)x);
    for (int i=head[x];i;i=nxt[i]){
        int y=ver[i];
        if (y==fa[x])
            continue;
        dfs(y);
    }
    if (tmp)
        s[++top]=tmp;
    else if (top)
        top--;
}
int main() {
    int x,y;
    freopen("data.in","r",stdin);
    //freopen("P5658.out","w",stdout);
    scanf("%d",&n);
    scanf("%s",(sign+1));
    for(int i=2;i<=n;i++)
    {
        scanf("%d",&x);
        fa[i]=x;
        add(x,i);
    }
    dfs(1);
    printf("%lld\n",ans);
    return 0;
}
