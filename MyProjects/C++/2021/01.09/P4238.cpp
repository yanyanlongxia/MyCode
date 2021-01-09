//File: P4238.cpp
//Author: yanyanlongxia
//Date: 2021/1/9
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=5e6+5;
const int MOD=998244353;
const int G=3;

int Gi,n;
int ff[N<<1],gg[N<<1],r[N<<1];
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
    for(int i=0;i<len;i++) {
        if (i < r[i])
            swap(a[i], a[r[i]]);
    }
    for(int i=2;i<=len;i<<=1){
        int gn=power(flag==1?G:Gi,(MOD-1)/i);
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
        int len_inv=inv(len);
        for(int i=0;i<len;i++)
            a[i]=1ll*a[i]*len_inv%MOD;
    }
}
void getinv(int *a,int *res,int n){
    static int tmp[N<<1];
    if(n==1){
        res[0]=inv(a[0]);
        return;
    }
    getinv(a,res,n+1>>1);
    int len=1,cnt=0;
    while(len<(n<<1)){
        len<<=1;
        cnt++;
    }
    for(int i=0;i<len;i++)
        r[i]=(r[i>>1]>>1)|((i&1)<<(cnt-1));
    for(int i=0;i<len;i++)
        tmp[i]=a[i];
    for(int i=n;i<len;i++)
        tmp[i]=0;
    NTT(tmp,len,1);
    NTT(res,len,1);
    for(int i=0;i<len;i++)
        res[i]=1ll*(2ll-1ll*res[i]*tmp[i]%MOD+MOD)%MOD*res[i]%MOD;
    NTT(res,len,-1);
    for(int i=n;i<len;i++)
        res[i]=0;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P4238.out","w",stdout);
    Gi=inv(G);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&ff[i]);
    getinv(ff,gg,n);
    for(int i=0;i<n;i++)
        printf("%d ",gg[i]);
    return 0;
}
