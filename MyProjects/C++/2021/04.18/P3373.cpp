//Created by yanyanlongxia on 2021/4/30
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6+10;
struct segment{
    int l,r;
    ll sum,ta,tm;
}t[N];
int n,m;
ll MOD,a[N];
inline void update(int p){
    t[p].sum=(t[p<<1].sum+t[p<<1|1].sum)%MOD;
}
inline void spread(int p){
    if(t[p].tm!=1||t[p].ta){
        t[p<<1].sum=(t[p<<1].sum*t[p].tm%MOD+(t[p<<1].r-t[p<<1].l+1)*t[p].ta%MOD)%MOD;
        t[p<<1|1].sum=(t[p<<1|1].sum*t[p].tm%MOD+(t[p<<1|1].r-t[p<<1|1].l+1)*t[p].ta%MOD)%MOD;
        t[p<<1].ta=(t[p<<1].ta*t[p].tm%MOD+t[p].ta)%MOD;
        t[p<<1|1].ta=(t[p<<1|1].ta*t[p].tm%MOD+t[p].ta)%MOD;
        t[p<<1].tm=(t[p<<1].tm*t[p].tm%MOD);
        t[p<<1|1].tm=(t[p<<1|1].tm*t[p].tm%MOD);
        t[p].ta=0;
        t[p].tm=1;
    }
}
void build(int p,int l,int r){
    t[p].l=l;t[p].r=r;t[p].tm=1;
    if(l==r){
        t[p].sum=a[l];
        return;
    }
    int mid=l+r>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(p);
}
void add(int p,int l,int r,int val){
    if(l<=t[p].l&&t[p].r<=r){
        t[p].sum=(t[p].sum+(t[p].r-t[p].l+1)*val%MOD)%MOD;
        t[p].ta=(t[p].ta+val)%MOD;
        return;
    }
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    if(l<=mid)
        add(p<<1,l,r,val);
    if(mid<r)
        add(p<<1|1,l,r,val);
    update(p);
}
void mul(int p,int l,int r,int val){
    if(l<=t[p].l&&t[p].r<=r){
        t[p].sum=t[p].sum*val%MOD;
        t[p].ta=t[p].ta*val%MOD;
        t[p].tm=t[p].tm*val%MOD;
        return;
    }
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    if(l<=mid)
        mul(p<<1,l,r,val);
    if(mid<r)
        mul(p<<1|1,l,r,val);
    update(p);
}
ll ask(int p,int l,int r){
    if(l<=t[p].l&&t[p].r<=r){
        return t[p].sum;
    }
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    ll val=0;
    if(l<=mid)
        val=(val+ask(p<<1,l,r))%MOD;
    if(mid<r)
        val=(val+ask(p<<1|1,l,r))%MOD;
    return val;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3373.out","w",stdout);
    scanf("%d%d%lld",&n,&m,&MOD);
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    build(1,1,n);
    int opt,x,y,z;
    while(m--){
        scanf("%d",&opt);
        switch (opt) {
            case 1:
                scanf("%d%d%d",&x,&y,&z);
                mul(1,x,y,z);
                break;
            case 2:
                scanf("%d%d%d",&x,&y,&z);
                add(1,x,y,z);
                break;
            case 3:
                scanf("%d%d",&x,&y);
                printf("%lld\n",ask(1,x,y));
                break;
            default:
                break;
        }
    }
    return 0;
}
