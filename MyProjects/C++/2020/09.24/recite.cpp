//File: recite.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int n,a[1000005],first[1000005],ans;
map<int,int>m;
int main() {
    freopen("recite.in","r",stdin);
    freopen("recite.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        scanf("%d", &a[i]);
        m[a[i]-i+1]++;
        first[i]=a[i]-i+1;
    }
    for (int i=1;i<=n;i++)
        ans=max(ans,m[first[i]]);
    ans=n-ans;
    printf("%d\n",ans);
    return 0;
}
