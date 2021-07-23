//Created by yanyanlongxia on 2021/7/22
//
#include <iostream>
#include <string>
#include <cstdio>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e7;
string s;
int n,nxt[N];
void kmp(){
    for(int i=1;i<n;i++){
        int j=nxt[i-1];
        while(j>0 && s[i]!=s[j])
            j=nxt[j-1];
        if(s[i]==s[j])
            j++;
        nxt[i]=j;
    }
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("POJ2406.out","w",stdout);
    while(true){
        cin>>s;
        if(s[0]=='.')
            break;
        n=s.size();
        kmp();
        int j=nxt[n-1];
        while(n/(n-j)*(n-j)!=n)
            j=nxt[j-1];
        printf("%d\n",n/(n-j));
    }
    return 0;
}
