//Created by yanyanlongxia on 2021/1/23
//
#include <bits/stdc++.h>

#define ull unsigned long long
#define clm(x) memset(x,0,sizeof(x))
using namespace std;
const int N=3e6;
int n;
ull suf[N];
ull ans;
pair<ull,ull>a[N];
int main() {
    ull x,y;
    freopen("data.in","r",stdin);
    //freopen("T156574.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%llu",&x);
        a[i].first=x;
        a[i].second=i;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        suf[i]=max(a[i].second,suf[i+1]);
    for(int i=1;i<=n;i++){
        ans=max(ans,1llu*a[i].first*(a[i].second+suf[i+1]));
    }
    printf("%llu\n",ans);

    return 0;
}
