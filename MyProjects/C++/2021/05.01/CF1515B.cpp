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
int t,n;
map<int,bool>m;
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1515B.out","w",stdout);
    scanf("%d",&t);
    for(int i=2;i<=1e9;i*=2){
        m[i]=true;
    }
    while(t--){
        scanf("%d",&n);
        if(m[n])
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
