//File: P5019.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>

using namespace std;
int n,d[1000005];
long long sum;
int main() {
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        scanf("%d",&d[i]);
    sum=(long long)d[1];
    for (int i=2;i<=n;i++)
        if(d[i]>d[i-1])
            sum+=d[i]-d[i-1];
    printf("%lld\n",sum);
    return 0;
}
