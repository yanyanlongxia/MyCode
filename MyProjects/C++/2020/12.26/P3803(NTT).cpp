//File: P3803(NTT).cpp
//Author: yanyanlongxia
//Date: 2020/12/31
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=5e6+5;
const int MOD=998244353;
const int G=3;
int GI,n,m,len,cnt,rev[N << 1],a[N << 1],b[N << 1],c[N << 1];
inline int power(int x,int y){
    int res=1;
    for(;y;y>>=1){
        if(y&1)
            res=1ll*res*x%MOD;
        x=1ll*x*x%MOD;
    }
    return res;
}
void NTT(int *a,int len,int flag){
    for(int i=0;i<len;i++){
        if(i > rev[i])
            swap(a[i],a[rev[i]]);
    }
    for(int i=2;i<=len;i<<=1){
        int gn=power(flag==-1?G:GI, (MOD-1)/i);
        for(int j=0;j<len;j+=i){
            int g=1;
            for(int k=j;k<j+(i>>1);k++){
                int u=a[k];
                int t=1ll*a[k+(i>>1)]*g%MOD;
                a[k]=1ll*(u+t)%MOD;
                a[k+(i>>1)]=1ll*(u-t+MOD)%MOD;
                g=1ll*g*gn%MOD;
            }
        }
    }
    if(flag==-1){
        int len_inv=power(len,MOD-2);
        for(int i=0;i<len;i++)
            a[i]=1ll*len_inv*a[i]%MOD;
    }
}
int main() {
    freopen("data.in","rev",stdin);
    //freopen("P3803(NTT).out","w",stdout);
    GI=power(G,MOD-2);
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int  i=0;i<=m;i++){
        scanf("%d",&b[i]);
    }
    len=1;
    cnt=0;
    while(len<=n+m){
        len<<=1;
        cnt++;
    }
    for(int i=0;i<len;i++)
        rev[i]= (rev[i >> 1] >> 1) | ((i & 1) << (cnt - 1));
    NTT(a,len,1);
    NTT(b,len,1);
    for(int i=0;i<len;i++)
        c[i]=1ll*a[i]*b[i]%MOD;
    NTT(c,len,-1);
    for(int i=0;i<=n+m;i++)
        printf("%d ",c[i]);
    puts("");
    return 0;
}
