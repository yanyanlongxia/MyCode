//Created by yanyanlongxia on 2021/7/23
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6;
int n,m,q,a[N],b[N],opt,del,ans;


bool check1(int x) {
    //int rk1 = lower_bound(a + 1, a + n + 1, x) - a + lower_bound(b + 1, b + m + 1, x) - b;
    int rk = upper_bound(a + 1, a + n + 1, x) - a + upper_bound(b + 1, b + n + 1, x) - b;
    if (rk>(n+m)/2+1)
        return true;
    else
        return false;
}
int ji() {
    int l = 0, r = n;
    while (r - l > 1) {
        int mid = l + r >> 1;
        if (check1(a[mid])==1)
            r = mid;
        else
            l = mid;
    }
    l = 0, r = m;
    while (r - l > 1) {
        int mid = l + r >> 1;
        if (check1(b[mid])==1)
            r = mid;
        else
            l = mid;
    }
    return r;
}
int o(){

}
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1956.out","w",stdout);
    scanf("%d%d%d",&n,&m,&q);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&b[i]);
    while (q--){
        scanf("%d",&opt);
        scanf("%d",&del);
        if (opt==2)
            del*=-1;
        if ((n+m)&1)
            ans=ji();
        else
            ans=o();
        printf("%d\n",ans);
    }
    return 0;
}
