//
// Created by admin on 2020/7/5.
//
#include <bits/stdc++.h>
using namespace std;
int n,p;
int power(int a,int b,int mo)
{
    int ans=1;
    for(;b;b>>=1)
    {
        if(b&1)
            ans=(long long)ans*a%mo;
        a=(long long)a*a%mo;
    }
    return ans;
}
int main()
{
    cin>>n>>p;
    for(int i=1;i<=n;i++)
        printf("%d\n",power(i,p-2,p));
    return 0;
}
