//
// Created by admin on 2020/6/13.
//
#include <bits/stdc++.h>
using namespace std;
int t;
bool ju;
int n,x,a[100000],sum[100000];
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ju=0;
        cin>>n>>x;
        for(int j=1;j<=n;j++)
        {
            cin>>a[j];
            a[j]%=x;
        }
        for(int j=1;j<=n;j++)//前缀和
        {
            sum[j]=sum[j-1]+a[j];
            sum[j]%=x;
        }
        for(int v=1;v<=n/2;v++)
            for(int w=n;w>=n/2;w--)
                if(ju==0)
                    if(sum[v]!=sum[w])
                    {
                        cout<<w-v+1<<endl;
                        ju=1;
                    }
        if(ju==0)
            cout<<-1<<endl;
    }
    return 0;
}
