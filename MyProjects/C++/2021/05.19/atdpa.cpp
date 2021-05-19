//Created by yanyanlongxia on 2021/5/19
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e7;
int n,a[N],dp[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("atdpa.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    infm(dp);
    dp[1]=0;
    for(int i=2;i<=n;i++)
        dp[i]=min(dp[i],min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2])));
    printf("%d\n",dp[n]);
    return 0;
}
