//
// Created by admin on 2020/7/18.
//
#include <bits/stdc++.h>
using namespace std;
int n,m,dp[1500],c[150000],t[150000],p[150000],ans;
int main()
{
    int h1,m1,h2,m2;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    m=h2*60+m2-h1*60-m1;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>t[i]>>c[i]>>p[i];
    for(int i=1;i<=n;i++)
    {
        if(p[i]==0)
            for(int j=t[i];j<=m;j++)
                dp[j]=max(dp[j],dp[j-t[i]]+c[i]);
        else
            for(int j=1;j<=p[i];j++)
                for(int k=m;k>=t[i];k--)
                    dp[k]=max(dp[k],dp[k-t[i]]+c[i]);
    }
    for(int i=1;i<=m;i++)
        ans=max(ans,dp[i]);
    cout<<ans<<endl;
    return 0;
}
