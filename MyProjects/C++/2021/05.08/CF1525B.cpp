//Created by yanyanlongxia on 2021/5/16
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e5;
int t,n,a[N];
bool ion[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1525B.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        bool al=true,an=true;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            ion[i]=(i==a[i]);
            if(i!=a[i])
                al=false;
            if(i==a[i])
                an=false;
        }
        if(a[1]==n&&a[n]==1) {
            puts("3");
            continue;
        }
        if(al){
            puts("0");
            continue;
        }
        if(an){
            puts("2");
            continue;
        }
        if(ion[1]||ion[n]){
            puts("1");
            continue;
        }else
            puts("2");
    }
    return 0;
}
