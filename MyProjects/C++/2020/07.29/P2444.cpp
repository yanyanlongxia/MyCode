//
// Created by admin on 2020/7/29.
//
#include <bits/stdc++.h>
using namespace std;
const int N=30000+233;
int n,ch[N][2],end1[N],fail[N],num,vis[N],ins[N];;
string str;
void insert(string s)
{
    int now = 0;
    for(int i = 0; i <s.size() ; ++i) {
        if (!ch[now][s[i]-'0'])
            ch[now][s[i]-'0'] = ++num;
        now = ch[now][s[i]-'0'];
    }
    end1[now] = true;
}
void ac()
{
    queue<int> que;
    for (int i = 0; i < 2; ++i)
        if (ch[0][i]) que.push(ch[0][i]);
    while (!que.empty())
    {
        int x = que.front(); que.pop();
        for (int i = 0; i < 2; ++i)
        {
            if (ch[x][i]) {
                fail[ch[x][i]] = ch[fail[x]][i];
                end1[ch[x][i]] |= end1[ch[fail[x]][i]];
                que.push(ch[x][i]);
            }
            else
                ch[x][i] = ch[fail[x]][i];
        }
    }
}
void dfs(int x) {
    if (ins[x])
        puts("TAK"), exit(0);
    if (vis[x] || end1[x]) return;
    ins[x] = vis[x] = true;
    dfs(ch[x][0]), dfs(ch[x][1]);
    ins[x] = false;
}
int main() {
    cin >> n;
    while (n--)
        cin >> str, insert(str);
    ac(), dfs(0);
    puts("NIE");
    return 0;
}
