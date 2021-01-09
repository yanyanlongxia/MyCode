//File: P2962.cpp
//Author: yanyanlongxia
//Date: 2020/9/24
//[USACO09NOV]Lights G
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,maxd;
unordered_map<int,int>h;
bool found;
int con[10005];
void dfs(int x,int step,int flag)
{
    if (h[x]+flag==3)
    {
        found=true;
        return;
    }
    h[x]=flag;
    if (step==maxd)
        return;
    for (int i=1;i<=n;i++)
    {
        dfs(x^con[i],step+1,flag);
        if (found)
            return;
    }
}
signed main() {
    int x,y;
    scanf("%lld%lld",&n,&m);
    int st=0,ed=0;
    for (int i=1;i<=n;i++)
        ed|=1ll<<i;
    for (int i=1;i<=n;i++)
        con[i]=1ll<<i;
    for (int i=1;i<=m;i++)
    {
        scanf("%lld%lld",&x,&y);
        con[x]|=1ll<<y;
        con[y]|=1ll<<x;
    }
    while (true)
    {
        dfs(st,0,1);
        if (found)
        {
            printf("%lld\n",maxd*2-1);
            break;
        }
        dfs(ed,0,2);
        if (found)
        {
            printf("%lld\n",maxd*2);
            break;
        }
        maxd++;
    }
    return 0;
}
