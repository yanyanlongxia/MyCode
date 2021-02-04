//
// Created by admin on 2020/6/26.
//
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a,b,id,d;
}ob[1500];
int T,n;
long long C[1500];
bool cmp(node p1,node p2)
{
    if(p1.d!=p2.d)return p1.d<p2.d;
    else if(p1.d<=0)return p1.a<p2.a;
    return p1.b>p2.b;
}
signed main()
{
    long long sum = 0;
    cin>>n;
    for(int i = 1 ;i <= n ;i++)
    {
        cin>>ob[i].a;
        ob[i].id = i;
    }
    for(int i = 1 ;i <= n ;i++)
    {
        cin>>ob[i].b;
        if (ob[i].a>ob[i].b) ob[i].d=1;
        else if (ob[i].a<ob[i].b) ob[i].d=-1;
        else ob[i].d=0;
    }
    sort(ob+1,ob+1+n,cmp);
    for(int i = 1;i<=n;i++)
    {
        sum += ob[i].a;
        C[i] = max(C[i-1],sum) + ob[i].b;
    }
    cout<<C[n]<<endl;
    for(int i = 1;i<= n;i++)
        cout<<ob[i].id<<" ";
    return 0;
}
