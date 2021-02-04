//File: P1169.cpp
//Author: yanyanlongxia
//Date: 2020/9/23
//
#include <bits/stdc++.h>

using namespace std;
int n,m,l[2005][2005],r[2005][2005],u[2005][2005],ans1,ans2;
bool g[2005][2005];
int main() {
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++) {
            scanf("%d", &g[i][j]);
            l[i][j]=r[i][j]=j;
            u[i][j]=1;
        }
    for (int i=1;i<=n;i++)
        for (int j=2;j<=m;j++)
        {
            if (g[i][j]!=g[i][j-1])
                l[i][j]=l[i][j-1];
        }
    for (int i=1;i<=n;i++)
        for (int j=m-1;j>=1;j--)
        {
            if (g[i][j]!=g[i][j+1])
                r[i][j]=r[i][j+1];
        }
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
        {
            if (i>1 && g[i][j]!=g[i-1][j])
            {
                r[i][j]=min(r[i][j],r[i-1][j]);
                l[i][j]=max(l[i][j],l[i-1][j]);
                u[i][j]=u[i-1][j]+1;
            }
            int x=min(u[i][j],r[i][j]-l[i][j]+1);
            ans1=max(ans1,x*x);
            ans2=max(ans2,(r[i][j]-l[i][j]+1)*u[i][j]);
        }
    printf("%d\n%d\n",ans1,ans2);
    return 0;
}
