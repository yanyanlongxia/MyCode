//Created by yanyanlongxia on 2021/8/3
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e4;
int n;
ll minc=99824435333333,a[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR225.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    for(ll cur=-3000;cur<=3000;cur++){
        ll cc=0;
        for(int i=1;i<=n;i++)
            cc+=(a[i]-cur)*(a[i]-cur);
        if(cc<=minc){
            minc=cc;
        }
    }
    printf("%lld\n",minc);
    return 0;
}
