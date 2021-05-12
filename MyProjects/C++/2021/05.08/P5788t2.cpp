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
const int N=1e8;
int n,a[N],st[N],top,ans[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("P5788t2.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=n;i>=1;i--){
        while(top&&a[i]>=a[st[top]])
            top--;
        ans[i]=st[top];
        st[++top]=i;
    }
    for(int i=1;i<=n;i++)
        printf("%d ",ans[i]);
    puts("");
    return 0;
}
