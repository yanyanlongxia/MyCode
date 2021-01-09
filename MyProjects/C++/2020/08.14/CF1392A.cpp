//File: CF1392A.cpp
//Author: yanyanlongxia
//Date: 2020/8/16
//
#include <bits/stdc++.h>

using namespace std;
int t,n,a[1000005];
bool check()
{
    for(int i=1;i<n;i++)
        if(a[i+1]!=a[i])
            return true;
    return false;
}
int main() {
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        for (int i = 1; i <= n; ++i) {
            scanf("%d",&a[i]);
        }
        if(check())
            puts("1");
        else
            printf("%d\n",n);
    }
    return 0;
}
