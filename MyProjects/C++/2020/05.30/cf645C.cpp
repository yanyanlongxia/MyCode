//
// Created by admin on 2020/5/30.
//
#include<bits/stdc++.h>
using namespace std;
long long X1,X2,Y1,Y2,result[57180];
int t;
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>X1>>Y1>>X2>>Y2;
        result[i]=llabs(X1-X2)+llabs(Y1-Y2);
    }
    for(int i=1;i<=t;i++)
        cout<<result[i]<<endl;
    return 0;
}
