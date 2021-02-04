//File: CF1391B.cpp
//Author: yanyanlongxia
//Date: 2020/8/9
//
#include <bits/stdc++.h>

using namespace std;
int t,n,m,ans;
char s[1000][1000];
bool ok[1000][1000];
int main() {
    scanf("%d",&t);
    while (t--)
    {
        ans=0;
        memset(ok,0,sizeof(ok));
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)
            scanf("%s",(s[i]+1));
        for(int i=1;i<m;i++)
            if(s[n][i]!='R')
                ans++;
        for(int i=1;i<n;i++)
            if(s[i][m]!='D')
                ans++;
        printf("%d\n",ans);
    }
    return 0;
}