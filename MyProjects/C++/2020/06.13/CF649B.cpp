//
// Created by admin on 2020/6/14.
//
#include<bits/stdc++.h>
using namespace std;
int t,sumj[100000],n,p[100000];
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
            cin>>p[j];
        for(int j=1;j<n;j++)
            sumj[j]=abs(p[j+1]-p[j]);

    }
    return 0;
}

