//
// Created by admin on 2020/6/20.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,fa[40005];
struct relat
{
    int x,y,z;
}a[100005];
int get(int x)
{
    if(x==fa[x])
        return x;
    return fa[x]=get(fa[x]); //路径压缩并查集
}
bool cmp(relat i,relat j)
{
    return i.z>j.z;  //排序函数
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=2*n;i++)
        fa[i]=i;
    for(int i=1;i<=m;i++)
        cin>>a[i].x>>a[i].y>>a[i].z;
    sort(a+1,a+m+1,cmp);//贪心
    for(int i=1;i<=m;i++)
    {
        int x=a[i].x,y=a[i].y,z=a[i].z;
        int fx=get(x),fy=get(y);
        if(fx==fy) //发生冲突，直接输出
        {
            cout<<z<<endl;
            return 0;
        }
        fa[fx]=get(y+n);//将x合并到y的敌人集合
        fa[fy]=get(x+n);//将y合并到x的敌人集合
    }
    cout<<0<<endl;
    return 0;
}