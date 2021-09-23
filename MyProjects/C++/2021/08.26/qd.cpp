//Created by yanyanlongxia on 2021/8/28
//
#include <bits/stdc++.h>
#define int long long
#define ll long long
#define ull unsigned long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,-0x3f3f3f3f,sizeof(x))
using namespace std;
const int N=1e6;
int n,m,a[N],fa[N],w[N],reco[N],maxm[N];
int find(int x){
    return fa[x]==x ? x : fa[x]= find(fa[x]);
}
int cnt,ver[N],nxt[N],head[N],sz[N];
inline void add(int x,int y){
    ver[++cnt]=y;
    nxt[cnt]=head[x];
    head[x]=cnt;
}
bool rec[N];
void merge(int x,int y) {
    x = find(x);
    y = find(y);
    if(x==y)
        return;
    if (sz[y] > sz[x])
        swap(x, y);
    sz[x] += sz[y];
    w[x] += w[y];
    fa[y]=x;
}
signed main() {
    freopen("qd.in", "r", stdin);
    freopen("qd.out","w",stdout);
    scanf("%lld%lld", &n, &m);
    int x, y;
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
    for (int i = 1; i <= m; i++) {
        scanf("%lld%lld", &x, &y);
        add(x, y);
        add(y, x);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &reco[i]);
    }
    reverse(reco + 1, reco + 1 + n);
    for (int i = 1; i <= n; i++) {
        fa[i] = i;
        w[i] = a[i];
        sz[i] = 1;
    }
    maxm[0]=0;
    for (int i = 1; i <= n; i++) {
        x = reco[i];
        rec[x] = true;
        for (int j = head[x]; j; j = nxt[j]) {
            y = ver[j];
            if (!rec[y])
                continue;
            merge(x,y);
        }
        maxm[i]= max(maxm[i-1],w[find(x)]);
    }
    reverse(maxm,maxm+n);
    for(int i=0;i<n;i++)
        printf("%lld\n",maxm[i]);
    return 0;
}
