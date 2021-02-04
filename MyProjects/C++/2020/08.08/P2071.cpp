//File: P2071.cpp
//Author: yanyanlongxia
//Date: 2020/8/10
//
#include <bits/stdc++.h>

using namespace std;
int n,tot,head[10005],nxt[10005],ver[10005],ans;
bool vis[10005];
pair<int,int>match[10005];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
bool find(int x)
{
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(!vis[y])
        {
            vis[y]=true;
            if(!match[y].first || find(match[y].first))
            {
                match[y].first=x;
                return true;
            } else
                if(!match[y].second || find(match[y].second))
                {
                    match[y].second=x;
                    return true;
                }
        }
    }
    return false;
}
int main() {
    int x, y;
    scanf("%d", &n);
    for (int i = 1; i <= n * 2; ++i) {
        scanf("%d%d", &x, &y);
        add(i, x);
        add(i, y);
    }
    for (int i = 1; i <= n * 2; i++) {
        memset(vis, 0, sizeof(vis));
        if (find(i))
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}