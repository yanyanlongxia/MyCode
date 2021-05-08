//Created by yanyanlongxia on 2021/5/8
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e6;
int n,a[N];
ll exn[N],ans;
int main() {
    freopen("data.in","r",stdin);
    //freopen("abc200C.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        a[i]%=200;
        exn[a[i]]++;
    }
    for(int i=0;i<200;i++){
        ans+=exn[i]*(exn[i]-1ll)/2ll;
    }
    printf("%lld\n",ans);
    return 0;
}
