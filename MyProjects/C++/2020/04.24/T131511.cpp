//
// Created by AsianBike on 2020-05-01.
//
#include <bits/stdc++.h>
using namespace std;
int n,m;
struct Node
{
    int power,xiashu;
    int father,son[200];
}company[3000];
bool dfs(int a,int b)
{
    if(company[a].xiashu==0)
        return 0;
    if(company[b].power>company[a].power)
        return 1;
    for(int i=0;i<=company[b].xiashu;i++)
        if(dfs(a,company[b].son[i])==1)
            return 1;
    return 0;
}
int main()
{
    int p,v,x;
    char c;
    cin>>n;
    company[0].power=0x3f3f3f3f;
    for(int i=1;i<=n;i++)
    {
        cin>>p>>v;
        company[i].power=v;
        company[i].father=p;
        company[p].son[company[p].xiashu]=i;
        company[p].xiashu++;
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>c;
        if(c=='Q')
        {
            cin>>x;
            if(dfs(x,x)==1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }else
        {
            cin>>p>>v;
            company[p].power=v;
        }
    }
    return 0;
}