#include <bits/stdc++.h>//测试题解，用于对拍
#define re register
#define inf 999999999
using namespace std;
int f[2][101], n, c;
int h[100001];
int now, m;
int ans = inf;
inline int read() {
    char c = getchar();
    int x = 0;
    while (c < '0' || c > '9') c = getchar();
    while (c >= '0' && c <= '9')
        x = (x << 3) + (x << 1) + c - 48, c = getchar();
    return x;
}
int main() {
    n = read();
    c = read();
    now = 1;
    for (re int i = 1; i <= n; i++)
        h[i] = read(), m = max(m, h[i]);
    for (re int i = 0; i <= m; i++)
        f[0][i] = f[1][i] = inf;
    for (re int i = h[1]; i <= m; i++)
        f[now][i] = (i - h[1]) * (i - h[1]);
    for (re int i = 2; i <= n; i++) {
        now ^= 1;
        int k = inf;
        for (re int j = h[i - 1]; j <= m; j++) {
            k = min(k, f[now ^ 1][j] - j * c);
            if (j >= h[i])
                f[now][j] = k + (j - h[i]) * (j - h[i]) + c * j;
        }
        k = inf;
        for (re int j = m; j >= h[i]; --j)
        {
            k = min(k, f[now ^ 1][j] + j * c);
            f[now][j] = min(f[now][j], k - c * j + (j - h[i]) * (j - h[i]));
        }
        for (re int i = 0; i <= m; i++)
            f[now ^ 1][i] = inf;
    }
    for (re int i = h[n]; i <= m; i++)
        ans = min(ans, f[now][i]);
    cout << ans << endl;
    return 0;
}