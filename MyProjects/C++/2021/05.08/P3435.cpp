//Created by yanyanlongxia on 2021/5/13
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e7+1;
int n,pi[N];
ll ans;
char s[N];
int main() {
    freopen("data.in", "r", stdin);
    //freopen("P3435.out","w",stdout);
    scanf("%d", &n);
    scanf("%s", (s + 1));
    for (int i = 2; i <= n; i++) {
        int j = pi[i - 1];
        while (j && s[i] != s[j + 1])
            j = pi[j];
        if (s[i] == s[j + 1])
            j++;
        pi[i] = j;
    }
    for (int i = 2; i <= n; i++) {
        int j = pi[i];
        while (pi[j])
            j = pi[j];
        if (pi[i]) {
            pi[i] = j;
            ans += i - j;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
