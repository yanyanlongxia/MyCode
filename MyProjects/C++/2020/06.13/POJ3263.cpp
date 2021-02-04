//
// Created by admin on 2020/6/13.
//
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
map<pair<int,int>,bool> exist;
int c[20020],d[20020];
int main()
{
    int n,p,h,m;
    cin>>n>>p>>h>>m;
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        if(exist[make_pair(a,b)]) continue;
        d[a+1]--;d[b]++;
        exist[make_pair(a,b)]=1;
    }
    for(int i=1;i<=n;i++)
    {
        c[i]=c[i-1]+d[i];
        cout<<h+c[i]<<endl;
    }
    return 0;
}
