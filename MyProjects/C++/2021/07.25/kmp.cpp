//Created by yanyanlongxia on 2021/7/25
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e7;
string s,t,gen;
int n,m,nxt[N];
vector<int>pos;
void kmp(){
    int sz=gen.size();
    for(int i=1;i<sz;i++){
        int j=nxt[i-1];
        while(j!=0&&gen[i]!=gen[j])
            j=nxt[j-1];
        if(gen[i]==gen[j])
            j++;
        nxt[i]=j;
        if (i>m&&nxt[i]==m)
            pos.push_back(i-2*m+1);
    }
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("kmp.out","w",stdout);
    cin>>s>>t;
    n=s.size();m=t.size();
    gen=t+" "+s;
    kmp();
    for(int i=0;i<pos.size();i++)
        printf("%d\n",pos[i]);
    for(int i=0;i<m;i++)
        printf("%d ",nxt[i]);
    return 0;
}
