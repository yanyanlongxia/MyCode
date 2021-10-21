//Created by yanyanlongxia on 2021/10/21
//
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,-0x3f3f3f3f,sizeof(x))
using namespace std;
const int N=2e6;
int n,oil[N],d[N],a[N];
struct segment{
    int l,r,dat;
}t[N];
inline void update(int p){
    t[p].dat=min(t[p<<1].dat,t[p<<1|1].dat);
}
void build(int p,int l,int r){
    t[p].l=l;t[p].r=r;
    if(l==r){
        t[p].dat=a[l];
        return;
    }
    int mid=l+r>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(p);
}
int ask(int p,int l,int r){
    if(l<=t[p].l&&t[p].r<=r){
        return t[p].dat;
    }
    int mid=t[p].l+t[p].r>>1,val=INF;
    if(l<=mid)
        val=min(val,ask(p<<1,l,r));
    if(mid<r)
        val=min(val,ask(p<<1|1,l,r));
    return val;
}
int main() {
    freopen("travel1.in","r",stdin);
    //freopen("travel.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&oil[i],&d[i]);
    }
    for(int i=n+1;i<=2*n;i++){
        oil[i]=oil[i-n];
        d[i]=d[i-n];
    }
    for(int i=1;i<=2*n;i++){
        a[i]=a[i-1]+oil[i]-d[i];
    }
    build(1,1,2*n);
    for(int i=1;i<=n;i++){
        if(ask(1,i+1,i+n-1)<a[i-1]||oil[i]<d[i])
            puts("NIE");
        else
            puts("TAK");
    }
    return 0;
}
