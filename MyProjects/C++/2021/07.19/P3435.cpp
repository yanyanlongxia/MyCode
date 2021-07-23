//Created by yanyanlongxia on 2021/7/22
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e7+10;
int n,nxt[N];
ll ans;
string s;
void kmp(){
    for(int i=1;i<n;i++){
        int j=nxt[i-1];
        while (j>0&&s[i]!=s[j])
            j=nxt[j-1];
        if(s[i]==s[j])
            j++;
        nxt[i]=j;
    }
}
int main() {
    //freopen("data.in","r",stdin);
    //freopen("P3435.out","w",stdout);
    cin>>n;
    cin>>s;
    kmp();
    for(int i=1;i<n;i++){
        int j=nxt[i];
        while(nxt[j-1]!=0)
            j=nxt[j-1];
        nxt[i]=j;
        if(j!=0)
            ans=ans+i+1-j;
    }
    cout<<ans<<endl;
    return 0;
}
