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
int n;
int main() {
    //freopen("abc200A.in","r",stdin);
    //freopen("abc200A.out","w",stdout);
    scanf("%d",&n);
    n--;
    printf("%d\n",(n/100)+1);
    return 0;
}
