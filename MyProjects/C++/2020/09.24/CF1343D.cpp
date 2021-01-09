//File: CF1343D.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int t,n,k,a[1000005],cnt1[1000005],cnt0[1000005],ans;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &k);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        for (int i=1;i<=2*k;i++)
            cnt1[i]=cnt0[i]=0;
        ans = 0x3f3f3f3f;
        for (int i = 1; i <= n/2; i++) {
            cnt0[a[i] + a[n - i + 1]]++;
            cnt1[min(a[i], a[n - i + 1]) + 1]++;
            cnt1[max(a[i], a[n - i + 1]) + k + 1]--;
            cnt1[a[i] + a[n - i + 1]]--;
            cnt1[a[i] + a[n - i + 1] + 1]++;
        }
        for (int i = 2; i <= 2 * k; i++) {
            cnt1[i] += cnt1[i - 1];
            ans = min(ans, cnt1[i] + (n / 2 - cnt1[i] - cnt0[i]) * 2);
        }
        printf("%d\n", ans);
    }
    return 0;
}
