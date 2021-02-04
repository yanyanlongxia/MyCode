//File: P3386.cpp
//Author: yanyanlongxia
//Date: 2020/8/10
//
#include <bits/stdc++.h>

using namespace std;
int n,m,e,head[500005],nxt[500005],ver[500005],match[500005],tot,ans;
void add(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
bool vis[500005];
bool find(int x)
{
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(!vis[y])
        {
            vis[y]=1;
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
    scanf("%d%d%d",&n,&m,&e);
    for (int i = 1; i <= e; ++i) {
        scanf("%d%d",&x,&y);
        add(x,y);
    }
    for(int i=1;i<=n;i++)
    {
        memset(vis,0,sizeof(vis));
        if(find(i))
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}