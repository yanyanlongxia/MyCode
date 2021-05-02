//Created by yanyanlongxia on 2021/5/1
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
int a,b,c;
int main() {
    //freopen("abc199A.in","r",stdin);
    //freopen("abc199A.out","w",stdout);
    scanf("%d%d%d",&a,&b,&c);
    if(a*a+b*b<c*c)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
