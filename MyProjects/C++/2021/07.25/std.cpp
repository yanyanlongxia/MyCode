//Created by yanyanlongxia on 2021/7/30
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;

int main() {
    freopen("P.out","r",stdin);
    freopen("std.out","w",stdout);
    string s;
    cin>>s;
    int n,m;
    for(auto i:s)
        n+=i-'0';
    m=s.size();
    printf("%d %d\n",n,m);
    return 0;
}
