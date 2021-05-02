//Created by yanyanlongxia on 2021/5/2
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
int t,r,b,d;
int main() {
    //freopen("data.in","r",stdin);
    //freopen("CF1519A.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&r,&b,&d);
        if(r<b)
            swap(r,b);
        int a=r/b;
        if(a*b!=r)
            a++;
        if(a-1<=d)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
