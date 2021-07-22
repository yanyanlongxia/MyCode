//Created by yanyanlongxia on 2021/7/21
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=5e5+5;
const int MOD=19491001;
const int base=2;
int n;
char s[N];
inline int add(const int& a,const int& b){
    if(a+b>=MOD)
        return a+b-MOD;
    else
        return a+b;
}
inline int dec(const int& a,const int& b) {
    return add(a, MOD - b);
}
inline int mul(const int& a,const int&b){
    return 1ll*a*b%MOD;
}
struct hashx{
    int hashn[N];
    void dit(int x){
        for(int i=1;i<=n;i++)
            hashn[i]= add(mul(hashn[i-1],base),s[i]=='a'+x);
    }
}h[30];
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF985F.out","w",stdout);

    return 0;
}
