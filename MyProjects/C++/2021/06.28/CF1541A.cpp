//Created by yanyanlongxia on 2021/7/3
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=500;
int t,n,a[N];
int main() {
    //freopen("data.in","r",stdin);
    //freopen("CF1541A.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            a[i]=i;
        for(int i=1;i<n/2*2;i+=2){
            swap(a[i],a[i+1]);
        }
        if(n&1)
            swap(a[n-1],a[n]);
        for(int i=1;i<=n;i++)
            printf("%d ",a[i]);
        puts("");
    }
    return 0;
}
