//Created by yanyanlongxia on 2021/2/10
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const ll MAXN=1e18;
const int N=21;
set<ll>s;
ll jc[N];
int n;
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1755.out","w",stdout);
    ll x;
    scanf("%d",&n);
    jc[0]=jc[1]=1;
    for(int i=1;i<=19;i++)
        jc[i]=jc[i-1]*i;
    s.insert(1);
    for(set<ll>::iterator it=s.begin();it!=s.end();it++){
        for(int j=2;j<=19;j++){
            if (MAXN/jc[j]>=*it)
                s.insert((*it)*jc[j]);
        }
    }
    //printf("%lu\n",s.size());
    while (n--){
        scanf("%lld",&x);
        if(s.find(x)!=s.end())
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
