//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
int x,y,z,a,b,c,t;
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y>>z;
        a=b=c=0;
        if(z>max(x,y))
        {
            cout<<"No"<<endl;
            continue;
        }
        if(z<max(x,y)&&x!=y)
        {
            cout<<"No"<<endl;
            continue;
        }
        int aa[3]={x,y,z};
        sort(aa,aa+3);
        x=aa[0];y=aa[1];z=aa[2];
        a=z;b=x;c=x;
        cout<<"Yes"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
