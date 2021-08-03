//Created by yanyanlongxia on 2021/7/28
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e5+10;
int n,a[N],sum,res,ans;
bool vali[N*500];
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1884.out","w",stdout);
    vali[0]=true;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    for(int i=1;i<=n;i++)
        for(int j=N;j>=a[i];j--)
            vali[j]|=vali[j-a[i]];
    for(int i=N-10;i>=0;i-=2){
        if(vali[i]&&vali[i/2]){
            res=i;
            break;
        }
    }
    ans=res/2+(sum-res);
    printf("%d\n",ans);
    return 0;
}
