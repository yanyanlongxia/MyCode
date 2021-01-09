//File: P3723.cpp
//Author: yanyanlongxia
//Date: 2021/1/9
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=5e6+5;
const int MOD=998244353;
const int G=3;
int Gi,n,m,a[N<<1],b[N<<1],r[N<<1],suma,sumb,sqa,sqb,A[N<<1],B[N<<1],C[N<<1],ans=0x3f3f3f3f;
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
void mul(int *a,int *b,int *res,int n,int m){
    static int f[N<<1],g[N<<1];
    memset(f,0,sizeof(f));
    memset(g,0,sizeof(g));
    int len=1,cnt=0;
    while(len<=(n+m)){
        len<<=1;
        cnt++;
    }
    for(int i=0;i<len;i++)
        r[i]=(r[i>>1]>>1)|((i&1)<<(cnt-1));
    for(int i=0;i<=n;i++)
        f[i]=a[i];
    for(int i=0;i<=m;i++)
        g[i]=b[i];
    NTT(f,len,1);
    NTT(g,len,1);
    for(int i=0;i<len;i++)
        res[i]=1ll*f[i]*g[i]%MOD;
    NTT(res,len,-1);

}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3723.out","w",stdout);
    Gi=inv(G);
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=n;i++) {
        scanf("%d", &a[i]);
        suma+=a[i];
        sqa+=a[i]*a[i];
    }
    for(int i=1;i<=n;i++) {
        scanf("%d", &b[i]);
        sumb+=b[i];
        sqb+=b[i]*b[i];
    }
    for(int i=1;i<=n;i++){
        A[i]=a[i];
        B[i]=b[i];
    }
    reverse(A+1,A+n+1);
    for(int i=1;i<=n;i++){
        B[i+n]=B[i];
    }
    mul(A,B,C,n,2*n);
    for(int i=n+1;i<=2*n+1;i++){
        for(int j=-m;j<=m;j++)
            ans=min(ans,sqa+sqb+2*(sumb-suma)*j-2*C[i]+j*j*n);
    }
    printf("%d\n",ans);
    return 0;
}
