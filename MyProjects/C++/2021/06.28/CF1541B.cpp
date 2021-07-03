//Created by yanyanlongxia on 2021/7/3
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6,B=1e5;
vector<int>app;
int n,a[N],T;
ll s[N],t[N],ans;
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1541B.out","w",stdout);
    scanf("%d",&T);
    while (T--){
        ans=0;
        app.clear();
        scanf("%d",&n);
        for(int i=1;i<=n;i++) {
            scanf("%d", &a[i]);
            app.push_back(a[i]-i);
            s[a[i]-i]++;
            t[i-a[i]+3*B]++;
        }
        sort(app.begin(),app.end());
        app.erase(unique(app.begin(),app.end()),app.end());
        for(int i=0;i<app.size();i++){
            ans+=s[app[i]]*t[app[i]+3*B];
            s[app[i]]=0;
            t[app[i]+3*B]=0;
        }
        printf("%lld\n",ans/2);
    }
    return 0;
}
