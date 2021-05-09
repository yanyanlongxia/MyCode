//Created by yanyanlongxia on 2021/5/8
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e6;
int n,m,s,cnt,ver[N],nxt[N],edge[N],head[N],dis[N];
bool v[N];
priority_queue<pair<int,int> >q;
inline void add(int x,int y,int z){
    ver[++cnt]=y;
    nxt[cnt]=head[x];
    head[x]=cnt;
    edge[cnt]=z;
}
int main() {
    freopen("data.in", "r", stdin);
    //freopen("P4779.out","w",stdout);
    scanf("%d%d%d", &n, &m, &s);
    int x, y, z;
    for (int i = 1; i <= m; i++) {
        scanf("%d%d%d", &x, &y, &z);
        add(x, y, z);
    }
    infm(dis);
    dis[s] = 0;
    q.push(make_pair(0, s));
    while (!q.empty()) {
        x = q.top().second;
        q.pop();
        if (v[x])
            continue;
        v[x] = true;
        for (int i = head[x]; i; i = nxt[i]) {
            y = ver[i];
            z = edge[i];
            if (dis[x] + z < dis[y]) {
                dis[y] = dis[x] + z;
                q.push(make_pair(-dis[y], y));
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (dis[i] == INF)
            printf("2147483647 ");
        else
            printf("%d ", dis[i]);
    }
    puts("");
    return 0;
}
