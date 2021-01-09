//File: P2002.cpp
//Author: yanyanlongxia
//Date: 2020/8/9
//
#include <bits/stdc++.h>

using namespace std;
int n,m,dfn[500005],dft,ans,low[500005],head[500005],nxt[500005],ver[500005],din[500005],sccn,tot,bel[500005];
stack<int>st;
bool in[500005];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void tarjan(int x)
{
    dfn[x]=low[x]=++dft;
    st.push(x);in[x]=true;
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(!dfn[y])
        {
            tarjan(y);
            low[x]=min(low[x],low[y]);
        } else
        {
            if(in[y])
                low[x]=min(low[x],dfn[y]);
        }
    }
    if(low[x]==dfn[x])
    {
        int y;
        sccn++;
        do {
            y=st.top();
            st.pop();in[y]=false;
            bel[y]=sccn;
        }while (x!=y);
    }
}
int main() {
    int x,y;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d",&x,&y);
        add(x,y);
    }
    for(int i=1;i<=n;i++)
        if(!dfn[i])
            tarjan(i);
    for(int i=1;i<=n;i++)
        for(int j=head[i];j;j=nxt[j])
        {
            if(bel[i]!=bel[ver[j]])
                din[bel[ver[j]]]++;
        }
    for(int i=1;i<=sccn;i++)
        if(din[i]==0)
            ans++;
    printf("%d\n",ans);
    return 0;
}