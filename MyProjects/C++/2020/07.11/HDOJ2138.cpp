//
// Created by admin on 2020/7/11.
//
#include <bits/stdc++.h>
using namespace std;
int n,t,res;
int power(int a,int b,int m)
{
    int ans=1;
    for(;b;b>>=1)
    {
        if(b&1)
            ans=(long long)ans*a%m;
        a=(long long)a*a%m;
    }
    return ans;
}
bool millar(int num)
{
    for(int i=1;i<=10;i++)
    {
        int a=rand()%(num-2)+2;
        if(power(a,num,num)!=a)
            return false;
    }
    return true;
}
int main()
{
    cin>>t;
    srand(time(NULL));
    while(t--)
    {
        scanf("%d",&n);
        if(millar(n)==true)
            res++;
    }
    cout<<res<<endl;
}