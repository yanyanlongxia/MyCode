//Created by yanyanlongxia on 2021/1/23
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
using namespace std;
const int N=1e6;
int n,a[N],cnt,t;
int main() {
    freopen("data.in","r",stdin);
    //freopen("T156571.out","w",stdout);
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        cnt=0;
        for(int i=1;i<=n;i++) {
            scanf("%d", &a[i]);
            if(a[i]==0)
                cnt++;
        }
        printf("%d\n",n-cnt);
        for(int i=1;i<=n;i++)
            printf("%d ",1);
        printf("\n");
    }
    return 0;
}
