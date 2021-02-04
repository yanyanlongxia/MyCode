//File: maker.cpp
//Author: yanyanlongxia
//Date: 2020/9/21
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int random(int n)
{
    return rand()*rand()%n;
}
signed main() {
    srand(time(0));
    int n=random(10000000)+1;
    int m=1000000000;
    printf("%lld\n",n);
    for (int i=1;i<=n;i++)
        printf("%lld\n",random(2*m+1)-m);
    return 0;
}
