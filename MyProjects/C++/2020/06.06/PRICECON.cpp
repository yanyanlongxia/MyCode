//
// Created by admin on 2020/6/6.
//
#include <bits/stdc++.h>
using namespace std;
int p[11000],t,n,k,num1,num2;
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k;
        for(int j=1;j<=n;j++)
        {
            cin>>p[j];
            num1+=p[j];
            if(p[j]>k)
                p[j]=k;
            num2+=p[j];
        }
        cout<<num1-num2<<endl;
        for(int j=1;j<=n;j++)
            p[j]=0;
        num1=0;num2=0;
    }
    return 0;
}
