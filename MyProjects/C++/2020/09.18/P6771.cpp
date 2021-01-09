//File: P6771.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>

using namespace std;
int n,ans,cnt[1005][1005];
struct block
{
    int hei,lim,con;
}a[100005];
bool cmp(block x,block y) {
    return x.lim < y.lim;
}
bool dp[100005];
int main() {
    int x,y,z;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        scanf("%d%d%d",&a[i].hei,&a[i].lim,&a[i].con);
    sort(a+1,a+n+1,cmp);
    dp[0]=true;
    for (int i=1;i<=n;i++)
    {
        for (int j=a[i].hei;j<=a[i].lim;j++)
        {
            if (dp[j])
                continue;
            if (dp[j-a[i].hei] && cnt[i][j-a[i].hei]<a[i].con)
            {
                dp[j]=true;
                cnt[i][j]=cnt[i][j-a[i].hei]+1;
                ans=max(ans,j);
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
