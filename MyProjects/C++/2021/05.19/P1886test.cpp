//Created by yanyanlongxia on 2021/6/28
//
//fail:wa

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e7;
int n,a[N],sum[N],k,mn=INF,mx=-INF;
int main() {
    freopen("data.in", "r", stdin);
    //freopen("P1886test.out","w",stdout);
    scanf("%d%d", &n,&k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        sum[i]=sum[i-1]+a[i];
    }
    for(int i=1;i<=n-k+1;i++){
        int x=sum[i+k-1]-sum[i-1];
        mn=min(mn,x);
        mx=max(mx,x);
    }
    printf("%d\n%d\n",mn,mx);
    return 0;
}

