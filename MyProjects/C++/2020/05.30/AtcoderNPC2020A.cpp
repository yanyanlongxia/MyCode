//
// Created by admin on 2020/5/30.
//
#include <bits/stdc++.h>
using namespace std;
long long k;
struct clocks
{
    long long h,m;
}a1,a2;
int cacu()
{
    return a2.h*60+a2.m-a1.h*60-a1.m;
}
int main()
{
    cin>>a1.h>>a1.m>>a2.h>>a2.m;
    cin>>k;
    cout<<cacu()-k<<endl;
    return 0;
}
