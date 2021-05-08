//Created by yanyanlongxia on 2021/5/8
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6;
int n,a[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("test.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        printf("%d ",a[i]%200);
    }
    puts("");
    return 0;
}
