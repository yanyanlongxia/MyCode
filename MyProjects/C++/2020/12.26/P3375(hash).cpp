//File: P3375(hash).cpp
//Author: yanyanlongxia
//Date: 2021/1/1
//
#include <iostream>
#include <cstring>
#include <algorithm>

#define ll long long
using namespace std;
const int N=5e5+5;
const int base=1279;
const int MOD=19491001;

char s[N],t[N];
int p1[N],f[N],n,m,T;
int main() {
    //freopen("P3375(hash).in","rev",stdin);
    //freopen("P3375(hash).out","w",stdout);
    scanf("%d", &T);
    while(T--){
        scanf("%s", (s+1));
        scanf("%s",(t+1));
        n=strlen(s+1);
        m=strlen(t+1);
        p1[0]=1;
        f[0]=0;
        for(int i=1;i<=n;i++){
            p1[i]=(1ll*base*p1[i-1]%MOD+(s[i]-'A'))%MOD;
            f[i]=1ll*base*f[i-1]%MOD;
        }
        for(int i=1;i<=m;i++){

        }
    }
}
