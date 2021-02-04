//
// Created by admin on 2020/8/3.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,blo,v[2000000];
vector<int>blc[10000],temp;
int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
pair<int,int> search(int a)
{
    int x=1;
    while(a>blc[x].size())
        a-=blc[x].size(),x++;
    return make_pair(x,a-1);
}
void rebuild()
{
    temp.clear();
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<blc[i].size();j++)
            temp.push_back(blc[i][j]);
        blc[i].clear();
    }
    blo=sqrt(temp.size());
    for(int i=0;i<temp.size();i++)
        blc[i/blo+1].push_back(temp[i]);
    m=(temp.size()-1)/blo+1;
}
void insert(int index,int b)
{
    pair<int,int>t=search(index);
    blc[t.first].insert(blc[t.first].begin()+t.second,b);
    if(blc[t.first].size()>20*blo)
        rebuild();
}
int main()
{
    int opt,a,b,c;
    n=read();
    blo=sqrt(n);
    for(int i=1;i<=n;i++)
    {
        v[i]=read();
        blc[(i-1)/blo+1].push_back(v[i]);
    }
    m=(n-1)/blo+1;
    for(int i=1;i<=n;i++)
    {
        opt=read(),a=read(),b=read(),c=read();
        if(opt==0)
            insert(a,b);
        if(opt==1)
        {
            pair<int,int>t=search(b);
            printf("%d\n",blc[t.first][t.second]);
        }
    }
    return 0;
}