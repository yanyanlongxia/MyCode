//File: CF1435A.cpp
//Author: yanyanlongxia
//Date: 2020/10/25
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e5;
int t,n,a[N],b[N];
int gcd(int x, int y){
    return !y ? x : gcd(y, x % y);
}
inline int lcm(int x, int y){
    return x * y/gcd(x,y);
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1435A.out","w",stdout);
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        for (int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for (int i=1;i<=n/2;i++){
            int l=lcm(a[i],a[n-i+1]);
            b[i]=-1*(l/a[i]);
            b[n-i+1]=l/a[n-i+1];
        }
        for (int i=1;i<=n;i++)
            printf("%d ",b[i]);
        puts("");
    }
}
