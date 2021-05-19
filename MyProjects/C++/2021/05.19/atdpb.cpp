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
int n,a[N],dp[N],k;
int main() {
    freopen("data.in", "r", stdin);
    //freopen("atdpb.out","w",stdout);
    infm(dp);
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= k && j < i; j++) {
            int pre = i - j;
            dp[i] = min(dp[i], dp[pre] + abs(a[i] - a[pre]));
        }
    }
    printf("%d\n", dp[n]);
    return 0;
}
