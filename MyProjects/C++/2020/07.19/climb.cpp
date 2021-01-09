//
// Created by admin on 2020/7/21.
//
#include <bits/stdc++.h>
using namespace std;
int fa[500005],dept[500005],dist[500005],n,k,edg[500005],minn[500005],dmax;
bool valid[500005];
vector<int> no[500005];
inline int read()
{
    int x=0,ff=1;char ch=getchar();
    while (!isdigit(ch))
    {
        if (ch=='-')
            ff=-1;
        ch=getchar();
    }
    while (isdigit(ch))
    {
        x=x*10+ch-48;
        ch=getchar();
    }
    return x*ff;
}
int main()
{
    memset(dist,0x3f3f3f3f,sizeof(dist));
    memset(minn,0,sizeof(minn));
    n=read(),k=read();
    for(int i=2;i<=n;i++)
    {
        fa[i]=read();
        edg[i]=read();
        valid[i]=read();
    }
    for(int i=2;i<=n;i++)
    {
        dept[i]=dept[fa[i]]+1;
        no[dept[i]].push_back(i);
        dmax=max(dept[i],dmax);
    }
    minn[0]=1;
    dist[1]=0;
    for(int i=1;i<=dmax;i++)
    {
        for(int j=0;j<no[i].size();j++)
        {
            int y=no[i][j];
            dist[y]=dist[fa[y]]+edg[y];
            if(!valid[y])
                for(int x=0;x<dept[y];x++)//枚举深度
                    dist[y]=min(dist[y],dist[minn[x]]+k*(dept[y]-x));
            if(dist[y]<dist[minn[i]])
                minn[i]=y;
        }
        for(int j=0;j<no[i].size();j++)
            if(!valid[no[i][j]])
                dist[no[i][j]]=dist[minn[i]];
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",dist[i]);
    return 0;
}
