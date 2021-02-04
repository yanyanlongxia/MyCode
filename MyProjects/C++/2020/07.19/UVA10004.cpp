//
// Created by admin on 2020/7/21.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,color[300];
vector<int> no[300];
bool h;
bool dfs(int x,int c)
{
    color[x]=c;
    for(int i=0;i<no[x].size();i++)
    {
        int y=no[x][i];
        if(color[y]==c)
            return false;
        if(color[y]==0&&!(dfs(y,-c)))
            return false;
    }
    return true;
}
int main()
{
    while (true)
    {
        h=false;
        memset(no,0,sizeof(no));
        memset(color,0,sizeof(color));
        cin>>n;
        if(n==0)
            break;
        cin>>m;
        int x,y;
        for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            no[x].push_back(y);
            no[y].push_back(x);
        }
        for(int i=1;i<=n;i++)
            if(color[i]==0)
            {
                if(!dfs(i,1))
                {
                    h=true;
                    break;
                }
            }
        if(h)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}