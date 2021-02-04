//
// Created by admin on 2020/7/18.
//
#include <bits/stdc++.h>
using namespace std;
int n,k,dp[200][200],m,ans=0x3f3f3f3f;
struct book
{
    int he,wi;
}a[200];
bool cmp(book x,book y)
{
    return x.he<y.he;
}
int main()
{
    cin>>n>>k;
    m=n-k;
    for(int i=1;i<=n;i++)
        cin>>a[i].he>>a[i].wi;
    sort(a+1,a+n+1,cmp);
    memset(dp,0x3f3f3f3f,sizeof(dp));
    for(int i=1;i<=n;i++)
        dp[i][1]=0;
    for(int i=1;i<=n;i++)  //选取到第i本书
        for(int j=1;j<i;j++)//枚举前一本书
            for(int x=1; x <= min(i, m); x++)//枚举总长度
                dp[i][x]=min(dp[i][x], dp[j][x - 1] + abs(a[i].wi - a[j].wi));
    for(int i=m;i<=n;i++)
        ans=min(ans,dp[i][m]);
    cout<<ans<<endl;
    return 0;
}