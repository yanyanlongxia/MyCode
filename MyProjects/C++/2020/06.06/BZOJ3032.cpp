//
// Created by admin on 2020/6/7.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,t,row[100005],col[100005],final[100005];
int proc(int a[100005],int num)
{
    int res;
    for(int i=1;i<=num;i++)
    {
        a[i]-=a[0]/n;
        final[i]=final[i-1]+a[i];
    }
    sort(final+1,final+num+1);
    for(int i=1;i<=num;i++)
        res+=abs(final[i]-final[(n+1)>>1]);
    return res;
}
signed main()
{
    int x,y;
    cin>>n>>m>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y;
        row[y]++;
        col[x]++;
    }
    for(int i=1;i<=n;i++)
        col[0]+=col[i];
    for(int i=1;i<=m;i++)
        row[0]+=row[i];
    if(col[0]%n==0)
    {
        if(row[0]%m==0)
            cout<<"both"<<" "<<proc(row,m)+proc(col,n)<<endl;
        else
            cout<<"column"<<" "<<proc(col,n)<<endl;
    } else
    {
        if(row[0]%m==0)
            cout<<"row"<<" "<<proc(row,m)<<endl;
        else
            cout<<"impossible"<<endl;
    }
    return 0;
}
