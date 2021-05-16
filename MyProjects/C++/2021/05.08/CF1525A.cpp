//Created by yanyanlongxia on 2021/5/16
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
int t,k;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main() {
    freopen("data.in", "r", stdin);
    //freopen("CF1525A.out","w",stdout);
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &k);
        int a = k, b = 100 - k;
        if ((!a) || (!b))
            puts("1");
        else {
            if (a >= 2 && b >= 2) {
                int tp = gcd(a, b);
                a /= tp;
                b /= tp;
            }
            printf("%d\n", (a + b));
        }
    }
    return 0;
}
