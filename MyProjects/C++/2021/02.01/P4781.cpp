//Created by yanyanlongxia on 2021/2/3
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e4+5;
const int MOD=998244353;
int n,a[N],b[N],k,r[N];
ll ans;
inline int power(int a,int b){
    int res=1;
    for(;b;b>>=1){
        if(b&1)
            res=1ll*res*a%MOD;
        a=1ll*a*a%MOD;
    }
    return res;
}
inline int inv(int x){
    return power(x,MOD-2);
}
void NTT(int *a,int len,int flag){
    for(int i=0;i<len;i++){
        if(i>r[i])
            swap(a[i],a[r[i]]);
    }
    for(int i=2;i<=len;i<<=1){

    }
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P4781.out","w",stdout);
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(int i=1;i<=n;i++){
        int x=1,y=1;
        for(int j=1;j<=n;j++){
            if(j==i)
                continue;
            x=1ll*x*(k-a[j]+MOD)%MOD;
            y=1ll*y*(a[i]-a[j]+MOD)%MOD;
        }
        ans=(1ll*ans+1ll*b[i]*x%MOD*inv(y)%MOD)%MOD;
    }
    printf("%lld\n",ans);
    return 0;
}
