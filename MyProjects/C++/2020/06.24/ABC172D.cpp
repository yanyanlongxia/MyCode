//
// Created by admin on 2020/6/27.
//
#include<cstdio>
using namespace std;
typedef long long ll;

ll sum(int n) {
    if(n<=1) return n;
    ll ans=0;
    for(ll l=1,r;l<=n;l=r+1) {
        r=n/(n/l);
        ans+=(n/l)*(l+r)*(r-l+1)/2;
    }
    return ans;
}

int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%lld\n",sum(y)-sum(x-1));
    return 0;
}
