//File: P3119.cpp
//Author: yanyanlongxia
//Date: 2020/8/9
//[USACO15JAN]Grass Cownoisseur G
#include <bits/stdc++.h>

using namespace std;
int n,m,tot,dft,ntot,head[100005],nxt[100005],ver[100005],dfn[100005],low[100005],nhead[100005],nver[100005],nnxt[100005],ans,sccn,bel[100005],sz[100005];
stack<int>st;
bool in[100005];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void nadd(int x,int y)
{
    nver[++ntot]=y;
    nnxt[ntot]=nhead[x];
    nhead[x]=ntot;
}
void tarjan(int x) {
    dfn[x] = low[x] = ++dft;
    st.push(x);
    in[x] = true;
    for (int i = head[x]; i; i = nxt[i]) {
        int y = ver[i];
        if (!dfn[y]) {
            tarjan(y);
            low[x] = min(low[x], low[y]);
        } else {
            if (in[y])
                low[x] = min(low[x], dfn[y]);
        }
    }
    if (low[x] == dfn[x]) {
        int y;
        sccn++;
        do {
            y = st.top();
            st.pop();
            in[y] = false;
            bel[y] = sccn;
            sz[sccn]++;
        } while (x != y);
    }
}
int main() {
    int x,y;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&y);
        add(x,y);
    }
    for(int i=1;i<=n;i++)
        if(!dfn[i])
            tarjan(i);
    for (int i = 1; i <= n; ++i) {
        printf("%d ",bel[i]);
    }
    puts("");
    for (int i = 1; i <= n; ++i) {
        for(int j=head[i];j;j=nxt[j])
            if(bel[i]!=bel[ver[j]])
            {
                ans=max(ans,sz[bel[i]]+sz[bel[ver[j]]]);
            }
    }
    printf("%d\n",ans);
    return 0;
}