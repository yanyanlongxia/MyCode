//Created by yanyanlongxia on 2021/7/23
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=2e3;
int n,s,a[N],sum[N];
bool ma[N][N];
int gcd(int x,int y){
    return (!y)?x: gcd(y,x%y);
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1955.out","w",stdout);
    scanf("%d%d",&n,&s);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=a[i];j++) {
            ma[i][j] = true;
            sum[j]++;
        }
    int su=0,u=0;
    while(su+n-sum[u+1]<=s){
        u++;
        su+=n-sum[u];
    }
    if(s!=su) {
        int mum = n-sum[u + 1], son = s - su;
        int com = gcd(mum, son);
        mum /= com;
        son /= com;
        printf("%d+%d/%d\n",u,son,mum);
    }else {
        printf("%d\n", u);
    }
    return 0;
}
