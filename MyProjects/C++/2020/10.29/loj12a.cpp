//File: loj12a.cpp
//Author: yanyanlongxia
//Date: 2020/10/30
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
map<string,int>m;
int k,ans;
string st;
int main() {
    freopen("data.in","r",stdin);
    //freopen("loj12a.out","w",stdout);
    cin>>st;
    cin>>k;
    for (int i=0;i<st.size()-k+1;i++)
    {
        string tmp=st.substr(i,k);
        m[tmp]++;
        ans=max(ans,m[tmp]);
    }
    cout<<ans<<endl;
    return 0;
}
