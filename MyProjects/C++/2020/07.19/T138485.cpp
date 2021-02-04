//
// Created by admin on 2020/7/25.
//
#include <bits/stdc++.h>
using namespace std;
int m,n;
int a;
inline int power(int a,int b)
{
    int ans=1;
    for(;b;b>>=1)
    {
        if(b&1)
            ans*=a;
        a*=a;
    }
    return ans;
}
int main()
{
    cin>>n>>m;
    if(m>=n)
    {
        cout<<1<<endl;
        return 0;
    }
    if(m==1)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(power(i,m)<=n)
            a=i;
        else
            break;
    }
    cout<<a<<endl;
    return 0;
}