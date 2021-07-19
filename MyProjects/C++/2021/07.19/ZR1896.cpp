//Created by yanyanlongxia on 2021/7/19
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=22;
int c[N][N],k,n,ans=0x3f3f3f3f,dp[1<<N];
int main() {
    //freopen("data.in","r",stdin);
    //freopen("ZR1896.out","w",stdout);
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++) {
        for (int j = 1; j <= n; j++)
            scanf("%d", &c[i][j]);
    }
    int maxm=1<<n;
    infm(dp);
    dp[maxm-1]=0;
    for(int i=maxm-1;i>=0;i--){
        int loga=0;
        for(int j=1;j<=n;j++){
            if(i&(1<<(j-1)))
                loga++;
            else{
                for(int u=1;u<=n;u++){
                    if(i&(1<<(u-1)))
                        dp[i]= min(dp[i],dp[i|(1<<(j-1))]+c[j][u]);
                }
            }
        }
        if(loga<=k)
            ans= min(ans,dp[i]);
    }
    printf("%d\n",ans);
    return 0;
}
