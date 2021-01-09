//
// Created by admin on 2020/7/22.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,s,head[1000005],ver[1000005],nextv[1000005],d[1000005],tot,edge[1000005];//数组模拟邻接链表
bool v[1000005];
priority_queue< pair<int,int> >p;
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}
signed main()
{
    int x,y,z;
    n=read();m=read();s=read();
    while (m--)
    {
        x=read();y=read();z=read();
        ver[++tot]=y;
        edge[tot]=z;
        nextv[tot]=head[x];
        head[x]=tot;  //添加一条边
    }
    memset(d,0x3f3f3f3f,sizeof(d));
    d[s]=0;
    p.push(make_pair(0,s));
    while (p.size())
    {
        x=p.top().second;
        p.pop();
        if(v[x])
            continue;
        v[x]=1;
        for(int i=head[x];i;i=nextv[i])
        {
            y=ver[i],z=edge[i];
            if(d[y]>d[x]+z)
            {
                d[y]=d[x]+z;
                p.push(make_pair(-d[y],y));
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(d[i]==0x3f3f3f3f)
            printf("%d ",2147483647);
        else
            printf("%d ",d[i]);
    }
    puts("");
    return 0;
}
