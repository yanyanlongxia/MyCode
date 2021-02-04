//File: P3416.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>

using namespace std;
int n,x[10005],y[10005],f[205][205],ans,p[10005];
int distf(int i,int j)
{
    return (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
}
int main() {
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        scanf("%d%d%d",&x[i],&y[i],&p[i]);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            if (i!=j && distf(i,j)<=p[i]*p[i])
                f[i][j]=true;
        }
    for (int k=1;k<=n;k++)
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
                f[i][j] |= f[i][k]&f[k][j];
    for (int i=1;i<=n;i++)
    {
        int cnt=0;
        for (int j=1;j<=n;j++)
            if (i==j || f[i][j])
                cnt++;
        ans=max(ans,cnt);
    }
    printf("%d\n",ans);
    return 0;
}
