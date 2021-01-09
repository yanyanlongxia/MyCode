//File: CF1437.cpp
//Author: yanyanlongxia
//Date: 2020/11/2
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=500;
int q,n,a[N],ans,dp[N][N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1437.out","w",stdout);
    scanf("%d",&q);
    while (q--){
        memset(dp,0x3f3f3f3f,sizeof (dp));
        scanf("%d",&n);
        ans=0x3f3f3f3f;
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        sort(a+1,a+n+1);
        for (int i=0;i<=2*n;i++)
            dp[i][0]=0;
        for(int i=1;i<=2*n;i++)
            for(int j=1;j<=n;j++)
                dp[i][j]=min(min(dp[i][j],dp[i-1][j]),dp[i-1][j-1]+abs(i-a[j]));
        for(int i=1;i<=2*n;i++)
            ans=min(ans,dp[i][n]);
        printf("%d\n",ans);
    }
    return 0;
}
