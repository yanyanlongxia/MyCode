//File: P1849.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//[USACO12MAR]Tractor S
//双端队列写的01BFS更好看，而且代码更短……
#include <bits/stdc++.h>
#define MN 1100
using namespace std;
const int dx[4]={-1,0,0,1},dy[4]={0,1,-1,0};
int n,step[MN][MN];
bool ih[MN][MN];
pair<int,int>st;
deque<pair<int,int>>q;
int main() {
    int x,y;
    memset(step,-1,sizeof(step));
    scanf("%d%d%d",&n,&st.first,&st.second);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        ih[x][y]=true;
    }
    step[st.first][st.second]=0;
    q.push_front(st);
    while(!q.empty())
    {
        pair<int,int> now=q.front();
        q.pop_front();
        for(int i=0;i<4;i++)
        {
            pair<int,int>nxt=make_pair(now.first+dx[i],now.second+dy[i]);
            if (nxt.first<0 || nxt.first>MN || nxt.second<0 || nxt.second>MN)
                continue;
            if(step[nxt.first][nxt.second]!=-1)
                continue;
            if(ih[nxt.first][nxt.second])
            {
                step[nxt.first][nxt.second]=step[now.first][now.second]+1;
                q.push_back(nxt);
            } else{
                step[nxt.first][nxt.second]=step[now.first][now.second];
                q.push_front(nxt);
            }
        }
    }
    printf("%d\n",step[0][0]);
    return 0;
}