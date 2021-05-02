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
const int N=1e5;
int n,a[N],b[N],l=-INF,r=INF,res;
int main() {
    //freopen("data.in","r",stdin);
    //freopen("abc199B.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        scanf("%d",&b[i]);
    for(int i=1;i<=n;i++){
        l=max(l,a[i]);
        r=min(r,b[i]);
    }
    res=r-l+1;
    if(res<0)
        res=0;
    printf("%d\n",res);
    return 0;
}
