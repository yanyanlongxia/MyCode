//File: CF914D.cpp
//Author: yanyanlongxia
//Date: 2020/11/28
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e6;
int n,q,num[N],cnt;
inline int gcd(int a,int b){
    return b==0 ? a : gcd(b,a%b);
}
inline int read(){
    int f=1,ret=0;
    char ch=getchar();
    while (!isdigit(ch)){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while (isdigit(ch)){
        ret=10*ret+ch-'0';
        ch=getchar();
    }
    return f*ret;
}
struct segment{
    int l,r,dat;
}t[N<<2];
inline void update(int p){
    t[p].dat=gcd(t[p<<1].dat,t[p<<1|1].dat);
}
void build(int p,int l,int r){
    t[p].l=l,t[p].r=r;
    if(l==r)
    {
        t[p].dat=num[l];
        return ;
    }
    int mid=l+r>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(p);
}
void change(int p,int pos,int val){
    if(t[p].l==t[p].r){
        t[p].dat=val;
        return;
    }
    int mid=t[p].l+t[p].r>>1;
    if(pos<=mid)
        change(p<<1,pos,val);
    else
        change(p<<1|1,pos,val);
    update(p);
}
void query(int p,int l,int r,int val){
    if(cnt>1)
        return;
    if(t[p].l==t[p].r){
        cnt++;
        return;
    }
    int mid=t[p].l+t[p].r>>1;
    if(l<=mid&&t[p<<1].dat%val)
        query(p<<1,l,r,val);
    if(mid<r && t[p<<1|1].dat%val)
        query(p<<1|1,l,r,val);
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF914D.out","w",stdout);
    int opt,x,y,z;
    n=read();
    for(int i=1;i<=n;i++)
        num[i]=read();
    build(1,1,n);
    q=read();
    while (q--){
        opt=read();
        if(opt==1){
            x=read();
            y=read();
            z=read();
            cnt=0;
            query(1,x,y,z);
            if(cnt>1)
                puts("NO");
            else
                puts("YES");
        }else{
            x=read();
            z=read();
            change(1,x,z);
        }
    }
    return 0;
}
