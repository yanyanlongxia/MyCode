//File: P4162.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//[SCOI2009]最长距离
#include <bits/stdc++.h>
using namespace std;
const int dx[4]={-1,0,0,1},dy[4]={0,1,-1,0};
int n,m,step[1000][1000],tt;
bool is[50][50];
char s[50];
double ans=1e-9;
int node(int a,int b) {
    return (a - 1) * m + b;
}
void bfs(int rx,int ry) {
    int root = node(rx, ry);
    deque< pair<int, int> > q;
    if (is[rx][ry])
        step[root][root] = 1;
    else
        step[root][root] = 0;
    q.push_front(make_pair(rx, ry));
    while (!q.empty()) {
        pair<int, int> t = q.front();
        q.pop_front();
        int now = node(t.first, t.second);
        for (int i = 0; i < 4; i++) {
            int x = t.first + dx[i], y = t.second + dy[i], nxt;
            nxt = node(x, y);
            if (x < 1 || y < 1 || x > n || y > m)
                continue;
            if (step[root][nxt] != -1)
                continue;
            if (is[x][y]) {
                step[root][nxt] = step[root][now] + 1;
                q.push_back(make_pair(x, y));
            } else {
                step[root][nxt] = step[root][now];
                q.push_front(make_pair(x, y));
            }
        }
    }
}
double calc(int a,int b,int x,int y) {
    return sqrt((a - x) * (a - x) + (b - y) * (b - y));
}
int main() {
    memset(step, -1, sizeof(step));
    scanf("%d%d%d", &n, &m, &tt);
    for (int i = 1; i <= n; i++) {
        scanf("%s", (s + 1));
        for (int j = 1; j <= m; j++)
            is[i][j] = s[j] - '0';
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            bfs(i, j);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            for (int x=1; x <= n; x++)
                for (int y = 1; y <= m; y++)
                    if (step[node(i, j)][node(x, y)] <= tt)
                        ans = max(ans, calc(i, j, x, y));
    printf("%.6lf", ans);
    return 0;
}