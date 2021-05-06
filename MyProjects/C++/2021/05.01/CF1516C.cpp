//Created by yanyanlongxia on 2021/5/6
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e7;
int n,a[N],tbit,sum;
bool dp[N];
int main() {
    //freopen("data.in","r",stdin);
    //freopen("CF1516C.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
        tbit|=a[i];
    }
    if(sum&1){
        puts("0");
        return 0;
    }
    sum/=2;
    dp[0]=true;
    for(int i=1;i<=n;i++)
        for(int j=sum;j>=a[i];j--)
            if(dp[j-a[i]])
                dp[j]=true;
    if(!dp[sum]){
        puts("0");
        return 0;
    }
    int lbit=tbit & -tbit;
    puts("1");
    for(int i=1;i<=n;i++)
        if(a[i]&lbit){
            printf("%d\n",i);
            return 0;
        }
    return 0;
}
