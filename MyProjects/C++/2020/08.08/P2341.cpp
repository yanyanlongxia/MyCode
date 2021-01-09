//File: P2341.cpp
//Author: yanyanlongxia
//Date: 2020/8/8
//[USACO03FALL][HAOI2006]受欢迎的牛 G
#include <bits/stdc++.h>

using namespace std;
int n,m,tot,dfn[100000],low[100000],dft,sccn,ans,bel[100000],d[100000];
bool in[100000];
stack<int>st;
vector<int>scc[100000];
int head[100000],nxt[100000],ver[100000];
void add(int x,int y)//链式前向星
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void tarjan(int x)
{

    dfn[x]=++dft;
    low[x]=dft;
    st.push(x);
    in[x]=true;
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(!dfn[y])
        {
            tarjan(y);
            low[x]=min(low[x],low[y]);
        } else
            if(in[y])
                low[x]=min(low[x],dfn[y]);
    }
    if(dfn[x]==low[x])
    {
        int y;
        sccn++;
        do
        {
            y=st.top();
            st.pop();
            in[y]=false;
            bel[y]=sccn;
            scc[sccn].push_back(y);
        }while (x!=y);
    }
}
int main() {
    int x,y;
    scanf("%d",&n);
    scanf("%d",&m);
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d",&x,&y);
        add(x,y);
    }
    for(int i=1;i<=n;i++)
        if(!dfn[i])
            tarjan(i);
    for(int i=1;i<=n;i++)
        for(int j=head[i];j;j=nxt[j])
            if(bel[i]!=bel[ver[j]])
                d[bel[i]]++;
    //for(int i=1;i<=sccn;i++)
    //{
    //    for(int j=0;j<scc[i].size();j++)
    //        printf("%d ",scc[i][j]);
    //    puts("");
    //}
    //for(int i=1;i<=sccn;i++)
    //    printf("%d ",d[i]);
    //puts("");
    int flag=0;
    for(int i=1;i<=sccn;i++)
        if(d[i]==0)
        {

            if(flag==0)
            {
                ans=scc[i].size();
                flag++;
            }
            else if(flag==1)
            {
                printf("0\n");
                return 0;
            }
        }
    printf("%d\n",ans);
    return 0;
}