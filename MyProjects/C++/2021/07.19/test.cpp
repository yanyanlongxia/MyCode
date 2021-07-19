#include<bits/stdc++.h>
#define int long long
#define lowbit(x) x&(-x)
using namespace std;
const int N=2e5+5,mod=1e9+7;
int n,m,a[N],b[N];
struct node{
    int len,cnt;
    node operator+(const node b){
        if(len<b.len) return b;
        if(len==b.len) return (node){len,(cnt+b.cnt)%mod};
        return (node){len,cnt};
    }
}c[N],f1[N],f2[N],ans;
void modify1(int x,node y){
    for(int i=x;i<=n;i+=lowbit(i)) c[i]=c[i]+y;
}
node query1(int x){
    node ans=(node){0,0};
    for(int i=x;i;i-=lowbit(i)) ans=ans+c[i];
    return ans;
}
void modify2(int x,node y){
    for(int i=x;i;i-=lowbit(i)) c[i]=c[i]+y;
}
node query2(int x){
    node ans=(node){0,0};
    for(int i=x;i<=n;i+=lowbit(i)) ans=ans+c[i];
    return ans;
}
int mul(int x,int n,int mod){
    int ans=mod!=1;
    for(x%=mod;n;n>>=1,x=x*x%mod)
        if(n&1) ans=ans*x%mod;
    return ans;
}
signed main(){
    freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]),b[i]=a[i];
    sort(b+1,b+1+n),m=unique(b+1,b+1+n)-b-1;
    for(int i=1;i<=n;i++) a[i]=lower_bound(b+1,b+1+m,a[i])-b;
    for(int i=1;i<=n;i++){
        node v=query2(a[i]+1);
        if(!v.cnt) v.cnt=1;
        v.len++,f2[i]=v,modify2(a[i],v);
    }
    for(int i=1;i<=n;i++) c[i]=(node){0,0};
    for(int i=1;i<=n;i++){
        node v=query1(a[i]-1);
        if(!v.cnt) v.cnt=1;
        v.len++,f1[i]=v,modify1(a[i],v);
    }
    for(int i=1;i<=n;i++)
        ans=ans+(node){f1[i].len+f2[i].len-1,f1[i].cnt*f2[i].cnt%mod};
    printf("%lld %lld\n",ans.len,ans.cnt*mul(2,n-ans.len,mod)%mod);
    return 0;
}
