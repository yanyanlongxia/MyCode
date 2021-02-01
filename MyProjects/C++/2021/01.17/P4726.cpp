//Created by yanyanlongxia on 2021/1/24
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
using namespace std;
const int N = 2e6 + 5;
const int MOD = 998244353;
const int G = 3;
int Gi,r[N];

inline int power(int a, int b) {
    int res = 1;
    for (; b; b >>= 1) {
        if (b & 1)
            res = 1ll * res * a % MOD;
        a = 1ll * a * a % MOD;
    }
    return res;
}

inline int inv(int x) {
    return power(x, MOD - 2);
}

void NTT(int *a, int len, int flag) {
    for (int i = 0; i < len; i++) {
        if (i > r[i])
            swap(a[i], a[r[i]]);
    }
    for (int i = 2; i <= len; i <<= 1) {
        int gn = power(flag == 1 ? G : Gi, (MOD - 1) / i);
        for (int j = 0; j < len; j += i) {
            int g = 1;
            for (int k = j; k < j + (i >> 1); k++) {
                int u = a[k];
                int t = 1ll * a[k + (i >> 1)] * g % MOD;
                a[k] = (u + t) % MOD;
                a[k + (i >> 1)] = (u - t + MOD) % MOD;
                g = 1ll * g * gn % MOD;
            }
        }
    }
    if (flag == -1) {
        int len_inv = inv(len);
        for (int i = 0; i < len; i++)
            a[i] = 1ll * a[i] * len_inv % MOD;
    }
}

void getinv(int *a, int *res, int n) {
    static int tmp[N];
    if (n == 1) {
        res[0] = inv(a[0]);
        return;
    }
    getinv(a, res, (n + 1) >> 1);
    int len = 1, cnt = 0;
    while (len < (n << 1)) {
        len <<= 1;
        cnt++;
    }
    clm(tmp);
    for (int i = 0; i < n; i++)
        tmp[i] = a[i];
    for (int i = 0; i < len; i++)
        r[i] = (r[i >> 1] >> 1) | ((i & 1) << (cnt - 1));
    NTT(res, len, 1);
    NTT(tmp, len, 1);
    for (int i = 0; i < len; i++)
        res[i] = 1ll * (2ll - 1ll * res[i] * tmp[i] % MOD + MOD) % MOD * res[i] % MOD;
    NTT(res, len, -1);
    for (int i = n; i < len; i++)
        res[i] = 0;
}

void drv(int *a, int *b, int len) {
    for (int i = 1; i < len; i++)
        b[i - 1] = 1ll * a[i] * i % MOD;
    b[len - 1] = 0;
}

void itg(int *a, int *b, int len) {
    for (int i = 1; i < len; i++)
        b[i] = 1ll * a[i - 1] * inv(i) % MOD;
    b[0] = 0;
}


void mul(int *a, int *b, int *res, int n, int m) {
    static int f[N], g[N];
    clm(f);
    clm(g);
    clm(res);
    int len = 1, cnt = 0;
    while (len < (n + m)) {
        len <<= 1;
        cnt++;
    }
    for (int i = 0; i < len; i++)
        r[i] = (r[i >> 1] >> 1) | ((i & 1) << (cnt - 1));
    for (int i = 0; i < n; i++)
        f[i] = a[i];
    for (int i = 0; i < m; i++)
        g[i] = b[i];
    NTT(f, len, 1);
    NTT(g, len, 1);
    for (int i = 0; i < len; i++)
        res[i] = 1ll * f[i] * g[i] % MOD;
    NTT(res, len, -1);
}

void getln(int *a, int *res, int len) {
    static int tmp[N], da[N], inva[N];
    clm(tmp);
    clm(da);
    clm(inva);
    getinv(a, inva, len);
    drv(a, da, len);
    mul(da, inva, tmp, len, len);
    itg(tmp, res, len);
}

void getexp(int *a, int *res, int n) {
    static int f[N], g[N];
    if (n == 1) {
        res[0] = 1;
        return;
    }
    getexp(a, res, (n + 1) >> 1);
    int len = 1, cnt = 0;
    while (len < (n << 1)) {
        len <<= 1;
        cnt++;
    }
    clm(f);
    clm(g);
    for (int i = 0; i < n; i++)
        g[i] = a[i];
    getln(res, f, n);
    for (int i = 0; i < len; i++)
        r[i] = (r[i >> 1] >> 1) | ((i & 1) << (cnt - 1));
    NTT(res, len, 1);
    NTT(f, len, 1);
    NTT(g, len, 1);
    for (int i = 0; i < len; i++)
        res[i] = 1ll * (1ll - f[i] + g[i] + MOD) % MOD * res[i] % MOD;
    NTT(res, len, -1);
    for (int i = n; i < len; i++)
        res[i] = 0;
}

int n,a[N],b[N];

int main() {
    freopen("data.in", "r", stdin);
    //freopen("P4726.out","w",stdout);
    Gi = inv(G);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int len = 1, cnt = 0;
    while (len < n) {
        len <<= 1;
        cnt++;
    }
    getexp(a, b, len);
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}
