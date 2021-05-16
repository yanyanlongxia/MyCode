//Created by yanyanlongxia on 2021/5/12
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=5e7;
vector<int>v;
int t,n;
int main() {
    //freopen("data.in","r",stdin);
    //freopen("CF1520B.out","w",stdout);
    scanf("%d",&t);
    for(int i=1;i<=9;i++){
        v.push_back(i);
        int now=i;
        for(int j=1;j<=8;j++){
            now=10*now+i;
            v.push_back(now);
        }
    }
    sort(v.begin(),v.end());
    /*
    for(auto i:v)
        printf("%d ",i);
*/

    while (t--){
        scanf("%d",&n);
        int ans=upper_bound(v.begin(),v.end(),n)-v.begin();
        printf("%d\n",ans);
    }

    return 0;
}
