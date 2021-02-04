//File: P2055.cpp
//Author: yanyanlongxia
//Date: 2020/8/10
//
#include <bits/stdc++.h>

using namespace std;
int t,n,match[3000],head[3000],nxt[3000],ver[3000],tot;
bool vis[3000],insh[3000],goho[3000];
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
    scanf("%d",&t);
    while (t--)
    {
        int x,cnt=0,tot=0;
        memset(head,0,sizeof(head));
        memset(ver,0,sizeof(ver));
        memset(nxt,0,sizeof(nxt));
        memset(match,0,sizeof(match));
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&insh[i]);
        for (int i = 1; i <= n; ++i) {
            scanf("%d",&goho[i]);
            if(!goho[i] && insh[i])
                add(i,i);
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                scanf("%d",&x);
                if(insh[j] && x)
                    add(i,j);
            }
        }
        for (int i = 1; i <= n; ++i) {
            if((insh[i]&&!goho[i]) || !insh[i])
                tot++;
        }
        for(int i=1;i<=n;i++)
        {
            if((insh[i]&&!goho[i]) || !insh[i])
            {
                memset(vis,0,sizeof(vis));
                if(find(i))
                    cnt++;
            }
        }
        if(cnt==tot)
            puts("^_^");
        else
            puts("T_T");
    }
    return 0;
}