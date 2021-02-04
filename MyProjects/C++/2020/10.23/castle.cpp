//File: castle.cpp
//Author: yanyanlongxia
//Date: 2020/10/25
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e6;
int n,ans=0x3f3f3f3f,mn=0x3f3f3f3f,down[N][3],up[N];
vector<int>res;
vector<int>son[N];
void dfs1(int x,int fa){
    for (int i=0;i<son[x].size();i++){
        int y=son[x][i];
        if (y==fa)
            continue;
        dfs1(y,x);
        if (down[y][1]+1>down[x][1]){
            down[x][2]=down[x][1];
            down[x][1]=down[y][1]+1;
        }else{
            if (down[y][1]+1>down[x][2])
                down[x][2]=down[y][1]+1;
        }
    }
}
void dfs2(int x,int fa){
    if (fa==0)
        up[x]=0;
    else {
        int tmp;
        up[x] = up[fa] + 1;
        if (down[fa][1]==down[x][1]+1){
            tmp=down[fa][2]+1;
        } else
            tmp=down[fa][1]+1;
        if (tmp>up[x])
            up[x]=tmp;
    }
    int ret=max(down[x][1],up[x]);
    if (ret<mn){
        res.clear();
        mn=ret;
        res.push_back(x);
    }
    if (ret==mn)
        res.push_back(x);
    for (int i=0;i<son[x].size();i++){
        int y=son[x][i];
        if (y==fa)
            continue;
        dfs2(y,x);
    }
}
int main() {
    int x,y;
    freopen("castle.in","r",stdin);
    freopen("castle.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        son[x].push_back(y);
        son[y].push_back(x);
    }
    dfs1(1,0);
    dfs2(1,0);
    for (int i=0;i<res.size();i++)
        ans=min(ans,res[i]);
    printf("%d\n",ans);
    return 0;
}
