//
// Created by admin on 2020/7/28.
//
#include <bits/stdc++.h>
using namespace std;
int trie[2000005][26],n,flag[2000005],fail[2000005],tot;

void insert(string t)
{
    int now=0;
    for(int i=0;i<t.size();i++)
    {
        int u=t[i]-'a';
        if(!trie[now][u])
            trie[now][u]=++tot;
        now=trie[now][u];
    }
    flag[now]++;
}
void get_fail()
{
    queue<int>q;
    for(int i=0;i<26;i++)
        if (trie[0][i])
            q.push(trie[0][i]);
    while (!q.empty())
    {
        int now=q.front();
        q.pop();
        for(int i=0;i<26;i++)
        {
            if(trie[now][i])
            {
                fail[trie[now][i]]=trie[fail[now]][i];
                q.push(trie[now][i]);
            } else
                trie[now][i]=trie[fail[now]][i];//方便查询
        }
    }
}
int query(string t)
{
    int now=0,ans=0;
    for(int i=0;i<t.size();i++)
    {
        now=trie[now][t[i]-'a'];
        for(int j=now;j && flag[j]!=-1;j=fail[j]) {
            ans +=flag[j];flag[j]=-1;
        }
    }
    return ans;
}
int main()
{
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        insert(s);
    }
    get_fail();
    cin>>s;
    printf("%d\n",query(s));
    return 0;
}