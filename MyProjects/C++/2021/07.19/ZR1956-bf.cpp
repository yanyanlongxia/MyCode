//Created by yanyanlongxia on 2021/7/23
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6;
int n,m,q,a[N],b[N],c[N];
int main() {
    freopen("data.in", "r", stdin);
    //freopen("ZR1956-bf.out","w",stdout);
    scanf("%d%d%d", &n, &m, &q);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= m; i++)
        scanf("%d", &b[i]);
    while (q--) {
        int opt, num, x = 0, y = 0;
        scanf("%d%d", &opt, &num);
        if (opt == 1)
            x = num;
        else
            y = num;
        for (int i = 1; i <= n; i++) {
            c[i] = a[i] + x;
        }
        for (int i = 1; i <= m; i++) {
            c[n + i] = b[i] + y;
        }
        sort(c + 1, c + n + m + 1);
        if ((n + m) & 1)
            printf("%d\n", c[(n + m) / 2 + 1]);
        else {
            double tp = (c[(n + m) / 2] + c[(n + m) / 2 + 1]) / 2.0;
            if ((c[(n + m) / 2] + c[(n + m) / 2 + 1]) % 2 == 0)
                printf("%d\n", int(tp));
            else
                printf("%.1f\n", tp);
        }
    }
    return 0;
}
