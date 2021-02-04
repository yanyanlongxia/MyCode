//File: xmasdag.cpp
//Author: yanyanlongxia
//Date: 2020/11/1
//
#include <iostream>
#include <cstdio>
#include <cctype>
#include <set>

#define ll long long
using namespace std;
const int N=5e5,mo=998244353;
set<pair<int ,int > >s;
int n,m,k,f[N],g[N];
int tot,ver[N],nxt[N],head[N];
inline int read(){
    int ff=1,ret=0;
    char ch=getchar();
    while(!isdigit(ch)){
        if(ch=='-')
            ff=-1;
        ch=getchar();
    }
    while(isdigit(ch)){
        ret=10*ret+ch-'0';
        ch=getchar();
    }
    return ff*ret;
}
inline void add(int x,int y){
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
inline int power(int a,int b){
    int res=1;
    for(;b;b>>=1){
        if(b & 1)
            res=((ll)res*a)%mo;
        a=(ll)a*a%mo;
    }
    return res;
}
void dp(int x){
    if(f[x])
        return;
    for(int i=head[x];i;i=nxt[i]){
        int y=ver[i];
        dp(y);
        f[x]+=f[y];
        g[x]+=g[y];
        f[x]%=mo;
        g[x]%=mo;
        f[x]=(f[x]+(ll)(g[y]*k)%mo)%mo;
    }
}
int main() {
    int x,y;
    freopen("xmasdag.in","r",stdin);
    freopen("xmasdag.out","w",stdout);
    g[1]=1;
    n=read(),m=read(),k=read();
    for (int i=1;i<=m;i++){
        x=read(),y=read();
        swap(x,y);
        if (s.find(make_pair(x,y))!=s.end())
            continue;
        s.insert(make_pair(x,y));
        add(x,y);
    }
    for (int i=1;i<=n;i++)
        dp(i);
    for (int i=1;i<=n;i++)
        printf("%d\n",f[i]);
    return 0;
}
