//File: T139773.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//
#include <bits/stdc++.h>
using namespace std;
const int INF = 1000;
const int offset = 4e6 + 7;
int o[offset * 2 + 1];
int f[offset];
bool vis[offset];
int n,T;

int main() {
   	scanf("%d",&T);
    int st=0;
    while (T--) {
        scanf("%d", &n);
        memset(o, 0, sizeof(o));
        memset(vis, 0, sizeof(vis));
        memset(f, 0, sizeof(f));
        for (int i = 0; i < n; i++) f[i] = INF;
        int h = offset, t = offset;
        o[h] = 1;
        f[1] = 1;
        while (h <= t) {
            int u = o[h++];
            if (f[u] < f[2 * u % n]) {
                f[ 2 * u % n ] = f[u];
                o[--h] = 2 * u % n;
            }
            if (f[u] + 1 < f[(2 * u + 1) % n]) {
                f[ (2 * u + 1) % n ] = f[u] + 1;
                o[++t] = (2 * u + 1) % n;
            }
        }
        printf("%d\n", f[0]);
    }
    return 0;
}
