//File: P2746.cpp
//Author: yanyanlongxia
//Date: 2020/8/8
//
#include <bits/stdc++.h>

using namespace std;
int n,head[10000],nxt[10000],ver[10000],dfn[10000],low[10000],bel[10000],sccn,dft,tot,din[10000],dout[10000];
stack<int>st;
bool in[10000];
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
            low[x]=min(low[x],low[y]);//代码写了好几遍了，不想写了……
        } else{
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
    int x,ans1=0,ans2=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        while (x!=0)
        {
            add(i,x);
            scanf("%d",&x);
        }
    }
    for(int i=1;i<=n;i++)
        if(!dfn[i])
            tarjan(i);
    for(int i=1;i<=n;i++)
        for(int j=head[i];j;j=nxt[j])
        {
            if(bel[i]!=bel[ver[j]])
            {
                din[bel[ver[j]]]++;
                dout[bel[i]]++;
            }
        }
    for(int i=1;i<=sccn;i++)
    {
        if(din[i]==0)
            ans1++;
        if(dout[i]==0)
            ans2++;
    }
    if(sccn==1)
        printf("%d\n%d\n",1,0);
    else
        printf("%d\n%d\n",ans1,max(ans1,ans2));
    return 0;
}