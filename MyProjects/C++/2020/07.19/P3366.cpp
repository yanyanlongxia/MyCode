//
// Created by admin on 2020/7/20.
//
#include <bits/stdc++.h>
using namespace std;
int g[5050][5050],minn[500005],n,m;
bool vis[500005];
int main()
{
    int x,y,z;
    cin>>n>>m;
    memset(g,0x7f,sizeof(g));
    for(int i=1;i<=n;i++)
        g[i][i]=0;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y>>z;
        g[x][y]=g[y][x]=z;
    }
    memset(minn,0x7f,sizeof(minn));
    minn[1]=0;
    for(int i=1;i<n;i++)
    {

        int k=0;
        for(int j=1;j<=n;j++)
            if((!vis[j])&&(k==0||minn[j]<minn[k]))
                k=j;
        vis[k]=true;
        for(int j=1;j<=n;j++)
            if((!vis[j])&&(g[k][j]<minn[j]))
                minn[j]=g[k][j];

    }
    int tot=0;
    for(int i=2;i<=n;i++)
    {
        if(minn[i]==0x7f)
        {
            cout<<"orz"<<endl;
            return 0;
        }
        tot+=minn[i];
    }
    cout<<tot<<endl;
    return 0;
}
