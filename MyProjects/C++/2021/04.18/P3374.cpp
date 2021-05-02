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
const int N=5e6;
int n,m,t[N];
inline void add(int x,int val){
    for(;x<=n;x+=x & -x)
        t[x]+=val;
}
inline int ask(int x){
    int res=0;
    for(;x;x-=x & -x)
        res+=t[x];
    return res;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3374.out","w",stdout);
    scanf("%d%d",&n,&m);
    int opt,x,y;
    for(int i=1;i<=n;i++) {
        scanf("%d", &x);
        add(i,x);
    }
    while(m--){
        scanf("%d",&opt);
        switch (opt) {
            case 1:
                scanf("%d%d",&x,&y);
                add(x,y);
                break;
            case 2:
                scanf("%d%d",&x,&y);
                printf("%d\n",ask(y)-ask(x-1));
                break;
            default:
                break;
        }
    }
    return 0;
}
