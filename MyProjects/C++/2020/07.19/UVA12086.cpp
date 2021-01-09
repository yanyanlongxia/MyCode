//
// Created by admin on 2020/7/24.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t[1000000],n,N;
char op[5];
inline int read(){
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}
void build(){
    int a=log2(n)+1;
    N=1<<a;
    for(int i=N+1;i<=N+n;i++) t[i]=read();
    for(int i=N-1;i;i--)  t[i]=t[i << 1]+t[i << 1 | 1];
}
void change(int x,int y){
    int k=y-t[N+x];
    for(x+=N;x;x>>=1) t[x]+=k;
}
int ask(int x,int y){
    int ans=0;
    for(x=x+N-1,y=y+N+1;x^y^1;x>>=1,y>>=1){
        if(~x&1)  ans+=t[x^1];
        if(y&1)  ans+=t[y^1];
    }
    return ans;
}
signed main(){
    bool sta=0;
    int x,y,i=1;n = read();
    while(n!=0){
        if(sta)
            puts("");
        sta=1;
        printf("Case %lld:\n",i);i++;
        build(); scanf("%s",op);
        while(op[0]!='E'){
            x=read();y=read();
            if(op[0]=='S')  change(x,y);
            else  printf("%lld\n",ask(x,y));
            scanf("%s",op);
        }
        n = read();
        memset(t,0,sizeof(t));
    }
    return 0;
}