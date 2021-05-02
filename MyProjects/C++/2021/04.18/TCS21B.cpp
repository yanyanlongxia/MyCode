//Created by yanyanlongxia on 2021/5/1
//
//

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
ll n,ans,base[18];
vector<ll>res;
queue<ll>q;
bool valid(ll x){
    bool i3=false,i5=false,i7=false;
    while(x){
        switch (x % 10) {
            case 3:
                i3=true;
                break;
            case 5:
                i5=true;
                break;
            case 7:
                i7=true;
                break;
            default:
                break;
        }
        x/=10;
    }
    return i3&&i5&&i7;
}
ll upper(ll x){
    int l=1,r=17,mid;
    while(r-l>1){
        mid=l+r>>1;
        if(base[mid]>x)
            r=mid;
        else
            l=mid;
    }
    return base[r];
}
int main() {
    freopen("data.in","r",stdin);
    freopen("TCS21B.out","w",stdout);
    scanf("%lld",&n);
    q.push(3);
    q.push(5);
    q.push(7);
    base[1]=1;
    for(int i=2;i<=17;i++)
        base[i]=10ll*base[i-1];
    //ll y=upper(88000);
    while(!q.empty()){
        ll now=q.front();
        q.pop();
        if(now>n)
            continue;
        if(valid(now)) {
            ans++;
            res.push_back(now);
        }
        ll x= upper(now);
        q.push(3ll*x+now);
        q.push(5ll*x+now);
        q.push(7ll*x+now);
    }
    printf("%lld\n",ans);
    //sort(res.begin(),res.end());
    //for(auto x:res)
   //     printf("%lld ",x);
    return 0;
}
