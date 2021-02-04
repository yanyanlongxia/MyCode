//
// Created by admin on 2020/6/7.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
struct lan
{
    int index,fav;
    int b,c;
}l[300000];
struct film
{
    int b,c;
}f[300000];
int n,a[300000],m,maxn;
bool cmp(lan a,lan b)
{
    return a.fav>b.fav;
}
signed main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        l[a[i]].fav++;
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        l[i].index=i;
        cin>>f[i].b;
        l[f[i].b].b=i;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>f[i].c;
        l[f[i].c].c=i;
    }


    return 0;
}
