//File: P1565.cpp
//Author: yanyanlongxia
//Date: 2020/9/23
//
#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,x,y,a[201][201],d[201][201],ans;
int main()
{
    scanf("%lld%lld",&n,&m);
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
        {
            scanf("%lld",&a[i][j]);
            d[i][j]=d[i][j-1]+d[i-1][j]-d[i-1][j-1]+a[i][j];
        }
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            for (x=0;x<i;x++)
                for (y=0;y<j;y++)
                    if (d[i][j]-d[x][j]-d[i][y]+d[x][y]>0)
                        ans=max(ans,(i-x)*(j-y));
    printf("%lld\n",ans);
    return 0;
}