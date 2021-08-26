//Created by yanyanlongxia on 2021/8/26
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e7;
int T,n,cnt;
int v[N];
bool vis[N];
int main() {
    freopen("mult.in","r",stdin);
    freopen("mult.out","w",stdout);
    scanf("%d",&T);
    for(int i=2;i<=N;i++){
        if(!vis[i])
            v[++cnt]=i;
        for(int j=1;j<=cnt&&i*v[j]<=N;j++){
            vis[i*v[j]]=true;
            if(i%v[j]==0)
                break;
        }
    }
    /*for(int i=1;i<=100;i++)
        printf("%d ",v[i]);*/
    while(T--){
        scanf("%d",&n);
        if(!vis[n] && n != 3){
            puts("-1");
            continue;
        }
        if(n%3==0){
            ll res=1ll*(n/3)*(n/3)*(n/3);
            printf("%lld\n",res);
            continue;
        }
        if(n&1){
            puts("-1");
            continue;
        }
        if(n%4!=0){
            puts("-1");
            continue;
        }
        ll res=1ll*(n/2)*(n/4)*(n/4);
        printf("%lld\n",res);
    }
    return 0;
}
