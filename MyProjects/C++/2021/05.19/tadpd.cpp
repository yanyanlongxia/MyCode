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
int n,m,w[N];
ll v[N],dp[N],ans;
int main() {
    freopen("data.in","r",stdin);
    //freopen("tadpd.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d%lld",&w[i],&v[i]);
    for(int i=1;i<=n;i++)
        for(int j=m;j>=w[i];j--){
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    for(int i=1;i<=m;i++)
        ans=max(ans,dp[i]);
    printf("%lld\n",ans);
    return 0;
}
