//File: POJ2411.cpp
//Author: yanyanlongxia
//Date: 2020/8/11
//
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int n,m,dp[12][2048];
bool state[2048];
int main() {
    for(int i=0;i<2048;i++)
    {
        bool ho=false,cnt=false;
        for(int j=0;j<11;j++)
            if((i>>j) & 1)
                ho |=cnt,cnt=false;
            else
                cnt^=1;
        state[i]= ((ho | cnt) == 0);
    }
    scanf("%d%d",&n,&m);
    while(n!=0)
    {
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        int maxn=1<<m;
        for (int i = 1; i <= n; i++) {
            for(int j=0;j<maxn;j++)
                for(int k=0;k<maxn;k++)
                    if((j & k)==0 && state[j | k])
                        dp[i][j]+=dp[i-1][k];
        }
        printf("%d\n",dp[n][0]);
        scanf("%d%d",&n,&m);
    }
    return 0;
}