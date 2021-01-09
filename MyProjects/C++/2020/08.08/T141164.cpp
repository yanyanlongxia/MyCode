//File: T141164.cpp
//Author: yanyanlongxia
//Date: 2020/8/8
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int k;
string x,bei,res;
signed main() {
    cin>>k>>x;
    bei="1";
    for(int i=1;i<=k;i++)
        bei+="0";
    //cout<<bei<<endl;
    reverse(x.begin(),x.end());
    reverse(bei.begin(),bei.end());
    //cout<<x<<endl;
    //cout<<bei<<endl;
    int jin=0,xs,ys;
    xs=x.size();ys=bei.size();
    x.resize(max(x.size(),bei.size()));
    bei.resize(x.size());
    if(xs<ys)
        for(int i=xs;i<ys;i++)
            x[i]='0';
    if(ys<xs)
        for(int i=ys;i<xs;i++)
            bei[i]='0';
    res.resize(x.size());
    for(int i=0;i<x.size();i++)
    {
        int a=x[i]-'0';
        int b=bei[i]-'0';
        int c=a+b+jin;
        jin=0;
        if(c>=10)
        {
            jin=c/10;
            c%=10;
        }
        res[i]=c+'0';
    }
    if(jin!=0)
    {
        res.resize(x.size()+1);
        res[x.size()]=jin+'0';
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
    return 0;
}