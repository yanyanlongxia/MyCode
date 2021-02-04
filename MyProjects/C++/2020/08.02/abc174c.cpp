//File: abc174c.cpp
//Author: yanyanlongxia
//Date: 2020/8/3
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,i,now;
signed main() {
    scanf("%d",&n);
    while(i<=10000000)
    {
        i++;
        now=(now*10+7)%n;
        if(now==0)
        {
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}