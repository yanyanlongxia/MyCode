//Created by yanyanlongxia on 2021/8/11
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=100;
int n,a[N],b[N],minn=0x3f3f3f3f;
int main() {
    freopen("data.in","r",stdin);
    //freopen("ACM_C.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d%d", &a[i], &b[i]);
        minn= min(minn,b[i]/a[i]);
    }
    printf("%d\n",minn);
    return 0;
}
