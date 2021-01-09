//
// Created by admin on 2020/7/18.
//
#include <bits/stdc++.h>
using namespace std;
int t,n,a[1000000];
int valid(int x)
{
    for(int i=x+1;i<=(n-x)/2;i++)
        if(a[i+1]<min(a[i],a[n-i+1])||a[n-i]<min(a[i],a[n-i+1]))
            return false;
    return true;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int l=0,r=n,mid;
        while(l<r)
        {
            mid=(l+r)/2;
            if(valid(mid))
                r=mid;
            else
                l=mid+1;
        }
        cout<<l<<endl;
    }
    return 0;
}