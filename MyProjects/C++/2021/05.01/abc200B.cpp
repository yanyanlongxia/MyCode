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
ll k,n;
int main() {
    freopen("data.in","r",stdin);
    //freopen("abc200B.out","w",stdout);
    scanf("%lld%lld",&n,&k);
    for(int i=1;i<=k;i++) {
        if (n % 200 == 0)
            n /= 200;
        else {
            if (k - i >= 1) {
                n = 10 * n / 2 + 1ll;
                i++;
            }else
                n=1000*n+200;
        }
    }
    printf("%lld\n",n);
    return 0;
}
