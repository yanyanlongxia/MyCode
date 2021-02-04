//
// Created by admin on 2020/7/29.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,trie[1000005][4],fail[1000005],tot,flag[1000005];
map<char,int>ma;
void insert(string s)
{
    int now=0;
    for(int i=0;i<s.size();i++)
    {
        if(!trie[now][ma[s[i]]])
            trie[now][ma[s[i]]]=++tot;
        now=trie[now][ma[s[i]]];
    }
    flag[now]++;
}
void get_fail()
{
    queue<int>q;
    for(int i=0;i<4;i++)
        if(trie[0][i])
            q.push(trie[0][i]);
    while(!q.empty())
    {
        int now=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            if(trie[now][i])
            {
                fail[trie[now][i]]=trie[fail[now]][i];
                q.push(trie[now][i]);
            }
            else
                trie[now][i]=trie[fail[now]][i];
        }
    }
}
void ac(string s)
{
    int now=0;
    for(int i=0;i<s.size();i++)
    {
        now=trie[now][ma[s[i]]];
        for(int j=now;j&&flag[j]!=-1;j++)
            flag[j]=-1;
    }
}
int query(string s)
{
    int now=0,ans=0;
    for(int i=0;i<s.size();i++)
    {
        now=trie[now][ma[s[i]]];
        if(flag[now]==-1)
            ans=i;
    }
    return ans;
}
int main()
{
    ma['E']=0;ma['S']=1;ma['W']=2;ma['N']=3;
    string t,s[100005];
    cin>>n>>m;
    cin>>t;
    for(int i=1;i<=m;i++)
    {
        cin>>s[i];
        insert(s[i]);
    }
    get_fail();
    ac(t);
    for(int i=1;i<=m;i++)
        cout<<query(s[i])<<endl;
    return 0;
}