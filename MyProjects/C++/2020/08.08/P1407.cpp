//File: P1407.cpp
//Author: yanyanlongxia
//Date: 2020/8/9
//[国家集训队]稳定婚姻
#include <bits/stdc++.h>

using namespace std;
int n,m,dfn[100000],low[100000],head[100000],nxt[100000],ver[100000],sccn,tot,dft,bel[100000],b[100000],g[100000];
bool in[100000];
stack<int>st;
map<string,int>to;
void add(int x,int y)
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
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(!dfn[y])
        {
            tarjan(y);
            low[x]=min(low[x],low[y]);
        } else{
            if(in[y])
                low[x]=min(low[x],dfn[y]);
        }
    }
    if(dfn[x]==low[x])
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
    scanf("%d",&n);
    string x,y;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        b[i]=to[x]=++cnt;
        g[i]=to[y]=++cnt;
        add(to[x],to[y]);
    }
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        add(to[y],to[x]);
    }
    for(int i=1;i<=cnt;i++)
        if(!dfn[i])
            tarjan(i);
    for(int i=1;i<=n;i++)
        if(bel[b[i]]==bel[g[i]])
            puts("Unsafe");
        else
            puts("Safe");
    return 0;
}