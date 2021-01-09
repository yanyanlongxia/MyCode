//File: ZR360.cpp
//Author: yanyanlongxia
//Date: 2021/1/3
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
long long a,b,c;
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR360.out","w",stdout);
    scanf("%lld%lld%lld",&a,&b,&c );
    if(a<3||b<3||c<3)
        printf("%d\n",0);
    else
        printf("%lld\n",(a-2)*(b-2)*(c-2));
    return 0;
}
