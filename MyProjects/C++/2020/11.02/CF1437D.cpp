//File: CF1437D.cpp
//Author: yanyanlongxia
//Date: 2020/11/2
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=3e5;
int t,n,a[N],ans;
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1437D.out","w",stdout);
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        for (int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        ans=1;
        int ta=0,lea=1,tot=0;
        for (int i=3;i<=n;i++){
            tot++;
            if (a[i]<a[i-1]) {
                ta++;
                if (ta>=lea){
                    lea=tot;
                    ans++;
                    tot=0;
                    ta=0;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
