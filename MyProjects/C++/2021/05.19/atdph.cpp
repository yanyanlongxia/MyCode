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
const int N=1e4,MOD=1e9+7;
int n,m,dp[N][N];
char s[N][N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("atdph.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%s",(s[i]+1));
    }
    dp[1][1]=1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            if(s[i][j]=='#')
                continue;
            if(s[i-1][j]=='.') {
                dp[i][j] += dp[i - 1][j];
                dp[i][j]%=MOD;
            }
            if(s[i][j-1]=='.') {
                dp[i][j] += dp[i][j - 1];
                dp[i][j]%=MOD;
            }
        }
    printf("%d\n",dp[n][m]);
    return 0;
}
