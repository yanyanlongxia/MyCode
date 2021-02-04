//
//Author: yanyanlongxia
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],b[100005],dp[100005];
int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
signed main() {
    memset(dp,0x3f3f3f3f3f3f3f,sizeof(dp));
    scanf("%lld",&n);
    //n=read();
    for(int i=1;i<=n;i++)
        //a[i]=read();
        scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)
        //b[i]=read();
        scanf("%lld",&b[i]);
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        for (int j = a[i]; j < i; ++j) {
            dp[i]=min(dp[i],dp[j]+b[j]+b[i]);
        }
    }
    printf("%lld\n",dp[n]);
    return 0;
}