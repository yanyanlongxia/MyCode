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
const int N=1e8+10;
int n,q,k,prime[N],tot;
bool vis[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3383.out","w",stdout);
    scanf("%d%d",&n,&q);
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            prime[++tot]=i;
        }
        for(int j=1;j<=tot&&prime[j]*i<=n;j++){
            vis[prime[j]*i]=true;
            if(i%prime[j]==0)
                break;
        }
    }
    while(q--){
        scanf("%d",&k);
        printf("%d\n",prime[k]);
    }
    return 0;
}
