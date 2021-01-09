//File: P2163.cpp
//Author: yanyanlongxia
//Date: 2020/10/25
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e6;
int n,m,t[N],ans[N];
vector<int>v;
inline int getid(int val){
    return lower_bound(v.begin(),v.end(),val)-v.begin()+1;
}
inline int ask(int x){
    int ret=0;
    for (;x;x-=(x & -x))
        ret+=t[x];
    return ret;
}
inline void add(int x,int k){
    for (;x<=n;x+=(x & -x))
        t[x]+=k;
}
struct Q{
    int x,yu,yd,pos,f;
    Q(){
        x=yu=yd=pos=f=0;
    }
    bool operator <(Q b)const{
        return x<b.x;
    }
};
vector<Q>query;
pair<int,int>node[N];
int main() {
    freopen("data.in","r",stdin);
    //freopen("P2163.out","w",stdout);
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++){
        scanf("%d%d",&node[i].first,&node[i].second);
        v.push_back(node[i].second);
    }
    sort(node+1,node+1+n);
    for (int i=1;i<=m;i++){
        Q x,y;
        int s1,t1,s2,t2;
        scanf("%d%d%d%d",&s1,&t1,&s2,&t2);
        x.pos=y.pos=i;
        x.f=1;
        y.f=-1;
        x.x=s2;
        y.x=s1-1;
        v.push_back(t1);
        v.push_back(t2);
        x.yd=y.yd=t1;
        x.yu=y.yu=t2;
        query.push_back(x);
        query.push_back(y);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for (int i=1;i<=n;i++)
        node[i].second=getid(node[i].second);
    sort(query.begin(),query.end());
    for (int i=0;i<query.size();i++)
    {
        query[i].yd=getid(query[i].yd);
        query[i].yu=getid(query[i].yu);
    }
    int now=1;
    for (int i=0;i<query.size();i++){
        while (now<=n && node[now].first<=query[i].x)
        {
            add(node[now].second,1);
            now++;
        }
        ans[query[i].pos]+=query[i].f*(ask(query[i].yu)-ask(query[i].yd-1));
    }
    for (int i=1;i<=m;i++)
        printf("%d\n",ans[i]);
    return 0;
}
