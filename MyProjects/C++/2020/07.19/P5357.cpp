#include<bits/stdc++.h>
using namespace std;
const int maxn=300000;
int trie[maxn][26],fail[maxn],match[maxn],cnt=0,size[maxn];
string s[maxn];
int head[maxn],nxt[maxn],to[maxn],tot=0;
void add(int u,int v){
    to[++tot]=v;
    nxt[tot]=head[u];
    head[u]=tot;
}
void dfs(int u){
    for(int i=head[u];i;i=nxt[i]){
        int v=to[i];
        dfs(v);
        size[u]+=size[v];
    }
}
void insert(string s,int Num){
    int root = 0;
    for(int i=0;i<s.size();i++){
        int next = s[i] - 'a';
        if(!trie[root][next])
            trie[root][next] = ++cnt;
        root = trie[root][next];
    }
    match[Num]=root;
}
void getFail(){
    queue <int>q;
    for(int i=0;i<26;i++){      
        if(trie[0][i]){
            fail[trie[0][i]] = 0;
            q.push(trie[0][i]);
        }
    }
    while(!q.empty()){
        int now = q.front();
        q.pop();

        for(int i=0;i<26;i++){      
            if(trie[now][i]){
                fail[trie[now][i]]=trie[fail[now]][i];
                q.push(trie[now][i]);
            }
            else
                trie[now][i] = trie[fail[now]][i];
        }
    }
}
void query(string s){
    int now = 0,ans = 0;
    for(int i=0;i<s.size();i++){
        now = trie[now][s[i]-'a'];
        ++size[now];
    }
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin >> s[i];
        insert(s[i],i);
    }
    fail[0] = 0;
    getFail();
    cin >> s[0];
    query(s[0]);
    for(int i=1;i<=cnt;++i)
        add(fail[i],i);
    dfs(0);
    for(int i=1;i<=n;++i)
        printf("%d\n",size[match[i]]);
    return 0;
}