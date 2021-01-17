//Created by yanyanlongxia on 2021/1/17
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
using namespace std;
const int N=2e3;
const int MOD=998244353;
int n,m;
int a[N<<1];
ll res,lsq;
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1711.out","w",stdout);
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        scanf("%d",&a[i]);
    reverse(a,a+n+1);
    scanf("%d",&m);
    while(m--){
        scanf("%lld",&lsq);
        res=0;
        for(int i=0;i<=n;i++){
            res=res*lsq+1ll*a[i];
            res%=MOD;
        }
        printf("%lld ",res);
    }
    printf("\n");
    return 0;
}
