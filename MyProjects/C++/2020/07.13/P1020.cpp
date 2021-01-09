//
// Created by admin on 2020/7/17.
//
#include <bits/stdc++.h>
using namespace std;
int n,a[200000],dp[200000],ans,maxn;
void add(int x,int num)
{
    for(int i=x;i<=maxn;i+= i & (-i))
        dp[i]=max(dp[i],num);
}
int query(int x)
{
    int re=0;
    for(int i=x;i>=1;i-= i & (-i))
        re=max(re,dp[i]);
    return re;
}
int main()
{
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    int x;
    while(cin>>x)
    {
        n++;
        a[n]=x;
        maxn=max(maxn,a[n]);
    }
    for(int i=n;i>=1;i--)
    {
        int re=query(a[i])+1;
        add(a[i],re);
        ans=max(ans,re);
    }
    for(int i=1;i<=n;i++)
        ans=max(ans,dp[i]);
    if(ans==n)
    {
        cout<<n<<endl;
        return 0;
    }
    cout<<ans<<endl;
    ans=0;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        int re=query(a[i]-1)+1;
        add(a[i],re);
        ans=max(ans,re);
    }
    cout<<ans<<endl;
    return 0;
}