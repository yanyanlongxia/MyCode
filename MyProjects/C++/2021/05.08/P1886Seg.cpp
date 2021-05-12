//Created by yanyanlongxia on 2021/5/10
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e7+10;
int n,k,a[N];
struct segment{
    int l,r,minn,maxn;
}t[N*10];
inline void update(int p){
    t[p].minn=min(t[p<<1].minn,t[p<<1|1].minn);
    t[p].maxn=max(t[p<<1].maxn,t[p<<1|1].maxn);
}
void build(int p,int l,int r){
    t[p].l=l,t[p].r=r,t[p].minn=INF,t[p].maxn=-INF;
    if(l==r){
        t[p].maxn=a[l];
        t[p].minn=a[l];
        return;
    }
    int mid=l+r>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(p);
}
int askmin(int p,int l,int r){
    if(l<=t[p].l&&t[p].r<=r){
        return t[p].minn;
    }
    int mid=t[p].l+t[p].r>>1,val=INF;
    if(l<=mid)
        val=min(val,askmin(p<<1,l,r));
    if(mid<r)
        val=min(val,askmin(p<<1|1,l,r));
    return val;
}
int askmax(int p,int l,int r){
    if(l<=t[p].l&&t[p].r<=r){
        return t[p].maxn;
    }
    int mid=t[p].l+t[p].r>>1,val=-INF;
    if(l<=mid)
        val=max(val,askmax(p<<1,l,r));
    if(mid<r)
        val=max(val,askmax(p<<1|1,l,r));
    return val;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P1886Seg.out","w",stdout);
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    build(1,1,n);
    for(int i=1;i<=n-k+1;i++)
        printf("%d ",askmin(1,i,i+k-1));
    puts("");
    for(int i=1;i<=n-k+1;i++)
        printf("%d ",askmax(1,i,i+k-1));
    puts("");
    return 0;
}
