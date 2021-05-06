//Created by yanyanlongxia on 2021/5/5
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e6;
int t,n,k,a[N];
int main() {
    //freopen("data.in","r",stdin);
    //freopen("CF1516A.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=1;i<n;i++){
            if(k>=a[i]){
                k-=a[i];
                a[n]+=a[i];
                a[i]=0;
            } else{
                a[i]-=k;
                a[n]+=k;
                break;
            }
        }
        for(int i=1;i<=n;i++)
            printf("%d ",a[i]);
        puts("");
    }
    return 0;
}
