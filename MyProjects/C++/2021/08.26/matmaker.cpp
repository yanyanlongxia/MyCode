//Created by yanyanlongxia on 2021/8/28
//
#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,-0x3f3f3f3f,sizeof(x))
using namespace std;
int n,m;
int main() {
    //freopen("matmaker.in","r",stdin);
    freopen("data.in","w",stdout);
    srand(time(0));
    scanf("%d%d",&n,&m);
    printf("%d %d\n",n,m);
    for(int i=1;i<=n;i++) {
        for (int j = 1; j <= m; j++) {
            printf("%d ", rand());
        }
        printf("\n");
    }
    return 0;
}
