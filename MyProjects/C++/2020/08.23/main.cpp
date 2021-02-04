#include <bits/stdc++.h>
#define N 1000100
#define ll long long
#define ui unsigned int
using namespace std;
ui S;
inline ui get(ui x) {
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    return S = x;
}
inline int read(){
    int x = 0, s = 1;
    char c = getchar();
    while(!isdigit(c)){
        if(c == '-')s = -1;
        c = getchar();
    }
    while(isdigit(c)){
        x = (x << 1) + (x << 3) + (c ^ '0');
        c = getchar();
    }
    return x * s;
}
int root;
int dfn[N], rev[N], id = 0;
int fa[N], son[N];
int deth[N], siz[N], top[N];
struct node{
    int u, v;
    int next;
} t[N << 1];
int f[N];
int bian = 0;
inline void add(int u, int v) {
    t[++bian] = (node) {u, v, f[u]};
    f[u] = bian;
    t[++bian] = (node) {v, u, f[v]};
    f[v] = bian;
}
void dfs1(int now) {
    siz[now] = 1;
    for (int i = f[now]; i; i = t[i].next) {
        int v = t[i].v, u = t[i].u;
        if (v != fa[u]) {
            fa[v] = u;
            deth[v] = deth[u] + 1;
            dfs1(v);
            siz[u] += siz[v];
            if (siz[son[u]] < siz[v]) {
                son[u] = v;
            }
        }
    }
}
void dfs2(int now) {
    dfn[now] = ++id;
    rev[id] = now;
    if (!son[now])return;
    top[son[now]] = top[now];
    dfs2(son[now]);
    for (int i = f[now]; i; i = t[i].next) {
        int v = t[i].v, u = t[i].u;
        if (v != son[u] && v != fa[u]) {
            top[v] = v;
            dfs2(v);
        }
    }
}
int jump(int x, int k) {
    int temp = deth[x] - k;
    while (deth[top[x]] > temp) x = fa[top[x]];
    temp = deth[x] - temp;
    return rev[dfn[x] - temp];
}
int main() {
    int n = read(), q = read();
    cin >> S;
    for (int i = 1; i <= n; i++) {
        fa[i] = read();
        if (!fa[i]) root = i;
        else add(fa[i], i);
    }
    deth[root] = 1;
    dfs1(root);
    top[root] = root;
    dfs2(root);
    ll ltans = 0, ans = 0;
    for (int i = 1; i <= q; i++) {
        int x = (get(S) ^ ltans) % n + 1;
        int k = (get(S) ^ ltans) % deth[x];
        ltans = jump(x, k);
        ans ^= (ll) i * ltans;
    }
    printf("%lld\n", ans);
    return 0;
}