//File: pebble.cpp
//Author: yanyanlongxia
//Date: 2020/10/2
//
#include <bits/stdc++.h>

using namespace std;
int t,n,a[1000005],suf[1000005];
bool cmp(int x,int y)
{
    return x>y;
}
int main() {
    freopen("pebble.in","r",stdin);
    freopen("pebble.out","w",stdout);
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        sort(a + 1, a + n + 1, cmp);
        suf[n + 1] = 0;
        for (int i = n; i >= 1; i--)
            suf[i] = suf[i + 1] + a[i];
        for (int i = 0; i <= n; i++)
            if (a[i + 1] * (n - i) - suf[i + 1] <= a[i]) {
                if ((n - i) % 2) {
                    puts("1");
                } else
                    puts("0");
                break;
            }
    }
    return 0;
}
