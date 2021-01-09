//
// Created by admin on 2020/6/14.
//
#include <bits/stdc++.h>
using namespace std;
int t,n,m;
bool g[55][55];
bool valid(int x,int y)
{
    for(int i=1;i<=m;i++)
        if(g[x][i]==1)
            return 0;
    for(int i=1;i<=n;i++)
        if(g[i][y]==1)
            return 0;
    return 1;
}
bool setu()
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(g[i][j]==0&&valid(i,j)==1)
            {
                g[i][j]=1;
                return 1;
            }
    return 0;
}
int main()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        for(int v=1;v<=n;v++)
            for(int w=1;w<=m;w++)
                cin>>g[v][w];
        int j=0;
        while(setu())
            j++;
        if(j%2==1)
            cout<<"Ashish"<<endl;
        else
            cout<<"Vivek"<<endl;
    }
    return 0;
}
