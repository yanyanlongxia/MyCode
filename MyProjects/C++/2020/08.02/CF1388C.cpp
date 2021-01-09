//
// Created by admin on 2020/8/2.
//
#include <bits/stdc++.h>
using namespace std;
vector<int>gr[200005];
bool access=true;
int p[200005],h[200005],a[200005],g[200005];
void dfs(int v, int fa)
{
    a[v]=p[v];
    int sum_g = 0;
    for (int i=0;i<gr[v].size();i++)
    {
        int to=gr[v][i];
        if(to==fa)
            continue;
        dfs(to, v);
        sum_g += g[to];
        a[v] += a[to];
    }
    if((a[v]+h[v])%2!=0)
        access = false;
    g[v]=(a[v]+h[v])/2;
    if(g[v]<0||g[v]>a[v])
        access = false;
    if(sum_g>g[v])
        access = false;
}

int main()
{
    int q;
    scanf("%d",&q);
    while (q--)
    {
        int n, m; 
        scanf("%d%d",&n,&m);
        for (int i=1;i<=n;i++)
            scanf("%d",&p[i]);
        for (int i=1;i<=n;i++)
            scanf("%d",&h[i]);
        for (int i=1;i<=n-1;i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            gr[x].push_back(y);
            gr[y].push_back(x);
        }
        dfs(1,1);
        if(access)
            printf("YES\n");
        else 
            printf("NO\n");
        access = true;
        for (int i=1;i<=n;i++)
            gr[i].clear();
    }
}
