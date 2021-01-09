//File: P4721.cpp
//Author: yanyanlongxia
//Date: 2021/1/2
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=5e6+5;
const int MOD=998244353;
const int G=3;
int Gi,n,rev[N << 1];
int f[N],g[N];
int power(int x,int y){
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
        int gn=power(flag==1?G:Gi,(MOD-1)/i);
        for(int j=0;j<len;j+=i){
            int g=1;
            for(int k=j;k<j+(i>>1);k++){
                int u=a[k];
                int t=1ll*g*a[k+(i>>1)]%MOD;
                a[k]=1ll*(u+t)%MOD;
                a[k+(i>>1)]=1ll*(u-t+MOD)%MOD;
                g=1ll*g*gn%MOD;
            }
        }
    }
    if(flag==-1){
        int len_inv=power(len,MOD-2);
        for(int i=0;i<len;i++)
            a[i]=1ll*a[i]*len_inv%MOD;
    }
}
void mul(int *a,int *b,int *res,int len,int cnt){
    for(int i=0;i<len;i++)
        rev[i]= (rev[i >> 1] >> 1) | ((i & 1) << (cnt - 1));
    NTT(a,len,1);
    NTT(b,len,1);
    for(int i=0;i<len;i++)
        res[i]=1ll*a[i]*b[i]%MOD;
    NTT(res,len,-1);
}
void solve(int *f,int *g,int l,int r){
    static int a[N<<1],b[N<<1],c[N<<1];
    if(l==r)
        return;
    int mid=l+r>>1,size=r-l+1;
    solve(f,g,l,mid);
    int len=1,cnt=0;
    while(len<size){
        len<<=1;
        cnt++;
    }
    for(int i=0;i<=len;i++)
        a[i]=b[i]=0;
    for(int i=l;i<=mid;i++)
        a[i-l]=f[i];
    for(int i=1;i<=r-l;i++)
        b[i-1]=g[i];
    mul(a,b,c,len,cnt);
    for(int i=mid+1;i<=r;i++)
        f[i]=(f[i]+c[i-l-1])%MOD;
    solve(f,g,mid+1,r);
}
int main() {
    freopen("data.in","rev",stdin);
    //freopen("P4721.out","w",stdout);
    Gi=power(G,MOD-2);
    f[0]=1;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        scanf("%d",&g[i]);
    solve(f,g,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",f[i]);
    return 0;
}
