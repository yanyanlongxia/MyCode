//Created by yanyanlongxia on 2021/5/13
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e7,bs=2e5+5;
int n,a[N],t;
ll num[N];
ll ans;
vector<int>ap;
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1520D.out","w",stdout);
    scanf("%d",&t);
    while (t--){
        ap.clear();
        ans=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            a[i]-=i;
            a[i]+=bs;
            num[a[i]]++;
            ap.push_back(a[i]);
        }
        sort(ap.begin(),ap.end());
        ap.erase(unique(ap.begin(),ap.end()),ap.end());
        for(int i=0;i<ap.size();i++){
            ans+=num[ap[i]]*(num[ap[i]]-1)/2;
            num[ap[i]]=0;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
