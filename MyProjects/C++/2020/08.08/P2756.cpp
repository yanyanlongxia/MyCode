//File: P2756.cpp
//Author: yanyanlongxia
//Date: 2020/8/10
//
#include <bits/stdc++.h>

using namespace std;
int n,m,match[10000],head[10000],nxt[10000],ver[10000],ans,tot;
bool vis[10000];
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
bool find(int x)
{
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(!vis[y])
        {
            vis[y]=true;
            if(!match[y] || find(match[y]))
            {
                match[y]=x;
                return true;
            }
        }
    }
    return false;
}
int main() {
    int x,y;
    scanf("%d%d",&m,&n);
    while (1)
    {
        scanf("%d%d",&x,&y);
        if(x==-1)
            break;
        add(y,x);
    }
    for(int i=m+1;i<=n;i++)
    {
        memset(vis,0,sizeof(vis));
        if(find(i))
            ans++;
    }
    printf("%d\n",ans);
    for(int i=1;i<=m;i++)
        if(match[i])
        {
            printf("%d %d\n",i,match[i]);
        }
    return 0;
}