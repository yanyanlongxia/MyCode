//
// Created by admin on 2020/8/3.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,tot;
long long t;
int g[1000000][60];
pair<int,int>node[1000000];
int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-')f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}
signed main() {
    int x, y;
    scanf("%d%d%d%d%lld", &n, &m, &a, &b, &t);
    //n=read(),m=read(),a=read(),b=read(),t=read();
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            scanf("%d%d", &x, &y);
            //x=read(),y=read();
            tot++;
            node[tot] = make_pair(i, j);
            g[tot][0] = (x-1) * m + y;
        }
    for (int k = 1; k <= 60; k++)
        for (int i = 1; i <= tot; i++)
            g[i][k] = g[g[i][k - 1]][k - 1];
    int ans = (a-1) * m + b;
    while (t > 0) {
        int l = log2(t);
        ans = g[ans][l];
        t -= (long long) (1 << l);
    }
    printf("%d %d\n", node[ans].first, node[ans].second);
    return 0;
}