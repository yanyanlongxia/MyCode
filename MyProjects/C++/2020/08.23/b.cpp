//File: b.cpp
//Author: yanyanlongxia
//Date: 2020/9/12
//
#include <bits/stdc++.h>

using namespace std;
int n,a[1000005];
long long sumf[1000005],sumb[1000005];
double ans=1e9;
int main() {
    //freopen("b.in","r",stdin);
    //freopen("b.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (int i=1;i<=n;i++)
        sumf[i]=sumf[i-1]+a[i];
    for (int i=n;i>=1;i--)
        sumb[i]=sumb[i+1]+a[i];
    for (int i=1;i<=n>>1;i++)
        for(int j=1;j<=n>>1;j++)
            ans=min(ans,(double)(sumb[j]+sumf[i])/(i+j));
    printf("%.3f\n",ans);
    return 0;
}
