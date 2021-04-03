#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
const int inf = 1 << 29, N = 2010, M = 20010;
int head[N], ver[M], edge[M], Next[M], v[N], incf[N], pre[N];
int n, m, s, t, tot, maxflow;

void add(int x, int y, int z) {
    ver[++tot] = y, edge[tot] = z, Next[tot] = head[x], head[x] = tot;
    ver[++tot] = x, edge[tot] = 0, Next[tot] = head[y], head[y] = tot;
}

bool bfs() {
    memset(v, 0, sizeof(v));
    queue<int> q;
    q.push(s); v[s] = 1;
    incf[s] = inf; // 增广路上各边的最小剩余容量
    while (q.size()) {
        int x = q.front(); q.pop();
        for (int i = head[x]; i; i = Next[i])
            if (edge[i]) {
                int y = ver[i];
                if (v[y]) continue;
                incf[y] = min(incf[x], edge[i]);
                pre[y] = i; // 记录前驱，便于找到最长路的实际方案
                q.push(y), v[y] = 1;
                if (y == t) return 1;
            }
    }
    return 0;
}

void update() { // 更新增广路及其反向边的剩余容量
    int x = t;
    while (x != s) {
        int i = pre[x];
        edge[i] -= incf[t];
        edge[i ^ 1] += incf[t]; // 利用“成对存储”的xor 1技巧
        x = ver[i ^ 1];
    }
    maxflow += incf[t];
}

int main() {
    freopen("data.in","r",stdin);
    cin >> n >> m>>s>>t;
    memset(head, 0, sizeof(head));
    tot = 1;
    maxflow = 0;
    for (int i = 1; i <= m; i++) {
        int x, y, c;
        scanf("%d%d%d", &x, &y, &c);
        add(x, y, c);
    }
    while (bfs()) update();
    cout << maxflow << endl;
}
