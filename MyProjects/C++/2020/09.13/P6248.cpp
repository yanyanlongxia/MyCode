//File: P6248.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>

using namespace std;
int n,m,state[7],val[35],ans;
struct pa
{
    int fi,se,va;
}temp;
vector<pa>p;
bool vis[35];
map<string,int>f;
void solve()
{
    int res=0;
    for(int i=1;i<=6;i++)
        res+=val[state[i]];
    for (int i=0;i<p.size();i++)
    {
        if (vis[p[i].fi] && vis[p[i].se])
            res+=p[i].va;
    }
    ans=max(ans,res);
}
void dfs(int step,int last)
{
    if (step==7 || step==n+1)
    {
        solve();
        return;
    }
    for (int i=last+1;i<=n;i++)
    {
        if (!vis[i])
        {
            vis[i]=true;
            state[step]=i;
            dfs(step+1,i);
            vis[i]=false;

        }
    }
}
int main() {
    string s;
    int x;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
    {
        cin>>s;
        scanf("%d",&x);
        f[s]=i;
        val[i]=x;
    }
    for (int i=1;i<=m;i++)
    {
        cin>>s;
        temp.fi=f[s];
        cin>>s;
        temp.se=f[s];
        scanf("%d",&x);
        temp.va=x;
        p.push_back(temp);
    }
    dfs(1,0);
    printf("%d\n",ans);
    return 0;
}
