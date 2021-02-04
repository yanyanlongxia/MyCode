//File: a.cpp
//Author: yanyanlongxia
//Date: 2020/12/13
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1000;
string a,b,c,lsqa,lsqb,lsqc;
string solve(string x){
    for(int i=0;i<x.size();i++)
        if(x[i]=='0')
            x.erase(i,1);
    return x;
}
int tt[N];
string add(string x,string y){
    memset(tt,0,sizeof(tt));
    string z;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int tmp=0;
    for(int i=0;i<min(x.size(),y.size());i++){
        tt[i]=x[i]+y[i]-2*'0'+tmp;
        tmp=tt[i]/10;
        tt[i]%=10;
    }
    for(int i=min(x.size(),y.size());i<max(x.size(),y.size());i++){
        tt[i]=x[i]+y[i]-2*'0'+tmp;
        tmp=tt[i]/10;
        tt[i]%=10;
    }
    int len=max(x.size(),y.size())-1;
    z.resize(len+1);
    if(!tmp)
        tt[++len]=tmp;
    for(int i=0;i<=len;i++)
        z[i]=tt[i]+'0';
    return z;
}
int main() {
    //freopen("data.in","r",stdin);
    //freopen("a.out","w",stdout);
    cin>>a>>b;
    c=add(a,b);
    lsqa=solve(a);
    lsqb=solve(b);
    if(solve(c)==add(lsqa,lsqb))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
