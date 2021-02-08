//Created by yanyanlongxia on 2021/2/5
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
int n,m;
int main() {
    freopen("fib.in","r",stdin);
    //freopen("fib.out","w",stdout);
    srand(time(NULL));
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        int cnt[3];
        cnt[0]=a;cnt[1]=b;
        if(a%m==0 || b%m==0){
            printf("%d\n",a%m==0?0:1);
            continue;
        }
        bool flag=false;
        for(int j=2;j<=50000;j++){
            cnt[j%3]=(cnt[(j-1)%3]+cnt[(j-2)%3])%m;
            if(cnt[j%3]%m==0){
                printf("%d\n",j);
                flag=true;
                break;
            }
        }
        if (!flag)
            printf("%d\n",-1);
    }
    return 0;
}
