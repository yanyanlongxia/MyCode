//
// Created by admin on 2020/7/28.
//
#include <bits/stdc++.h>
using namespace std;
int n,trie[30000][26],fail[30000],num[30000],tot,ind[30000];
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
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    string s[200],t;
    cin>>n;
    while(n){
        for(int i=1;i<=n;i++)
        {
            cin>>s[i];
            insert(s[i],i);
        }
        get_fail();
        cin>>t;
        calc(t);
        int maxn=0;
        for(int i=1;i<=n;i++)
            if(num[i]>maxn)
                maxn=num[i];
        printf("%d\n",maxn);
        for(int i=1;i<=n;i++)
            if(num[i]==maxn)
                cout<<s[i]<<endl;
        memset(ind,0,sizeof(ind));
        memset(trie,0,sizeof(trie));
        memset(num,0,sizeof(num));
        memset(fail,0,sizeof(fail));
        tot=0;
        cin>>n;
    }
    return 0;
}