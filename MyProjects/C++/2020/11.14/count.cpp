//File: count.cpp
//Author: yanyanlongxia
//Date: 2020/11/28
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e6;
int n,ans;
struct pair3{
    int first,second,third;
    bool operator < (pair3 x)const{
        if(x.first!=first)
            return first<x.first;
        if(x.second!=second)
            return second<x.second;
        return third<x.third;
    }
};
map<float,int>buc;
pair3 make_pair3(int a,int b,int c){
    pair3 tmp;
    tmp.first=a;tmp.second=b;tmp.third=c;
    return tmp;
}
set<pair3>s;
vector<int>v;
int gcd(int a,int b){
    return b==0 ? a : gcd(b,a%b);
}
inline int getnum(int val){
    return lower_bound(v.begin(),v.end(),val)-v.begin()+1;
}
struct lin{
    int a,b,c;
    void yue(){
        if(a<0)
        {
            a*=-1;
            b*=-1;
            c*=-1;
        }
        int tmp=gcd(abs(a),abs(b));
        tmp=gcd(tmp,abs(c));
        if(tmp!=1)
        {
            a/=tmp;
            b/=tmp;
            c/=tmp;
        }
    }
}l[N];
int main() {
    freopen("count.in","r",stdin);
    freopen("count.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d%d",&l[i].a,&l[i].b,&l[i].c);
        v.push_back(l[i].a);
        v.push_back(l[i].b);
        v.push_back(l[i].c);
        l[i].yue();
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=1;i<=n;i++)
    {
        pair3 tmp=make_pair3(l[i].a,l[i].b,l[i].c);
        if(s.find(tmp)!=s.end())
        {
            printf("INF\n");
            return 0;
        }
        s.insert(tmp);
        float ttt=-(float)l[i].a/(float)l[i].b;
        buc[ttt]=buc[ttt]+1;
    }
    for(int i=1;i<=n;i++){
        float ttt=-(float)l[i].a/(float)l[i].b;
        int tmp=buc[ttt];
        ans+=n-tmp;
    }
    printf("%d\n",ans/2);
    return 0;
}
