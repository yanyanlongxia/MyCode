//
// Created by admin on 2020/7/14.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,dp[10000],va[1000][10000],wi[1000][10000],zu=0,c[1000];
int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        int x=0,y=0,k=0;
        cin>>x>>y>>k;
        c[k]++;zu=max(zu,k);
        wi[k][c[k]]=x;va[k][c[k]]=y;
    }
    for(int i=1;i<=zu;i++)
        for(int j=m;j>=0;j--)
            for(int k=1;k<=c[i];k++)
                if(j>=wi[i][k])
                    dp[j]=max(dp[j],dp[j-wi[i][k]]+va[i][k]);
    cout<<dp[m]<<endl;
    return 0;
}