//Created by yanyanlongxia on 2021/2/1
//
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
using namespace std;
const int N=21;
int n,dist[N][N],dp[1<<N][N],maxm;
int main() {
    freopen("data.in","r",stdin);
    //freopen("aw93.out","w",stdout);
    infm(dp);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            scanf("%d",&dist[i][j]);
    }
    maxm=1<<n;
    dp[1][0]=0;
    for(int i=2;i<maxm;i++){
        for(int j=1;j<n;j++)
            if(i&(1<<j)){
                for(int k=0;k<n;k++)
                    if(k!=j && (i & (1<<k))){
                        dp[i][j]=min(dp[i][j],dp[i-(1<<j)][k]+dist[k][j]);
                    }
            }
    }
    printf("%d\n",dp[(1<<n)-1][n-1]);
    return 0;
}
