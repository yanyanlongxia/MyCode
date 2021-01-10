//File: ZR1708.cpp
//Author: yanyanlongxia
//Date: 2021/1/10
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int base=162;
int t;
ll n;
inline bool check(ll i){
    ll lsq=0;
    for(ll b=i;b;b/=10ll){
        lsq+=b%10ll;
    }
    return lsq+i==n;
}
int main() {
    //freopen("ZR1708.in","r",stdin);
    //freopen("ZR1708.out","w",stdout);
    scanf("%d", &t);
    while(t--){
        bool flag=0;
        scanf("%lld",&n);
        for(ll i=max(1ll,n-162);i<n;i++){
            if(check(i)){
                printf("%lld\n", i);
                flag=1;
                break;
            }
        }
        if(!flag)
            printf("-1\n");
    }
    return 0;
}
