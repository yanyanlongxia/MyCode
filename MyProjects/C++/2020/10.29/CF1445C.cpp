//File: CF1445C.cpp
//Author: yanyanlongxia
//Date: 2020/11/1
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=5e6;
int t;
ll a,b,ans;
vector<int>divs;
int num[N];
inline bool pr(ll x){
    for (int i=2;i<=sqrt(x);i++)
        if (x%i==0)
            return false;
    return true;
}
void prime(ll x){
    for (int i=2;i<=sqrt(x);i++)
        if (x%i==0 && pr(i)){
            if (!num[i])
                divs.push_back(i);
            num[i]++;
            prime(x/i);
            return;
        }
    if (!num[x])
        divs.push_back(x);
    num[x]++;
}
inline void htr(int x){
    x=pow(x,num[x]);
    ll res=a;
    while (res%x==0)
        res/=x;
    ans=max(ans,res);
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1445C.out","w",stdout);
    scanf("%d",&t);
    while (t--){
        memset(num,0,sizeof (num));
        divs.clear();
        ans=0;
        scanf("%lld%lld",&a,&b);
        if (a%b!=0)
        {
            printf("%lld\n",a);
            continue;
        }
        prime(b);
        sort(divs.begin(),divs.end());
        for (int i=0;i<divs.size();i++)
            htr(divs[i]);
        printf("%lld\n",ans);
    }
    return 0;
}
