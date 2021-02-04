//
// Created by admin on 2020/7/29.
//
#include <bits/stdc++.h>
using namespace std;
int n,trie[300000][150],fail[300000],num[300000],tot,ind[300000],same[300000],flag[300000];
bool vis[300000];
void insert(string s,int index)
{
    int now=0;
    for(int i=0;i<s.size();i++)
    {
        if(!trie[now][s[i]])
            trie[now][s[i]]=++tot;
        now=trie[now][s[i]];
        flag[now]++;
    }
    if(ind[now])
        same[index]=ind[now];
    else
        ind[now]=index;
}
void get_fail()
{
    queue<int>q;
    for(int i=0;i<150;i++)
        if(trie[0][i])
            q.push(trie[0][i]);
    while(!q.empty())
    {
        int now=q.front();
        q.pop();
        for(int i=0;i<150;i++)
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
        now=trie[now][s[i]];
        for(int j=now;j&&flag[now]!=-1;j=fail[j])
            num[ind[j]]+=flag[now];
        flag[now]=-1;
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
        t+=s[i]+"#";
    }
    get_fail();
    calc(t);
    for(int i=1;i<=n;i++)
    {
        if(!same[i])
            cout<<num[i]<<endl;
        else
            cout<<num[same[i]]<<endl;
    }
    return 0;
}
