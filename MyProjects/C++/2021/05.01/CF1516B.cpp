//Created by yanyanlongxia on 2021/5/6
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e6;
int t,n,a[N],pre[N];
int main() {
    //freopen("data.in","r",stdin);
    //freopen("CF1516B.out","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            pre[i]=pre[i-1]^a[i];
        }
        bool possi=false;
        for(int i=1;i<=n;i++){
            if(pre[i]==(pre[n]^pre[i])){
                possi=true;
                break;
            }
            if(!(pre[n]^pre[i]))
                for(int j=i+1;j<n;j++)
                    if(pre[i]==(pre[n]^pre[j])){
                        possi=true;
                        break;
                    }
        }
        if(possi)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
