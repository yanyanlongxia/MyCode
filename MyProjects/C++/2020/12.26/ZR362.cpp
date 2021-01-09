//File: ZR362.cpp
//Author: yanyanlongxia
//Date: 2021/1/3
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e4;
int n,contr[N],sz[N];
vector<int>v[N];
bool cmp(pair<int,int> x,pair<int,int> y){
    return x.first>y.first;
}
void dfs(int x,int fa){
    sz[x]=1;
    int cnt=0;
    static pair<int,int>val[N];
    contr[x]=2*n-3;
    for(int i=0;i<v[x].size();i++){
        int y=v[x][i];
        if(y==fa)
            continue;
        dfs(y,x);
        sz[x]+=sz[y];
        val[++cnt].second=contr[y];
        val[cnt].first=sz[y];
    }
    sort(val+1,val+cnt+1,cmp);
    int sum=1;
    for(int i=1;i<=cnt;i++){
        contr[x]+=val[i].second-sum*val[i].first;
        sum+=2*val[i].first-2;
    }
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR362.out","w",stdout);
    scanf("%d",&n);
    int x,y;
    for(int i=1;i<n;i++){
        scanf("%d",&x);
        scanf("%d",&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,0);
    printf("%d\n",contr[1]);
    return 0;
}
