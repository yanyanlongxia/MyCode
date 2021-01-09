//
// Created by admin on 2020/7/18.
//
#include <bits/stdc++.h>
using namespace std;
int n,q,dp[150][150];
vector<pair<int,int>>son[150];//第一元为子节点，第二元为权值
void dfs(int x)
{

}
int main()
{
    cin>>n>>q;
    int x,y,z;
    for(int i=1;i<n;i++)
    {
        cin>>x>>y>>z;
        son[x].emplace_back(y,z);
    }
}
