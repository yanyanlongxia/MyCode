//File: game.cpp
//Author: yanyanlongxia
//Date: 2020/9/20
//
#include <bits/stdc++.h>

using namespace std;
int n,a[1000005],gcdmin,buc[1000005],maxn,ans;
int main() {
    freopen("game.in","r",stdin);
    freopen("game.out","w",stdout);
    scanf("%d%d",&n,&gcdmin);
    for (int i=1;i<=n;i++) {
        scanf("%d", &a[i]);
        for (register int j=1;j<=sqrt(a[i]);j++)
            if (a[i]%j==0)
            {
                buc[a[i]/j]++;
                buc[j]++;
                maxn=max(maxn,max(j,a[i]/j));
            }
    }
    for (int i=gcdmin;i<=maxn;i++) {
        ans = max(ans, buc[i]);
        printf("%d\n",buc[i]);
    }
    printf("%d\n",ans);
    return 0;
}
