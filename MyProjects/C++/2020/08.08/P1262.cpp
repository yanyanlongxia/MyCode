//File: P1262.cpp
//Author: yanyanlongxia
//Date: 2020/8/8
//
#include <bits/stdc++.h>

using namespace std;
int n,m,r,cost[10000],head[10000],nxt[10000],ver[10000],dfn[10000],low[10000],dft,tot,mc[10000],sccn,bel[10000],d[10000],ans;
stack<int>st;
bool in[10000];
void add(int x,int y)//链式前向星
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void tarjan(int x)
{
    dfn[x]=low[x]=++dft;
    st.push(x);
    in[x]=true;
    for(int i=head[x];i;i=nxt[i])//遍历相邻点
    {
        int y=ver[i];
        if(!dfn[y])//还没被搜过
        {
            tarjan(y);
            low[x]=min(low[x],low[y]);//传递追溯值
        } else
            if(in[y])
                low[x]=min(low[x],dfn[y]);//神奇的未解之谜
    }
    if(low[x]==dfn[x])
    {
        int y;
        sccn++;
        do
        {
            y=st.top();
            st.pop();in[y]=false;
            mc[sccn]=min(mc[sccn],cost[y]);//最小花费
            bel[y]=sccn;
        }while(x!=y);
    }
}
int main() {
    int x, y;
    memset(cost, 0x3f3f3f3f, sizeof(cost));
    memset(mc, 0x3f3f3f3f, sizeof(mc));
    scanf("%d", &n);
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d%d", &x, &y);
        cost[x] = y;
    }
    //for(int i=1;i<=n;i++)
    //    printf("%d\n",cost[i]);
    scanf("%d", &r);
    for (int i = 1; i <= r; i++) {
        scanf("%d%d", &x, &y);
        add(x, y);
    }
    for (int i = 1; i <= n; i++)
        if (!dfn[i] && cost[i] != 0x3f3f3f3f)
            tarjan(i);
    //for(int i=1;i<=n;i++)
    //    printf("%d\n",dfn[i]);
    //for(int i=1;i<=n;i++)
    //    printf("%d\n",bel[i]);
    for (int i = 1; i <= n; i++)
        if (!dfn[i]) {
            puts("NO");
            printf("%d\n", i);
            return 0;
        }
    for (int i = 1; i <= n; i++)
        for (int j = head[i]; j; j = nxt[j]) {
            if (bel[i] != bel[ver[j]])
                d[bel[ver[j]]]++;//其实这是入度
        }
    for (int i = 1; i <= sccn; i++)
        if (d[i] == 0)
            ans += mc[i];
    puts("YES");
    printf("%d\n", ans);
    return 0;
}