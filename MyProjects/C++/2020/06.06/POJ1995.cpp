//
// Created by admin on 2020/6/7.
//
#include <iostream>
using namespace std;
long long T,m,a[50000],b[50000],h,ans;
int main()
{
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>m>>h;
        for(int j=1;j<=h;j++)
            cin>>a[j]>>b[j];
        for(int j=1;j<=h;j++)
        {
            long long res=1;
            for(;b[j];b[j]>>=1)
            {
                if(b[j]&1)
                    res=(long long)res*a[j]%m;
                a[j]=(long long)a[j]*a[j]%m;
            }
            ans=(long long)(ans+res)%m;
        }
        cout<<ans<<endl;
        ans=0;
        for(int j=1;j<=h;j++)
            a[j]=b[j]=0;
    }
    return 0;
}
