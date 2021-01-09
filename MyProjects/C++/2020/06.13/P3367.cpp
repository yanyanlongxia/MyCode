//
// Created by admin on 2020/6/14.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,fa[100000],size[1000000];
int get(int x)
{
    if(x==fa[x])
        return x;
    fa[x]=get(fa[x]);
    return fa[x];
}
void merge(int y,int x)
{
    size[get(y)]+=size[get(x)];
    size[get(x)]=0;
    fa[get(x)]=get(y);
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
        {
            if(size[y]>size[x])
                merge(y,x);
            else
                merge(x,y);
        }
        else
        {
            if(get(x)==get(y))
                cout<<"Y"<<endl;
            else
                cout<<"N"<<endl;
        }
    }
    return 0;
}
