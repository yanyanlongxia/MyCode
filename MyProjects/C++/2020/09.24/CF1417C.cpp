//File: CF1417C.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int t,n,a[1000005],last[1000005],least[1000005],ans[1000005];
int main() {
    //freopen("tmp.in","r",stdin);
    //freopen("tmp1.out","w",stdout);
    scanf("%d", &t);
    while (t--) {
        memset(least, 0, sizeof(least));
        memset(last, 0, sizeof(last));
        memset(ans, -1, sizeof(ans));
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        for (int i = 1; i <= n; i++) {
            least[a[i]] = max(least[a[i]], i - last[a[i]]);
            last[a[i]] = i;
        }
        for (int i = 1; i <= n; i++) {
            least[i] = max(least[i], n - last[i] + 1);
            for (int j = least[i]; j <= n && ans[j] == -1; j++)
                ans[j] = i;
        }
        for (int i = 1; i <= n; i++)
            printf("%d ", ans[i]);
        puts("");
    }
    return 0;
}
