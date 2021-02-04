//File: noname.cpp
//Author: yanyanlongxia
//Date: 2020/10/23
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=6e4;
int T,n,a[N],t[N],ans;
vector<int>v;
inline void add(int x,int k){
    for (;x<=n;x+=(x & -x))
        t[x]=max(t[x],k);
}
inline int ask(int x){
    int ret=0;
    for (;x;x-=(x & -x))
        ret=max(ret,t[x]);
    return ret;
}
inline int getid(int val){
    return lower_bound(v.begin(),v.end(),val)-v.begin()+1;
}
int main() {
    freopen("noname.in","r",stdin);
    freopen("noname.ans","w",stdout);
    scanf("%d",&T);
    while (T--){
        ans=0;
        memset(t,0,sizeof(t));
        v.clear();
        scanf("%d",&n);
        for (int i=1;i<=n;i++) {
            scanf("%d", &a[i]);
            a[i]-=i;
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        for (int i=1;i<=n;i++){
            int num=getid(a[i]),res=ask(num);
            if (a[i]<0)
                continue;
            add(num,res+1);
            ans=max(ans,res+1);
        }
        ans=n-ans;
        printf("%d\n",ans);
    }
    return 0;
}
