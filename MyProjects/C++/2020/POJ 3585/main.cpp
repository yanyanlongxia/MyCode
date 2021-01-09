#include<bits/stdc++.h>
#define LL long long int
#define redge(u) for (int k = h[u],to; k; k = ed[k].nxt)
#define rep(i,n) for (int i = 1; i <= (n); i++)
#define cls(s) memset(s,0,sizeof(s))
using namespace std;
const int maxn = 200005,maxm = 400005,INF = 1000000000;
inline int read(){
    int out = 0,flag = 1; char c = getchar();
    while (c < 48 || c > 57){if (c == '-') flag = -1; c = getchar();}
    while (c >= 48 && c <= 57){out = (out << 3) + (out << 1) + c - 48; c = getchar();}
    return out * flag;
}
int h[maxn],ne = 2,de[maxn];
struct edge
{
    int to,nxt,w;
}ed[maxm];
inline void build(int u,int v,int w)
{
    ed[ne] = (edge){v,h[u],w}; h[u] = ne++;
    ed[ne] = (edge){u,h[v],w}; h[v] = ne++;
    de[u]++; de[v]++;
}
int n,fa[maxn];
int d[maxn],f[maxn],g[maxn],ans;
void dfs1(int u)
{
    f[u] = 0;
    if (de[u] == 1 && u != 1) return;
    redge(u) if ((to = ed[k].to) != fa[u])
    {
            fa[to] = u; d[to] = ed[k].w; dfs1(to);
            if (de[to] == 1) f[u] += ed[k].w;
            else f[u] += min(ed[k].w,f[to]);
    }
}
void dfs2(int u)
{
    g[u] = f[u];
    if (fa[u])
    {
        if (de[fa[u]] == 1) g[u] += d[u];
        else g[u] += min(d[u],g[fa[u]] - min(d[u],f[u]));
    }
    ans = max(ans,g[u]);
    redge(u) if ((to = ed[k].to) != fa[u])
        dfs2(to);
}
int main()
{
    int T = read();
    while (T--)
    {
        ne = 2; cls(h); cls(de); ans = 0;
        n = read(); int a,b,w;
        for (int i = 1; i < n; i++)
        {
            a = read(); b = read(); w = read();
            build(a,b,w);
        }
        dfs1(1);
        dfs2(1);
        printf("%d\n",ans);
    }
    return 0;
}