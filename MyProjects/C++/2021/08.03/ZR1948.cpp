//Created by yanyanlongxia on 2021/8/7
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=401;
int n,fi,se;
ll dp[N][N][N],a[N],b[N],c[N];
int main() {
    //freopen("data.in","r",stdin);
    //freopen("ZR1948.out","w",stdout);
    scanf("%d%d%d",&n,&fi,&se);
    for (int i=1;i<=n;i++) {
        scanf("%lld%lld%lld",&a[i],&b[i],&c[i]);
    }
    minfm(dp);
    dp[0][0][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<= min(fi,i);j++){
            for(int k=0;k<= min(se,i-j);k++){
                dp[i][j][k]= max(dp[i][j][k],dp[i-1][j][k]+c[i]);
                if(j>0) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - 1][k] + a[i]);/*
                    if(i==3&&j==3&&k==0)
                        printf("%d\n",a[i]);
                        */
                }
                if (k>0)
                    dp[i][j][k]= max(dp[i][j][k],dp[i-1][j][k-1]+b[i]);
            }
        }
    }/*
    for(int i=0;i<=fi;i++) {
        for (int j = 0; j <= se; j++)
            printf("%d ",dp[3][i][j]);
        puts("");
    }*/
    printf("%lld\n",dp[n][fi][se]);
    return 0;
}
