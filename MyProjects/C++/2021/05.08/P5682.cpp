//Created by yanyanlongxia on 2021/5/18
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e6;
int n,a[N],b[N],ans;
int main() {
    freopen("data.in","r",stdin);
    //freopen("P5682.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &a[i]);
    }
    sort(a+1,a+n+1);
    int cnt=1;
    for(int i=2;i<=n;i++){
        if (a[i]!=a[i-1])
            cnt++;
    }
    if(cnt>=3){
        int tot=1;
        for(int i=n-1;i>=1;i--){
            if(a[i]!=a[i+1]){
                tot++;
                if(tot==3){
                    printf("%d\n",max(a[i],a[n]%a[i+1]));
                    break;
                }
            }
        }
    }else{
        if(cnt==2){
            if(a[1]==a[2])
                puts("-1");
            else
                printf("%d\n",a[1]);
        }else
            puts("-1");
    }
    return 0;
}
