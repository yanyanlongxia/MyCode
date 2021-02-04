//File: P1438.cpp
//Author: yanyanlongxia
//Date: 2020/8/13
//
#include<bits/stdc++.h>
using namespace std;
const int M=1<<20;
int n,m,q,opt,L,R,k,d;
int a[M],lt[M],dt[M];
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}
inline void update(int L,int R,int k,int d){ //update 还是蛮常规的
    for(int l=L+m-1,r=R+m+1;l^r^1;l>>=1,r>>=1){
        if(l&1^1) a[l^1]+=k+(lt[l^1]-L)*d,dt[l^1]+=d;
        if(r&1) a[r^1]+=k+(lt[r^1]-L)*d,dt[r^1]+=d;
    }
}
inline int query(int p,int res){
    for(int i=m+p;i;i>>=1) res+=a[i]+(p-lt[i])*dt[i];
    return res;
}
int main(){
    n=read(),q=read();
    for(m=1;m<=n;m<<=1);
    for(int i=1;i<=n;++i) a[m+i]=read(),lt[m+i]=i;
    for(int i=m;i;--i) lt[i]=lt[i<<1];
    while(q--){
        opt=read();
        if(opt&1)
            L=read(),R=read(),k=read(),d=read(),update(L,R,k,d);
        else
            k=read(),printf("%d\n",query(k,0));
    }
    return 0;
}