#include <cstdio>
#include <cstring>
using namespace std;
struct asd {
    int x, y;
}to[200005],q[200005];
const int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
int hea,tai,n,m,x1,x2,y1,y2,ans,head[105][105],next[200005];
bool v[105][105],l[105][105];
int main() {
    scanf("%d%d", &n, &m);
    memset(head, -1, sizeof(head));
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        next[i] = head[x1][y1];
        head[x1][y1] = i;
        to[i].x = x2;
        to[i].y = y2;
    }
    memset(v, false, sizeof(v));
    memset(l, false, sizeof(l));
    v[1][1] = true;
    l[1][1] = true;
    q[tai].x = 1;
    q[tai].y = 1;
    tai++;
    while (hea < tai) {
        int x, y, k;
        x = q[hea].x;
        y = q[hea].y;
        hea++;
        k = head[x][y];
        while (k != -1) {
            l[to[k].x][to[k].y] = true;
            for (int i = 0; i <= 3; i++) {
                if (to[k].y + dy[i] <= n) {
                    if (v[to[k].x + dx[i]][to[k].y + dy[i]]) {
                        if (to[k].y + dy[i] <= 0 || to[k].x + dx[i] <= 0 || to[k].x + dx[i] > n ||
                            v[to[k].x][to[k].y])
                            continue;
                        q[tai].x = to[k].x;
                        q[tai].y = to[k].y;
                        v[to[k].x][to[k].y] = true;
                        tai++;
                    }
                }
            }
            k = next[k];
        }
        for (int i = 0; i <= 3; i++) {
            if (v[x + dx[i]][y + dy[i]]) {
                continue;
            } else {
                if (l[x + dx[i]][y + dy[i]]) {
                    if (y + dy[i] > 0 && y + dy[i] <= n) {
                        if (!(x + dx[i] > 0 && x + dx[i] <= n))
                            continue;
                    } else {
                        continue;
                    }
                } else {
                    continue;
                }
            }
            q[tai].x = x + dx[i];
            q[tai].y = y + dy[i];
            tai++;
            v[x + dx[i]][y + dy[i]] = true;
        }
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (l[i][j]) ans++;
    printf("%d", ans);
    return 0;
}