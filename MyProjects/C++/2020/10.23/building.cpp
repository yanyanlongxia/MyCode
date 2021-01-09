//File: building.cpp
//Author: yanyanlongxia
//Date: 2020/10/28
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e6;
int n,m,a[N];
inline int ask(int l,int r){
    int res=0;
    for (int i=l;i<r;i++)
        if (a[i]>a[i+1])
            res+=a[i]-a[i+1];
    res+=a[r];
    return res;
}
inline void add(int l,int r,int k){
    for (int i=l;i<=r;i++)
        a[i]+=k;
}
int main() {
    freopen("building.in","r",stdin);
    freopen("building.out","w",stdout);
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int opt,x,y,z;
    while (m--){
        scanf("%d",&opt);
        if (opt==1){
            scanf("%d%d%d",&x,&y,&z);
            add(x,y,z);
        } else
        {
            scanf("%d%d",&x,&y);
            printf("%d\n",ask(x,y));
        }
    }
    return 0;
}
