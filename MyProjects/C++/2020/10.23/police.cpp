//File: police.cpp
//Author: yanyanlongxia
//Date: 2020/10/28
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e3;
int t,a,b,n,out[N];
int main() {
    freopen("police.in","r",stdin);
    freopen("police.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&n,&a,&b);
        for (int i=1;i<=n;i++)
            scanf("%d",&out[i]);
        if (out[a]==b)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}
