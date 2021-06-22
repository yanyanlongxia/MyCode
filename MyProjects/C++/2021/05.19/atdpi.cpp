//Created by yanyanlongxia on 2021/5/20
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=4e3;
int n;
double a[N],b[N],dp[N][N],ans;
int main() {
    freopen("data.in","r",stdin);
    //freopen("atdpi.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        scanf("%lf",&a[i]);
        b[i]=1.0-a[i];
    }
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
        for(int j=0;j<=n;j++){
            dp[i][j]=dp[i-1][j]*b[i];
            if(j>=1)
                dp[i][j]+=dp[i-1][j-1]*a[i];
        }
    for(int i=n/2+1;i<=n;i++)
        ans+=dp[n][i];
    printf("%.10lf\n",ans);
    return 0;
}
