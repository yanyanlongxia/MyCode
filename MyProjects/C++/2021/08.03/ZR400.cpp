//Created by yanyanlongxia on 2021/8/15
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e6;
int n,k,b;
ll mn,sum,a[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR400.out","w",stdout);
    scanf("%d%d%d",&n,&k,&b);
    if(k>=0) {
        sum=-0x3f3f3f3f3f3f3f;
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &a[i]);
            a[i] += a[i - 1];
        }
        for (int i = 1; i <= n; i++) {
            sum = max(sum, a[i] - mn);
            mn = min(mn, a[i]);
        }
    }else{
        sum=0x3f3f3f3f3f3f3f;
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &a[i]);
            a[i] += a[i - 1];
        }
        for (int i = 1; i <= n; i++) {
            sum = min(sum, a[i] - mn);
            mn = max(mn, a[i]);
        }
    }
    printf("%lld\n",b+k*sum);
    return 0;
}
