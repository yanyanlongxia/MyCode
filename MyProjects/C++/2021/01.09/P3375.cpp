//Created by yanyanlongxia on 2021/1/16
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
using namespace std;
const int N=5e6+5;
int n,m,pi[N<<1];
string s,t,gen;
vector<int>res;
void get_next(){
    gen=s+" "+t;
    for(int i=1;i<gen.size();i++){
        int j=pi[i-1];
        while(j>0 && s[i]!=s[j])
            j=pi[j-1];
        if(s[i]==s[j])
            j++;
        pi[i]=j;
    }
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3375.out","w",stdout);
    cin>>t>>s;
    n=s.size(),m=t.size();
    get_next();
    for(int i=2*n;i<gen.size();i++){
        if(pi[i]==n)
            res.push_back(i-2*n+1);
    }
    for(int i=0;i<res.size();i++)
        printf("%d\n",res[i]);

    return 0;
}