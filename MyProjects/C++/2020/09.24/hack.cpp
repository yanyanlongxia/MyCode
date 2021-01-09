//File: hack.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int n,a[1000005],ans;
int main() {
    freopen("hack.in","r",stdin);
    freopen("hack.out","w",stdout);
    scanf("%d",&n);
    ans=n;
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (int i=1;i<n;i++)
    {
        int now1=a[i],now2=a[i];
        for (register int j=i+1;j<=n;j++)
        {
            now1^=a[j];
            now2&=a[j];
            if (now1==now2)
                ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
