//
// Created by admin on 2020/7/21.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,color[4000],tot,colored;
vector<int> no[4000];
bool b;
void dfs(int x,int c)
{
    color[x]=c;
    tot++;
    if (c==1)
        colored++;
    for(int i=0;i<no[x].size();i++)
    {
        int y=no[x][i];
        if (color[y]==0)
            dfs(y,-c);
        else
            if(color[y]==c)
                b=false;
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int ans=0;

        memset(no,0,sizeof(no));
        memset(color,0,sizeof(color));
        cin>>n;
        int x;
        for (int j = 1; j <=n; ++j)
        {
            cin>>m;
            for(int i=1;i<=m;i++)
            {
                cin>>x;
                if(x>n)
                    continue;
                no[j].push_back(x);
                no[x].push_back(j);
            }
        }
        for(int i=1;i<=n;i++)
            if(color[i]==0)
            {
                tot=colored=0;
                b=true;
                dfs(i,1);
                if(b)
                    ans+=max(colored,tot-colored);
            }
        cout<<ans<<endl;
    }
    return 0;
}
