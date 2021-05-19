//Created by yanyanlongxia on 2021/5/19
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e7;
int n,w[N],v[N],dp[N],m=1e5;
int lim;
int main() {
    freopen("data.in", "r", stdin);
    //freopen("atdpe.out","w",stdout);
    scanf("%d%d", &n, &lim);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &w[i], &v[i]);
    infm(dp);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= v[i]; j--) {
            dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
        }
    }
    for (int i = m; i >= 1; i--)
        if (dp[i] <= lim) {
            printf("%d\n", i);
            break;
        }
    return 0;
}
