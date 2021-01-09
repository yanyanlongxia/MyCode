//File: thief.cpp
//Author: yanyanlongxia
//Date: 2020/10/23
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e5;
int n,a[N],ans=N;
int main() {
    freopen("thief.in","r",stdin);
    freopen("thief.ans","w",stdout);
    scanf("%d",&n);
    if (!(n&1))
    {
        puts("0");
        return 0;
    }
    for (int i=1;i<=n;i++) {
        scanf("%d", &a[i]);
        a[i]--;
        if (!a[i]){
            puts("0");
            return 0;
        }
    }
    for (int i=1;i<=n;i+=2)
        ans=min(ans,a[i]);
    printf("%d\n",ans);
    return 0;
}
