//Created by yanyanlongxia on 2021/8/24
//
#include <bits/stdc++.h>
#define int long long
#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,-0x3f3f3f3f,sizeof(x))
using namespace std;
const int N=20000;
int n,a[N],sum,sqsum;
int T;
long double pore[N],poji,da[N],ds;
signed main() {
    //freopen("data.in","r",stdin);
    //freopen("matht.out","w",stdout);
    srand(time(0));
    scanf("%lld",&T);
    while (T--){
        n=rand()%10+1;
        sum=0;poji=1.0;sqsum=0;ds=0;
        for(int i=1;i<=n;i++) {
            a[i] = rand() % 10 + 1;
            sum+=a[i];
            sqsum+=a[i]*a[i];
            pore[i]= pow(a[i],1.0/n);
            poji*=pore[i];
            da[i]=1.0/a[i];
            ds+=da[i];
        }
        int sua=sum/n;//算术平均值
        int jia=poji;//几何平均值
        int era= pow(sqsum/n,0.5);//二次平均值
        int tia=double(n)/ds;//调和平均值
        int c1= abs(jia-tia),c2= abs(era-sua),c3= abs(sua-jia);
        printf("%lld\n",n);
        for(int i=1;i<=n;i++)
            printf("%lld ",a[i]);
        puts("");
        printf("%lld %lld %lld %lld ",sua,jia,era,tia);
        if (c1<c2&&c2<c3)
            printf("True\n");
        else
            printf("False\n");
    }
    return 0;
}
