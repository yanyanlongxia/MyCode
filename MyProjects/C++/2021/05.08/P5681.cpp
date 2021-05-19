//Created by yanyanlongxia on 2021/5/18
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
ll a,b,c;
int main() {
    //freopen("P5681.in","r",stdin);
    //freopen("P5681.out","w",stdout);
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a*a>b*c)
        puts("Alice");
    else
        puts("Bob");
    return 0;
}
