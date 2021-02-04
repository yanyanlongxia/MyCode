//
// Created by admin on 2020/7/22.
//
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
const int max_edge = 1e6+5;
struct Edge
{
    int to, next;
    bool cut;
}edge[max_edge];
int tot, head[maxn];
int id, dfn[maxn], low[maxn];
int num;
void adde(int u, int v)
{
    edge[tot].to = v;
    edge[tot].next = head[u];
    edge[tot].cut = false;
    head[u] = tot++;
}
void tarjan(int u, int f)
{
    dfn[u] = low[u] = ++id;
    for(int i = head[u]; i; i = edge[i].next)
    {
        int v = edge[i].to;
        if(v == f) continue;
        if(!dfn[v])
        {
            tarjan(v, u);
            low[u] = min(low[u], low[v]);
            //桥>，割点>=，可证明，略
            if(low[v]>dfn[u])
            {
                //由于链式前向星是连着存的,所以就用 ^ 得到所用有向边代替的另一个边 (0^1=1, 1^1=0)
                edge[i].cut = edge[i^1].cut = true;
                num++;
            }
        }
        else low[u] = min(low[u], dfn[v]);
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        id = num = tot = 0;
        memset(head, 0, sizeof(head));
        memset(dfn, 0, sizeof(dfn));
        memset(low, 0, sizeof(low));
        int u, m, v;
        for(int i = 1; i<=n; i++)
        {
            scanf("%d (%d)",&u,&m);
            for(int j = 1; j<=m; j++)
            {
                scanf("%d",&v);
                adde(u, v);
                adde(v, u);
            }
        }
        for(int i = 0; i<n; i++)
            if(!dfn[i])
                tarjan(i, i);
        vector<pair<int, int> >a;
        for(int u = 0; u<n; u++)
            for(int i = head[u]; i; i = edge[i].next)
                if(edge[i].cut && u < edge[i].to)
                    a.push_back(make_pair(u, edge[i].to));
        sort(a.begin(), a.end());
        printf("%d critical links\n", num);
        for(int i = 0; i<a.size(); i++)
            printf("%d - %d\n", a[i].first, a[i].second);
        printf("\n");
    }
}