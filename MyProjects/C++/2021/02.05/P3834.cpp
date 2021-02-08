//Created by yanyanlongxia on 2021/2/8
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=5e6;
int n,m,a[N],root[N],cnt;
vector<int>v;

inline int getid(int x){
    return lower_bound(v.begin(),v.end(),x)-v.begin()+1;
}
struct lsq{
    int l,r,sum;
}t[N];
void insert(int &p,int l,int r,int pre,int val){
    t[++cnt]=t[pre];
    p=cnt;
    t[p].sum++;
    if(l==r)
        return;
    int mid=l+r>>1;
    if(val<=mid)
        insert(t[p].l,l,mid,t[pre].l,val);
    else
        insert(t[p].r,mid+1,r,t[pre].r,val);
}
int query(int l,int r,int L,int R,int k){
    if(l==r)
        return l;
    int mid=l+r>>1,tmp=t[t[R].l].sum-t[t[L].l].sum;
    if(k<=tmp)
        return query(l,mid,t[L].l,t[R].l,k);
    else
        return  query(mid+1,r,t[L].r,t[R].r,k-tmp);
}
int ask(int l,int r,int k){
    return v[query(1,n,root[l-1],root[r],k)-1];
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3834.out","w",stdout);
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=1;i<=n;i++)
        a[i]=getid(a[i]);
    for(int i=1;i<=n;i++)
        insert(root[i],1,n,root[i-1],a[i]);
    int x,y,k;
    while (m--){
        scanf("%d%d%d",&x,&y,&k);
        printf("%d\n",ask(x,y,k));
    }

    return 0;
}
