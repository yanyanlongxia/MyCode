//File: CF1445B.cpp
//Author: yanyanlongxia
//Date: 2020/11/1
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int t,a,b,c,d;
vector<int>res;
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1445B.out","w",stdout);
    scanf("%d",&t);
    while (t--){
        res.clear();
        scanf("%d%d%d%d",&a,&b,&c,&d);
        res.push_back(a+b);
        res.push_back(c+d);
        res.push_back(a+c+2);
        sort(res.begin(),res.end());
        printf("%d\n",res[1]);
    }
    return 0;
}
