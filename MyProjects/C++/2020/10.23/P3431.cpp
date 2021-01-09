//File: P3431.cpp
//Author: yanyanlongxia
//Date: 2020/10/25
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e6;
int k,n,m,t[N],ans;
vector<int>v;
inline int getid(int val){
    return lower_bound(v.begin(),v.end(),val)-v.begin()+1;
}
struct traff{
    int x,y,p;
    bool operator <(traff b)const{
        if (x==b.x)
            return y<b.y;
        return x<b.x;
    }
}node[N];
inline int ask(int x){
    int ret=0;
    for (;x;x-=(x & -x))
        ret=max(ret,t[x]);
    return ret;
}
inline void add(int x,int val){
    for (;x<=k;x+=(x & -x))
        t[x]=max(t[x],val);
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3431.out","w",stdout);
    scanf("%d%d%d",&n,&m,&k);
    for (int i=1;i<=k;i++){
        scanf("%d%d%d",&node[i].x,&node[i].y,&node[i].p);
        v.push_back(node[i].y);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for (int i=1;i<=k;i++)
        node[i].y=getid(node[i].y);
    sort(node+1,node+1+k);
    for (int i=1;i<=k;i++){
        int res=ask(node[i].y);
        ans=max(ans,res+node[i].p);
        add(node[i].y,res+node[i].p);
    }
    printf("%d\n",ans);
    return 0;
}
