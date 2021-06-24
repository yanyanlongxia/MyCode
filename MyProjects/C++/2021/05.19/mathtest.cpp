//Created by yanyanlongxia on 2021/6/23
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
#define lb long double
using namespace std;
const int N=1e3;
__float128 sq3=1.2599210498948732;
void print(__float128 x){
    int a=x;
    printf("%d.",a);
    x-=a;
    x*=10;
    for(int i=1;i<=30;i++){
        x*=10;
        a=x;
        printf("%d",a);
        x-=a;
    }
}
int main() {
    //freopen("mathtest.in","r",stdin);
    //freopen("mathtest.out","w",stdout);
    //int a=sq3*6;
    //printf("%d\n",a);
    //for(int i=3;i<=N;i++)
      //  printf("%f\n",log2(i));
    for(int i=3;i<=N;i++)
        for(int j=3;j<=N;j++){
            ll a=sq3*i;
            printf("%lld\n",a);
            //printf("%lf\n",log2(i));
            //printf("%lf\n",(a*a*a-2*i*i*i)*log2(i)/i);
            //printf("%d\n",a);
            if(fabs((a*a*a-2*i*i*i)*log2(i)/i-j)<0.01)
                printf("%d %d\n",j,i);
        }
    return 0;
}
