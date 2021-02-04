//File: P6244.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>

using namespace std;
int n,dp[100005],ans;
struct act
{
    int t,l;
}no[100005];
bool cmp(act a,act b)
{
    return a.t<b.t;
}
int main() {
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d%d",&no[i].t,&no[i].l);
        dp[i]=1;
    }
    sort(no+1,no+n+1,cmp);
    for (int i=2;i<=n;i++)
        for (int j=1;j<i;j++)
            if (no[j].t+no[j].l<=no[i].t)
            dp[i]=max(dp[i],dp[j]+1);
    for (int i=1;i<=n;i++)
        ans=max(ans,dp[i]);
    printf("%d\n",ans);
    return 0;
}
