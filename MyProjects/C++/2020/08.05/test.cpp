//File: test.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//
#include <bits/stdc++.h>
using namespace std;
const int dx[4]={-1,0,0,1},dy[4]={0,1,-1,0};
int t,n,m,step[1005][1050];
char s[1005][1005];
deque< pair<int,int> >q;
int main() {
    scanf("%d", &t);
    while (t--) {
        memset(step, 0x3f3f3f3f, sizeof(step));
        q.clear();
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++)
            scanf("%s", (s[i] + 1));
        step[1][1] = 0;
        q.push_front(make_pair(1, 1));
        while (!q.empty()) {
            pair<int, int> now = q.front();
            q.pop_front();
            for (int i = 0; i < 4; i++) {
                int x = now.first + dx[i], y = now.second + dy[i];
                if (x < 1 || y < 1 || x > n || y > m)
                    continue;
                if (s[now.first][now.second] == s[x][y]&&step[now.first][now.second] < step[x][y]) {
                    step[x][y] = step[now.first][now.second];
                    q.push_front(make_pair(x, y));
                } else {
                    if(step[now.first][now.second]+1 < step[x][y])
                    {
                        step[x][y] = step[now.first][now.second] + 1;
                        q.push_back(make_pair(x, y));
                    }

                }
            }
        }
        printf("%d\n", step[n][m]);
    }
    return 0;
}