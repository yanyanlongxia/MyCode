//File: P1129.cpp
//Author: yanyanlongxia
//Date: 2020/8/10
//[ZJOI2007]矩阵游戏
#include <bits/stdc++.h>

using namespace std;
int t,n,match[400],head[160005],nxt[160005],ver[160005],tot;
bool vis[400];
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
    int x;
    scanf("%d",&t);
    while (t--)
    {
        memset(head,0,sizeof(head));
        memset(nxt,0,sizeof(nxt));
        memset(match,0,sizeof(match));
        memset(ver,0,sizeof(ver));
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                scanf("%d",&x);
                if(x==1)
                    add(i,j);
            }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            memset(vis,0,sizeof(vis));
            if(find(i))
                cnt++;
        }
        if(cnt==n)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}