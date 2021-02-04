//
// Created by admin on 2020/7/20.
//
#include <bits/stdc++.h>
using namespace std;
bool d[1010][1010];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<+n;i++)
        d[i][i]=0;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        d[x][y]=1;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                d[i][j]|=d[i][k]&d[k][j];
    for(int i=1;i<=n;i++)
        if(d[i][i]==1)
            cout<<"T"<<endl;
        else
            cout<<"F"<<endl;
    return 0;
}
