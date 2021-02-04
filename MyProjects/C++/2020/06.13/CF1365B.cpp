//
// Created by admin on 2020/6/14.
//
#include <bits/stdc++.h>
using namespace std;
int t,n,a[550];
bool vali1,vali0,b[550];
bool order()
{
    for(int i=1;i<n;i++)
        if(a[i]>a[i+1])
            return 0;
    return 1;
}
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        vali1=0;
        vali0=0;
        cin>>n;
        for(int j=1;j<=n;j++)
            cin>>a[j];

        for(int j=1;j<=n;j++)
        {
            cin>>b[j];
            if(vali1==0&&b[j]==1)
                vali1=1;
            if(vali0==0&&b[j]==0)
                vali0=1;
        }
        if(order()==1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        if(vali0==1&&vali1==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
