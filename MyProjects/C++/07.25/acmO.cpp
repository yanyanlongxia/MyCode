//Created by yanyanlongxia on 2021/7/30
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=1e4;
string s[N];
int n;
bool tag[N];
int main() {
    //freopen("data.in","r",stdin);
    //freopen("acmO.out","w",stdout);
    n=1;
    while (cin>>s[n]){
        n++;
    }
    n--;
    for(int i=1;i<=n;i++){
        if('A'<=s[i][0]&&s[i][0]<='Z') {
            tag[i] = true;
            s[i][0]+=32;
        }
        reverse(s[i].begin(),s[i].end());
        if(tag[i])
            s[i][0]-=32;
        //cout<<s[i]<<" ";
    }
    for(int i=n;i>=1;i--)
        cout<<s[i]<<" ";
    return 0;
}
