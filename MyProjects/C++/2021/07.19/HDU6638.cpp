//Created by yanyanlongxia on 2021/7/20
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e3+5;
int T,n,xx[N*N],yy[N*N];
ll ww[N*N],sum[N][N],ans,uli,dli;
vector<int>v1,v2;
inline int get_id1(int x) {
    return lower_bound(v1.begin(), v1.end(), x) - v1.begin() + 1;
}
inline int get_id2(int x) {
    return lower_bound(v2.begin(), v2.end(), x) - v2.begin() + 1;
}
struct segment{
    int l,r;
    ll lmax,rmax,dat,sum;
}t[N*40];
struct cht{
    int x,y;
    ll w;
    cht(){
        x=0,y=0,w=0;
    }
};
vector<cht>c[N];
cht make_chest(int x,int y,ll w){
    cht tmp;
    tmp.x=x;tmp.y=y;tmp.w=w;
    return tmp;
}
inline void update(int p){
    t[p].sum=t[p<<1].sum+t[p<<1|1].sum;
    t[p].lmax= max(t[p<<1].lmax,t[p<<1].sum+t[p<<1|1].lmax);
    t[p].rmax= max(t[p<<1|1].rmax,t[p<<1|1].sum+t[p<<1].rmax);
    t[p].dat= max(max(t[p<<1].dat,t[p<<1|1].dat),t[p<<1].rmax+t[p<<1|1].lmax);
}
void build(int p,int l,int r){
    t[p].l=l;t[p].r=r;
    if(l==r){
        ll x=0;
        t[p].sum=x;t[p].dat=x;t[p].lmax=x;t[p].rmax=x;

        return;
    }
    int mid=l+r>>1;
    build(p<<1,l,mid);
    build(p<<1|1,mid+1,r);
    update(p);
}
void add(int p,int pos,ll val){
    if(t[p].l==t[p].r){
        t[p].sum+=val;t[p].lmax+=val;t[p].rmax+=val;t[p].dat+=val;
        return;
    }
    int mid=t[p].l+t[p].r>>1;
    if(pos<=mid)
        add(p<<1,pos,val);
    else
        add(p<<1|1,pos,val);
    update(p);
}
int main() {
    freopen("data.in", "r", stdin);
    //freopen("HDU6638.out","w",stdout);
    scanf("%d", &T);
    while (T--) {
        v1.clear();
        v2.clear();

        //clm(w);
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d%d%lld", &xx[i], &yy[i], &ww[i]);
            v1.push_back(xx[i]);
            v2.push_back(yy[i]);
        }
        sort(v1.begin(), v1.end());
        v1.erase(unique(v1.begin(), v1.end()), v1.end());
        sort(v2.begin(), v2.end());
        v2.erase(unique(v2.begin(), v2.end()), v2.end());
        for (int i = 1; i <= n; i++) {
            xx[i] = get_id1(xx[i]);
            yy[i] = get_id2(yy[i]);
            //w[xx[i]][yy[i]] += ww[i];
            c[xx[i]].push_back(make_chest(xx[i],yy[i],ww[i]));
        }
        /*for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                sum[i][j]=sum[i][j-1]+w[i][j];
            }
        }*/
        ans=-0x3f3f3f3f;
        for(dli=1;dli<=n;dli++){
            build(1,1,n);
            for(uli=dli;uli<=n;uli++){
                for(int i=0;i<c[uli].size();i++)
                    add(1,c[uli][i].y,c[uli][i].w);
                ans= max(ans,t[1].dat);
            }
        }
        printf("%lld\n",ans);
        for(int i=1;i<=n;i++){
            c[xx[i]].clear();
        }
    }
    return 0;
}
