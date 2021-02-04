//
// Created by admin on 2020/8/2.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,d,x,y,ans;
signed main()
{
    scanf("%lld%lld",&n,&d);
    d=labs(d*d);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld%lld",&x,&y);
        x=labs(x*x);y=labs(y*y);
        if(x+y<=d)
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}