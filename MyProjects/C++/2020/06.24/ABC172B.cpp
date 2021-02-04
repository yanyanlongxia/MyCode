//
// Created by admin on 2020/6/27.
//
#include <bits/stdc++.h>
using namespace std;
string s,t;
int main()
{
    cin>>s>>t;
    int ans=0;
    for(int i=0;i<s.size();i++)
        if(s[i]!=t[i])
            ans++;
    cout<<ans<<endl;
}
