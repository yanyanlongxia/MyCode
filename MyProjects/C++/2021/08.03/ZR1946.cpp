//Created by yanyanlongxia on 2021/8/7
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6;
double s,a[N],ans;
int n;
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1946.out","w",stdout);
    scanf("%lf",&s);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lf",&a[i]);
    }
    sort(a+1,a+1+n);
    ans=s;
    for(int i=1;i<=n;i++){
        /*
        if(a[i]<=1){
            ans+=a[i];
        }else{
            if(ans*a[i]<ans+a[i])
                ans+=a[i];
            else
                ans*=a[i];
        }
         */
        ans= max(ans+a[i],ans*a[i]);
    }
  printf("%lf\n",ans);
    return 0;
}
