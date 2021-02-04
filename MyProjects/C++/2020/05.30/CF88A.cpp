//
// Created by admin on 2020/5/31.
//
#include <bits/stdc++.h>
using  namespace std;
int t,n,m,k,x,result[1000];
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m>>k;
        x=n/k;
        if(x>=m)
            result[i]=m;
        else
        {
            if((m-x)%(k-1)!=0)
                result[i]=x-((m-x)/(k-1)+1);
            else
                result[i]=x-(m-x)/(k-1);
        }
    }
    for(int i=1;i<=t;i++)
        cout<<result[i]<<endl;
    return 0;
}
