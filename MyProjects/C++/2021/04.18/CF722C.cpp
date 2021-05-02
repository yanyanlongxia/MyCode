//Created by yanyanlongxia on 2021/5/1
//
//

#include <bits/stdc++.h>

#define int long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e6+10;
int n,a[N],fa[N],sz[N],mxs=0,ac[N],res[N],sum[N];
bool alive[N];
int find(int x){
    return x==fa[x]?x:fa[x]=find(fa[x]);
}
void merge(int x,int y){
    if(sz[find(x)]<sz[find(y)])
        swap(x,y);
    x=find(x);
    y=find(y);
    sz[x]+=sz[y];
    sum[x]+=sum[y];
    fa[y]=x;
    if(sum[x]>mxs)
        mxs=sum[x];
}
signed main() {
    //freopen("data.in","r",stdin);
    //freopen("CF722C.out","w",stdout);
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)
        scanf("%lld",&ac[i]);
    reverse(ac+1,ac+n+1);
    for(int i=1;i<=n;i++){
        alive[ac[i]]=true;
        int x=ac[i];
        fa[x]=x;
        sz[x]=1;
        sum[x]=a[x];
        if(sum[x]>mxs)
            mxs=sum[x];
        if(alive[x-1])
            merge(x,x-1);
        if(alive[x+1])
            merge(x,x+1);
        res[i+1]=mxs;
    }
    reverse(res+1,res+n+1);
    for(int i=1;i<=n;i++)
        printf("%lld\n",res[i]);
    return 0;
}
