//
// Created by admin on 2020/7/22.
//
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <memory>
#define MN 500000
using namespace std;
int n,m,head[MN],ver[MN],nxt[MN],tot,dfn[MN],low[MN],num,root,ans=0;
bool cut[MN];
void adde(int x,int y)
{
    ver[++tot]=y;
    nxt[tot]=head[x];
    head[x]=tot;
}
void tarjan(int x)
{
    dfn[x]=low[x]=++num;
    int flag=0;
    for(int i=head[x];i;i=nxt[i])
    {
        int y=ver[i];
        if(!dfn[y])
        {
            tarjan(y);
            low[x]=min(low[x],low[y]);
            if(low[y]>=dfn[x])
            {
                flag++;
                if(x!=root || flag>1)
                    cut[x]=true;
            }
        }
        else
            low[x]=min(low[x],dfn[y]);
    }
}
void clear()
{
    num=root=ans=tot=0;
    memset(low,0,sizeof(low));
    memset(dfn,0,sizeof(dfn));
    memset(cut,false,sizeof(cut));
    memset(head,0,sizeof(head));
    memset(ver,0,sizeof(ver));
    memset(nxt,0,sizeof(nxt));
}
int main()
{
    int x,y;
    while(scanf("%d",&n),n){
        clear();
        while(scanf("%d",&x),x){
            while(true)
            {
                char ch=getchar();
                if(ch=='\n')
                    break;
                scanf("%d",&y);
                adde(x,y);
                adde(y,x);
            }
        }
        for(int i=1;i<=n;i++)
            if(!dfn[i])
            {
                root=i;
                tarjan(i);
            }
        for(int i=1;i<=n;i++)
            if(cut[i])
                ans++;
        printf("%d\n",ans);
    }
    return 0;
}