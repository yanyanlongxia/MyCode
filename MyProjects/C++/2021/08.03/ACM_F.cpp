//Created by yanyanlongxia on 2021/8/11
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=3e6+10;
int n,k,cnt=0;
struct ind{
    int t,id,la;
    bool operator < (ind b)const{
        return (t==b.t)?(la>b.la):(t>b.t);
    }
}ap[N];
string s[N],reef[N];
map<string,int>m;
int main() {
    freopen("data.in","r",stdin);
    //freopen("ACM_F.out","w",stdout);
    cin>>n>>k;
    n*=3;
    getline(cin,s[0]);
    for(int i=1;i<=n;i++){
        getline(cin,s[i]);
        if(m.count(s[i])==0){
            m[s[i]]=++cnt;
            reef[cnt]=s[i];
            ap[cnt].t=0;
            ap[cnt].id=cnt;
        }
        ap[m[s[i]]].t++;
        ap[m[s[i]]].la=i;
    }
    sort(ap+1,ap+1+cnt);
    for(int i=1;i<=min(cnt,k);i++){
        cout<<reef[ap[i].id]<<endl;
    }
    return 0;
}
