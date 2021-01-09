//
// Created by admin on 2020/7/29.
//
#include <bits/stdc++.h>
using namespace std;
int n,trie[300000][26],fail[300000],num[300000],tot,ind[300000];
map<string,int>m;
void insert(string s,int index)
{
    int now=0;
    for(int i=0;i<s.size();i++)
    {
        if(!trie[now][s[i]-'a'])
            trie[now][s[i]-'a']=++tot;
        now=trie[now][s[i]-'a'];
    }
    ind[now]=index;
    m[s]=index;
}
void get_fail()
{
    queue<int>q;
    for(int i=0;i<26;i++)
        if(trie[0][i])
            q.push(trie[0][i]);
    while(!q.empty())
    {
        int now=q.front();
        q.pop();
        for(int i=0;i<26;i++)
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
void calc(string s)
{
    int now=0;
    for(int i=0;i<s.size();i++)
    {
        now=trie[now][s[i]-'a'];
        for(int j=now;j;j=fail[j])
            num[ind[j]]++;
    }
}
int main()
{
    string s[300000],t;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        insert(s[i],i);
    }
    get_fail();
    cin>>t;
    calc(t);
    for(int i=1;i<=n;i++)
        cout<<num[m[s[i]]]<<endl;
    return 0;
}
