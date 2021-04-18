//Created by yanyanlongxia on 2021/4/18
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=5e5;
int n,cnt,res[N];
int main() {
    freopen("prime.out","r",stdin);
    freopen("prime12.out","w",stdout);
    scanf("%d",&n);
    int x;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x%12==1)
            res[++cnt]=x;
    }
    printf("%d\n",cnt);
    for(int i=1;i<=cnt;i++)
        printf("%d ",res[i]);

    return 0;
}
