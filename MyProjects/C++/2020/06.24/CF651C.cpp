//
// Created by admin on 2020/6/26.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
map<int,int> x,y;
map<pair<int,int>,int> z;
int n;
signed main()
{
    int a,b,res=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        x[a]++;
        y[b]++;
        z[make_pair(a,b)]++;
    }
    for(auto it : x)
        res+=it.second*(it.second-1)/2;
    for(auto it : y)
        res+=it.second*(it.second-1)/2;
    for(auto it : z)
        res-=it.second*(it.second-1)/2;
    cout<<res<<endl;
}
