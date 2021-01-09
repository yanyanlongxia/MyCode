//File: CF245H.cpp
//Author: yanyanlongxia
//Date: 2020/11/22
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=6e3;
int n,q,f[N][N],dp[N][N];
char s[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF245H.out","w",stdout);
    scanf("%s",(s+1));
    n=strlen(s+1);
    scanf("%d",&q);
    for(int i=1;i<=n;i++)
        f[i][i]=1;
    for(int i=1;i<n;i++)
        if(s[i]==s[i+1])
            f[i][i+1]=1;
    for(int len=3;len<=n;len++)
        for(int l=1,r;l<=n-len+1;l++){
            r=l+len-1;
            if(s[l]==s[r]&&f[l+1][r-1])
                f[l][r]=1;
        }
    for(int len=1;len<=n;len++)
        for(int l=1,r;l<=n-len+1;l++){
            r=l+len-1;
            dp[l][r]=dp[l][r-1]+dp[l+1][r]-dp[l+1][r-1]+f[l][r];
        }
    int x,y;
    while(q--){
        scanf("%d%d",&x,&y);
        printf("%d\n",dp[x][y]);
    }
    return 0;
}
