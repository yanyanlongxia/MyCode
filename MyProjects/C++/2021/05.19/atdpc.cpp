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
const int N=5e6;
int n,a[N],b[N],c[N],dp[N][4];
int main() {
    freopen("data.in","r",stdin);
    //freopen("atdpc.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    for(int i=1;i<=n;i++){
        dp[i][1]=max(dp[i-1][2],dp[i-1][3])+a[i];
        dp[i][2]=max(dp[i-1][1],dp[i-1][3])+b[i];
        dp[i][3]=max(dp[i-1][1],dp[i-1][2])+c[i];
    }
    printf("%d\n",max(max(dp[n][1],dp[n][2]),dp[n][3]));
    return 0;
}
