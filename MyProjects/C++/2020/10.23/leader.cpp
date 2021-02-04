//File: leader.cpp
//Author: yanyanlongxia
//Date: 2020/10/28
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=3e6;
int n,fa[N],near[N],down[N][3],depth[N],ans;
vector<int>son[N],lea;
void dfs1(int x){
    depth[x]=depth[fa[x]]+1;
    near[x]=depth[x]-1;
    if(son[x].empty())
        down[x][1]=0;
    for (int i=0;i<son[x].size();i++){
        int y=son[x][i];
        if (y==fa[x])
            continue;
        dfs1(y);
        if (down[y][1]+1<down[x][1]){
            down[x][2]=down[x][1];
            down[x][1]=down[y][1]+1;
        }else if(down[y][1]+1<down[x][2])
            down[x][2]=down[y][1]+1;
        if (down[y][1]+1==down[x][1])
        {
            if (down[x][2]+1<near[y])
                near[y]=down[x][2]+1;
        }else{
            if (down[x][1]+1<near[y])
                near[y]=down[x][1]+1;
        }
    }
}
void dfs2(int x){
    near[x]=min(near[x],near[fa[x]]+1);
    if (son[x].empty())
        lea.push_back(x);
    for (int i=0;i<son[x].size();i++){
        int y=son[x][i];
        if (y==fa[x])
            continue;
        dfs2(y);
    }
}
int main() {
    int x;
    freopen("leader.in","r",stdin);
    freopen("leader.out","w",stdout);
    memset(down,0x3f3f3f3f, sizeof(down));
    memset(near,0x3f3f3f3f, sizeof(near));
    scanf("%d",&n);
    for (int i=2;i<=n;i++)
    {
        scanf("%d",&x);
        fa[i]=x;
        son[x].push_back(i);
    }
    dfs1(1);
    dfs2(1);
    for (int i=0;i<lea.size();i++)
        ans+=near[lea[i]];
    printf("%d\n",ans);
    return 0;
}
