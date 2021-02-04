//File: CF1437B.cpp
//Author: yanyanlongxia
//Date: 2020/11/1
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int t,ans1,ans0,n;
string s;
int main() {
    freopen("data.in","r",stdin);
    //freopen("CF1437B.out","w",stdout);
    cin>>t;
    while (t--){
        cin>>n;
        cin>>s;
        ans1=ans0=0;
        for (int i=1;i<n;i++){
            if (s[i]=='1'&&s[i-1]=='1')
                ans1++;
            if (s[i]=='0'&&s[i-1]=='0')
                ans0++;
        }
        cout<<max(ans0,ans1)<<endl;
    }
    return 0;
}
