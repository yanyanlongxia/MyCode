//
// Created by admin on 2020/7/31.
//
#include <bits/stdc++.h>
using namespace std;
int n,dp[150],d;
struct rub
{
    int t,l,h;
}no[150];
bool cmp(rub a,rub b)
{
    return a.t<b.t;
}
int main()
{
    cin>>d>>n;
    for(int i=1;i<=n;i++)
        cin>>no[i].t>>no[i].l>>no[i].h;
    dp[0]=10;
    sort(no+1,no+n+1,cmp);
    for(int i=1;i<=n;i++)
        for(int j=d;j>=0;j--)
            if(dp[j]>=no[i].t)
            {
                if(j+no[i].h>=d)
                {
                    cout<<no[i].t<<endl;
                    return 0;
                }
                dp[j+no[i].h]=max(dp[j+no[i].h],dp[j]);
                dp[j]+=no[i].l;
            }
    cout<<dp[0]<<endl;
    return 0;
}