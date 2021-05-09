//Created by yanyanlongxia on 2021/5/8
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e6+10;
int n,m,ans,fa[N];
int find(int x){
    return x==fa[x]?x:fa[x]=find(fa[x]);
}
struct edge{
    int x,y,z;
    bool operator < (edge b) const{
        return z<b.z;
    }
}e[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3366.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        fa[i]=i;
    for(int i=1;i<=m;i++){
        scanf("%d%d%d",&e[i].x,&e[i].y,&e[i].z);
    }
    sort(e+1,e+m+1);
    for(int i=1;i<=m;i++){
        int x=find(e[i].x),y=find(e[i].y),z=e[i].z;
        if(x==y)
            continue;
        ans+=z;
        fa[y]=x;
    }
    printf("%d\n",ans);
    return 0;
}
