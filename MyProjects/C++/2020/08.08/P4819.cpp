//File: P4819.cpp
//Author: yanyanlongxia
//Date: 2020/8/9
//[中山市选]杀人游戏
#include <bits/stdc++.h>

using namespace std;
int n,m,dfn[300005],low[300005],head[300005],nxt[300005],ver[300005],bel[300005],sz[300005],sccn,tot,dft,din[300005];
stack<int>st;
bool in[300005];
double per;
int nver[300005],nnxt[300005],nhead[300005],ntot;//缩点后的新图
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void new_add(int x,int y)
{
    nver[++ntot]=y;
    nnxt[ntot]=nhead[x];
    nhead[x]=ntot;
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
        }
        else
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
            sz[sccn]++;//强连通分量的大小
        }while (x!=y);
    }
}
int main() {
    int x, y;
    scanf("%d%d", &n, &m);
    per = (double) 1 / n;//注意这里的1前面要加double
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d", &x, &y);
        add(x, y);
    }
    for (int i = 1; i <= n; i++)
        if (!dfn[i])
            tarjan(i);
    for (int i = 1; i <= n; i++)
        for (int j = head[i]; j; j = nxt[j]) {
            if (bel[i] != bel[ver[j]]) {
                new_add(bel[i], bel[ver[j]]);//建立缩点图
                din[bel[ver[j]]]++;//统计入度
            }
        }
    int cnt = 0;
    bool p = 0;
    for (int i = 1; i <= sccn; ++i) {
        if (din[i] == 0) {
            cnt++;//统计入度为0的点
            if(sz[i]==1)//大小为1
            {
                int ct1=0;
                for(int j=nhead[i];j;j=nnxt[j])
                {
                    int k=nver[j];
                    if(din[k]==1)//入度是否为1
                        ct1++;
                }
                if (ct1==0)
                    p=1;
            }
        }
    }
    if (p)
        cnt--;
    double ans = (double)cnt * per;
    ans = (double)1 - ans;
    printf("%.6lf", ans);
    return 0;
}