//File: P4071.cpp
//Author: yanyanlongxia
//Date: 2020/8/21
//[SDOI2016]排列计数
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mo=1e9+7;
int t,n,m,jie[1000005],sum[1000005],inv[1000005],tmp=1;
int power(int a,int b)
{
    int ans=1;
    for(;b;b>>=1)
    {
        if(b&1)
            ans=ans*a%mo;
        a=a*a%mo;
    }
    return ans;
}
signed main() {
    jie[0]=jie[1]=inv[0]=inv[1]=1;
    sum[0]=1;
    for(int i=2;i<=1e6;i++)
    {
        jie[i]=jie[i-1]*i%mo;
        inv[i]=power(jie[i],mo-2);
    }
    for (int i = 1; i <= 1e6; ++i) {
        if(i & 1)
        {
            tmp=(tmp-inv[i])%mo;
            sum[i]=tmp;
        }else
        {
            tmp=(tmp+inv[i])%mo;
            sum[i]=tmp;
        }
    }
    scanf("%lld",&t);
    while (t--)
    {
        scanf("%lld%lld",&n,&m);
        printf("%lld\n",(jie[n]*inv[m]%mo*inv[n-m]%mo*jie[n-m]%mo*sum[n-m]%mo+mo)%mo);
    }
    return 0;
}
