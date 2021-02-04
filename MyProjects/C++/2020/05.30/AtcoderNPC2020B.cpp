//
// Created by admin on 2020/5/30.
//
#include <bits/stdc++.h>
using namespace std;
string t;
string s;
string result;
long long maxn;
void proce()
{
    long long num=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='D')
            num++;
        if(s[i]=='P'&&s[i+1]=='D')
            num++;

    }
    if(num>maxn)
    {
        maxn=num;
        result=s;
    }
}
void dfs(int step)
{
    if(step>t.size())
    {
        proce();
        return ;
    }
    if(s[step]=='?')
    {
        s[step]='P';
        dfs(step+1);
        s[step]='D';
        dfs(step+1);
    }
    dfs(step+1);
}
int main()
{
    cin>>t;
    s=t;
    dfs(0);
    cout<<result<<endl;
    return 0;
}
