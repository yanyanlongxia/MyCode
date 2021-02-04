//File: P4147.cpp
//Author: yanyanlongxia
//Date: 2020/9/23
//
#include <bits/stdc++.h>

using namespace std;
int n,m,l[1005][1005],r[1005][1005],u[1005][1005],ans;
bool g[1005][1005];
int main() {
    char s[5];
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            scanf("%s",s);
            if (s[0]=='R')
                g[i][j]=false;
            else
                g[i][j]=true;
            l[i][j]=r[i][j]=j;
            u[i][j]=1;
        }
    for (int i=1;i<=n;i++)
        for (int j=2;j<=m;j++)
            if (g[i][j]&&g[i][j-1])
                l[i][j]=l[i][j-1];
    for (int i=1;i<+n;i++)
        for (int j=m-1;j>=1;j--)
            if (g[i][j]&&g[i][j+1])
                r[i][j]=r[i][j+1];
    for (int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if (i>1 && g[i][j] && g[i-1][j]) {
                u[i][j] = u[i - 1][j] + 1;
                r[i][j]=min(r[i][j],r[i-1][j]);
                l[i][j]=max(l[i][j],l[i-1][j]);
            }
            ans=max(ans,(r[i][j]-l[i][j]+1)*u[i][j]);
        }
    printf("%d\n",3*ans);
    return 0;
}
