//Created by yanyanlongxia on 2021/4/18
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
int n;
int main() {
    ll p;
    freopen("prime12.out","r",stdin);
    freopen("check3.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&p);
        bool ck=false;
        for(ll j=1;j<=5*p;j++){
            ll t=p+3*j*j;
            ll x= sqrt(t);
            if(x*x==t){
                ck=true;
                printf("%lld %lld %lld\n",x,j,p);
                break;
            }
        }
        if(!ck)
            printf("%lld\n",p);
    }
    return 0;
}
