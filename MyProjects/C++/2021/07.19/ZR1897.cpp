//Created by yanyanlongxia on 2021/7/19
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=5e3;
const int MOD=1e9+7;
int n,a[N],t[2][N][N];//前后、选几个、最后一个是什么
vector<int>v;
inline int getid(int x){
    return lower_bound(v.begin(),v.end(),x)-v.begin()+1;
}
inline int ask(int dir,int tm,int x) {
    int res = 0;
    for (; x; x -= x & (-x))
        res = (res+t[dir][tm][x])%MOD;
    return res;
}
inline void add(int dir,int tm,int x,int val) {
    for (; x <= n+3; x += x & -x)
        t[dir][tm][x] =(t[dir][tm][x]+val)%MOD ;
}
int main() {
    freopen("data.in", "r", stdin);
    //freopen("ZR1879.out","w",stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        v.push_back(a[i]);
    }
    clm(t);
    for(int i=1;i<=n;i++)
        a[i]= getid(a[i]);
    for(int i=0;i<=1;i++){
        for(int j=1;j<=n;j++)
            t[i][0][j]=1;
    }
    for (int i = 1; i <= n; i++) {
        for(int j=n;j>=1;j--){
            add(0,j,a[i], ask(0,j-1,a[i]-1));
            add(1,j,n-a[i]+1, ask(1,j-1,n-a[i]));
        }
    }
    for(int i=n;i>=1;i--){
        int x= ask(0,i,n)+ ask(1,i,n);
        if(x!=0){
            printf("%d %d\n",i,x);
            return 0;
        }
    }
    return 0;
}
