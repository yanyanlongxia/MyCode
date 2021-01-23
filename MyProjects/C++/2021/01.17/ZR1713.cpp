//Created by yanyanlongxia on 2021/1/17
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
using namespace std;
const int N=1e4;
int a[N],n,t,step[N],ans=0;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
bool valid(int state){
    static int tmp[N];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(state&(1<<(n-i-1)))
            tmp[++cnt]=a[i];
    }
    for(int i=2;i<=cnt;i++){
        if(gcd(tmp[i-1],tmp[i])==1)
            return false;
    }
    return true;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1713.out","w",stdout);
    for(int i=1;i<1<<12;i++)
        step[i]=step[i-(i & -i)]+1;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        sort(a+1,a+n+1);
        ans=0;
        for(int i=0;i<1<<n;i++){
            if(valid(i))
                ans=max(ans,step[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
