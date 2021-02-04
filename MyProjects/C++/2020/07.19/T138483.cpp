#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mo=998244353;
int n,a[200010],tot[200010],s[200010];
int jc[200010],inv[200010];
int power(int x){
    int p=mo-2;
    int ans=1;
    while(p){
        if(p&1)
            ans=ans*x%mo;
        x=x*x%mo;
        p>>=1;
    }
    return ans;
}
int C(int n,int m){
    if(n==m)
        return 1;
    return jc[n]*inv[m]*inv[n-m]%mo;
}
signed main(){
    int ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        tot[a[i]]++;
    }
    for(int i=1;i<200005;i++)
        s[i]=s[i-1]+tot[i];
    jc[0]=0;
    jc[1]=inv[1]=1;
    for(int i=2;i<200005;i++)
    {
        jc[i]=jc[i-1]*i%mo;
        inv[i]=power(jc[i]);
    }
    for(int i=1;i<200005;i++)
        if(tot[i]>1)
        {
            ans=(ans+C(tot[i],2)*(s[i*2-1]-tot[i])%mo)%mo;  //排列组合+乘法原理
            if(tot[i]>2)
                ans=(ans+C(tot[i],3))%mo;
        }
    cout<<ans;
    return 0;
}