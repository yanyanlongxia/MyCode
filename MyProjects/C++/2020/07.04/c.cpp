//
// Created by admin on 2020/7/4.
//
#include <bits/stdc++.h>
using namespace std;
long long x,z,k,d,y;
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    freopen("c.in","r",stdin);
    freopen("c.out","w",stdout);
    cin>>x>>z;
    k=z/x;d=gcd(x,k);
    while(d>1)
    {
        x/=d;
        d=gcd(x,k);
    }
    y=z/x;
    cout<<y<<endl;
    return 0;
}
