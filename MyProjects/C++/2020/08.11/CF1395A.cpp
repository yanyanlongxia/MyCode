//File: CF1395A.cpp
//Author: yanyanlongxia
//Date: 2020/8/12
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,color[4];
signed main() {
    scanf("%lld",&t);
    while (t--)
    {
        int cnt=0;
        for(int i=0;i<4;i++)
            scanf("%lld",&color[i]);
        for(int i=0;i<4;i++)
            if(color[i]%2==0)
                cnt++;
        sort(color,color+2);
        if(color[0]<0)
        {
            puts("No");
            continue;
        }
        if(cnt==4 || cnt==3)
        {
            puts("Yes");
            continue;
        }
        if(cnt==2)
        {
            puts("No");
            continue;
        }
        if(color[0]<1)
        {
            puts("No");
            continue;
        }
        puts("Yes");
    }
    return 0;
}