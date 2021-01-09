//
// Created by admin on 2020/7/28.
//
#include <bits/stdc++.h>
using namespace std;
string s,t;
int n,m,nxt[150000];
vector<int>ans;
void get_nxt()
{
    int i=-1,j=0;
    nxt[0]=-1;
    while(j<t.size())
    {
        if(i==-1||t[i]==t[j])
        {
            i++;j++;
            nxt[j]=i;
        } else
            i=nxt[i];
    }
}
int main()
{
    cin>>s>>t;
    n=s.size();m=t.size();
    get_nxt();
    int i=0,j=0;
    while(i<n)
    {

        if(j==-1||s[i]==t[j])
        {
            i++;j++;
        }
        else
            j=nxt[j];
        if(j==m)
            ans.push_back(i-j);
    }
    for(i=0;i<ans.size();i++)
        printf("%d\n",ans[i]+1);
    for(i=1;i<=t.size();i++)
        printf("%d ",nxt[i]);
    return 0;
}
