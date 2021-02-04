//
// Created by admin on 2020/7/30.
//
#include <bits/stdc++.h>
using namespace std;
int t,n;
vector<char>li;
void solve()
{
    while(n>=4)
    {
        li.push_back('8');
        n-=4;
    }
    if(n==1||n==2||n==3)
        li.push_back('8');
}
int main()
{
    scanf("%d",&t);
    while (t--)
    {
        li.clear();
        scanf("%d",&n);
        string s;
        for(int i=1;i<=n;i++)
            s+="9";
        solve();
        for(int i=0;i<li.size();i++)
            s[s.size()-1-i]=li[i];
        cout<<s<<endl;
    }
    return 0;
}
