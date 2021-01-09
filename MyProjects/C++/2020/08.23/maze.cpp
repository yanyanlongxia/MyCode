//File: maze.cpp
//Author: yanyanlongxia
//Date: 2020/9/5
//
#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
int n,k,m,s,dist[500005][25],tot,nxt[1000005],ver[1000005],head[1000005],edge[1000005],ans=INF;
bool is[1000005],vis[500005][25],isp[1000005];
struct cons {
    int now, dist, peo;

    bool operator>(const cons b) const {
        return dist > b.dist;
    }

    bool operator<(const cons b) const {
        return dist < b.dist;
    }

    cons() {
        now = dist = peo = 0;
    }
};
priority_queue<cons>q;
void add(int x,int y,int z) {
    ver[++tot] = y;
    nxt[tot] = head[x];
    edge[tot] = z;
    head[x] = tot;
}
cons make_cons(int x,int y,int z) {
    cons res;
    res.now = x;
    res.dist = y;
    res.peo = z;
    return res;
}
inline void exdijk() {
    memset(dist, INF, sizeof(dist));
    memset(vis, 0, sizeof(vis));
    if (isp[s]) {
        dist[s][2] = 0;
        q.push(make_cons(s, 0, 2));
    }
    dist[s][1] = 0;
    q.push(make_cons(s, 0, 1));
    while (!q.empty()) {
        cons now = q.top();
        q.pop();
        int x = now.now, p = now.peo;
        if (vis[x][p])
            continue;
        vis[x][p] = true;
        for (int i = head[x]; i; i = nxt[i]) {
            int y = ver[i], z = edge[i];
            if (isp[y]) {
                if (dist[x][p] + p * z < dist[y][p + 1]) {
                    dist[y][p + 1] = dist[x][p] + p * z;
                    q.push(make_cons(y, -p * z, p + 1));
                }
            }
            if (dist[x][p] + p * z < dist[y][p]) {
                dist[y][p] = dist[x][p] + p * z;
                q.push(make_cons(y, -p * z, p));
            }
        }
    }
}
int main() {
    freopen("maze.in","r",stdin);
    freopen("maze.out","w",stdout);
    int x, y, z;
    scanf("%d%d%d%d", &n, &m, &k, &s);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &is[i]);
    }
    for (int i = 1; i <= m; i++) {
        scanf("%d%d%d", &x, &y, &z);
        add(x, y, z);
        add(y, x, z);
    }
    for (int i = 1; i <= k; i++) {
        scanf("%d", &x);
        isp[x] = true;
    }
    exdijk();
    for (int i = 1; i <= n; i++)
        if (is[i])
            ans = min(ans, dist[i][k + 1]);
    printf("%d\n", ans);
    return 0;
}
