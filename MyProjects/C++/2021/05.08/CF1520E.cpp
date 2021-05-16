//Created by yanyanlongxia on 2021/5/14
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
int n,a[N],m,t;
ll ans,cow[N],sum[N];
char s[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1520E.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        ans=1ll<<60ll;
        m=0;
        scanf("%d",&n);
        scanf("%s",(s+1));
        for(int i=1;i<=n;i++){
            if(s[i]=='*')
                cow[++m]=i;
        }
        if(m==0){
            puts("0");
            continue;
        }
        for(int i=1;i<=m;i++)
            sum[i]=sum[i-1]+cow[i];
        for(ll i=1;i<=m;i++){
            ll res=0;
            res+=(i-1)*cow[i]-sum[i-1]-(i-1)*i/2;
            res+=(sum[m]-sum[i])-(m-i)*cow[i]-(m-i)*(m-i+1)/2;
            ans=min(ans,res);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
