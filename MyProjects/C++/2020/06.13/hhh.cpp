//
// Created by admin on 2020/6/14.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,fa[100000],size[1000000];
int find(int x)
{
    if(x==fa[x])
        return x;
    else
        fa[x]=find(fa[x]);//路径压缩
    return fa[x];
}
void merge(int y,int x)
{
    if(size[y]<size[x])
        swap(y,x);
    size[find(y)]+=size[find(x)];
    size[find(x)];//启发式合并
    fa[find(x)]=find(y);
}
int main()
{
    int x,y,z;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        fa[i]=i;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y>>z;
        if(x==1)
            merge(y,z);
        if(x==2)
        {
            if(find(y)==find(z))
                cout<<"Y"<<endl;
            else
                cout<<"N"<<endl;
        }
    }
    return 0;
}
