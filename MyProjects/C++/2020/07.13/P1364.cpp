//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
int g[150][150],n,po[150],ans=0x3f3f3f3f,sum;
int main()
{
    cin>>n;
    int w,u,v;
    memset(g,0x3f,sizeof(g));
    for(int i=1;i<=n;i++)
    {
        cin>>w>>u>>v;
        po[i]=w;
        if(u!=0)
            g[i][u]=g[u][i]=1;
        if(v!=0)
            g[i][v]=g[v][i]=1;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(i!=j&&j!=k&&i!=k)
                    g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
    for(int i=1;i<=n;i++)
    {
        sum=0;
        for(int j=1;j<=n;j++)
            if(j!=i)
                sum+=po[j]*g[i][j];
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}
