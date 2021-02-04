//File: CF1445A.cpp
//Author: yanyanlongxia
//Date: 2020/11/1
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=200;
int t,x,a[N],b[N],n;
bool cmp(int a,int b){
    return a>b;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1445A.out","w",stdout);
    scanf("%d",&t);
    while (t--){
        bool flag=false;
        scanf("%d%d",&n,&x);
        for (int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for (int i=1;i<=n;i++)
            scanf("%d",&b[i]);
        sort(a+1,a+n+1);
        sort(b+1,b+n+1,cmp);
        for (int i=1;i<=n;i++)
            if (a[i]+b[i]>x)
            {
                flag=true;
                puts("No");
                break;
            }
        if (!flag)
            puts("Yes");
    }
    return 0;
}
