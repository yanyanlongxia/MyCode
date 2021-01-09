//File: test.cpp
//Author: yanyanlongxia
//Date: 2020/10/23
//
#include <bits/stdc++.h>

#define int long long
using namespace std;
int n=1e8;
signed main() {
    //freopen("test.in","r",stdin);
    //freopen("test.out","w",stdout);
    for (int i=1;i<=n;i+=(int)1)
    {
        int tmp=i%(int)(1e5+5);
        cout<<tmp;
    }
    return 0;
}
