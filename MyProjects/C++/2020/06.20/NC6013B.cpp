//
// Created by admin on 2020/6/20.
//
#include <bits/stdc++.h>
using namespace std;
int a,b,c,t;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((b*c)%a!=0)
            cout<<-1<<endl;
        else
            cout<<(b*c)/a<<endl;
    }
    return 0;
}
