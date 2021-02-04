//File: and.cpp
//Author: yanyanlongxia
//Date: 2020/10/28
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e6+5;
int n,q,a[N],st[N][20];
double lo[N];
inline int read(){
    int f=1,ret=0;
    char ch=getchar();
    while (!isdigit(ch)){
        if (ch=='-')
            f=-1;
        ch=getchar();
    }
    while (isdigit(ch))
    {
        ret=10*ret+ch-'0';
        ch=getchar();
    }
    return ret*f;
}
inline int ask(int l,int r){
    int k=lo[r-l+1]/lo[2];
    return min(st[l][k],st[r-(1<<k)+1][k]);
}
int main() {
    int x,y;
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    n=read();q=read();
    for (int i=1;i<=n;i++)
    {
        a[i]=read();
        lo[i]=log(i);
        st[i][0]=a[i];
    }
    for (int i=1;i<=lo[n]/lo[2];i++)
        for (int j=1;j<=n-(1<<i)+1;j++)
            st[j][i]=min(st[j][i-1],st[j+(1<<(i-1))][i-1]);
    while (q--){
        x=read();
        y=read();
        printf("%d\n",ask(x,y));
    }
    return 0;
}
