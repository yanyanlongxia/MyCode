//Created by yanyanlongxia on 2021/6/28
//二维数点
//[SHOI2007]园丁的烦恼

#include <bits/stdc++.h>

#define ll long long
#define INF 0x3f3f3f3f
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e7;
vector<int>v1,v2;
int n,m,t[N],ans[N];
struct tree{
    int x,y;
    bool operator < (tree b)const{
        return x<b.x;
    }
}node[N];
struct ques{
    int x,y,id,op;
    ques(int xx=0,int yy=0,int idid=0,int opop=0){
        x=xx,y=yy,id=idid,op=opop;
    }
    bool operator < (ques b)const{
        return x<b.x;
    }
};
inline void add(int x,int d){
    for(;x<=v2.size();x+=(x & -x))
        t[x]+=d;
}
inline int ask(int x){
    int res=0;
    for(;x;x-=(x & -x))
        res+=t[x];
    return res;
}
vector<ques>q;
inline int get_num1(int x){
    return lower_bound(v1.begin(),v1.end(),x)-v1.begin()+1;
}
inline int get_num2(int x){
    return lower_bound(v2.begin(),v2.end(),x)-v2.begin()+1;
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P2163.out","w",stdout);
    scanf("%d%d",&n,&m);
    int x,y,a,b,c,d;
    for(int i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        v1.push_back(x);v2.push_back(y);
        node[i].x=x;node[i].y=y;
    }
    for(int i=1;i<=m;i++){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        v1.push_back(a);v2.push_back(b);v1.push_back(a-1);v2.push_back(b-1);
        v1.push_back(c);v2.push_back(d);/*v1.push_back(c-1);v2.push_back(d-1);*/
        q.push_back(ques(c,d,i,1));
        q.push_back(ques(a-1,b-1,i,1));
        q.push_back(ques(c,b-1,i,-1));
        q.push_back(ques(a-1,d,i,-1));
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    v1.erase(unique(v1.begin(),v1.end()),v1.end());
    v2.erase(unique(v2.begin(),v2.end()),v2.end());
    for(int i=1;i<=n;i++)
        node[i].x=get_num1(node[i].x),node[i].y=get_num2(node[i].y);
    for(int i=0;i<q.size();i++)
        q[i].x=get_num1(q[i].x),q[i].y=get_num2(q[i].y);
    sort(node+1,node+1+n);
    sort(q.begin(),q.end());
    int j=0;
    for(int i=0;i<q.size();i++){
        while (node[j+1].x<=q[i].x&&j+1<=n){
            add(node[j+1].y,1);
            j++;
        }

        ans[q[i].id]+=q[i].op*ask(q[i].y);
    }
    for(int i=1;i<=m;i++)
        printf("%d\n",ans[i]);
    return 0;
}
