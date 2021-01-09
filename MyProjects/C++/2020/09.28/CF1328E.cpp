//File: CF1328E.cpp
//Author: yanyanlongxia
//Date: 2020/9/30
//
#include <bits/stdc++.h>

using namespace std;
int n,m,fat[1000005],dfn[1000005],dft,sz[1000005],depth[1000005];
vector<int>son[1000005];
int tmp[1000005];
void dfs(int x,int fa)
{
    depth[x]=depth[fa]+1;
    fat[x]=fa;
    dfn[x]=++dft;
    sz[x]=1;
    for (int i=0;i<son[x].size();i++)
    {
        int y=son[x][i];
        if (y==fa)
            continue;
        dfs(y,x);
        sz[x]+=sz[y];
    }
}
bool bein(int x,int y)
{
    if (x==0)
        return true;
    return dfn[y]>=dfn[x] && dfn[y]<=dfn[x]+sz[x]-1;
}
bool cmp(int x,int y)
{
    return depth[x]<depth[y];
}
int main() {
    int x, y, k;
    scanf("%d%d", &n, &m);
    for (int i = 1; i < n; i++) {
        scanf("%d%d", &x, &y);
        son[x].push_back(y);
        son[y].push_back(x);
    }
    dfs(1, 0);
    bool flag;
    for (int i = 1; i <= m; i++) {
        flag = true;
        scanf("%d",&k);
        for(int j=1;j<=k;j++)
        {
            scanf("%d",&tmp[j]);
            tmp[j]=fat[tmp[j]];
        }
        sort(tmp+1,tmp+1+k,cmp);
        for (int j=1;j<k;j++)
            if (!bein(tmp[j],tmp[j+1]))
                flag=false;
        flag ? puts("YES") : puts("NO");
    }
    return 0;
}
