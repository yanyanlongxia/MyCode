//
// Created by admin on 2020/7/19.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,r[1000050],d[1000050],s[1000050],t[1000050],tp[1000050];
bool valid(int mid)
{
    for(int i=1;i<=n;i++)
        tp[i]=r[i]-r[i-1];
    for(int i=1;i<=mid;i++)
    {
        tp[s[i]]-=d[i];
        tp[t[i]+1]+=d[i];
    }
    for(int i=1;i<=n;i++)
    {
        tp[i]+=tp[i-1];
        if(tp[i]<0)
            return false;
    }
    return true;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        scanf("%d",&r[i]);
    for(int i=1;i<=m;i++)
        scanf("%d%d%d",&d[i],&s[i],&t[i]);
    int l=0,r=m,mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(valid(mid))
            l=mid+1;
        else
            r=mid;
    }
    if(l==m)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<-1<<endl;
    cout<<l<<endl;
    return 0;
}