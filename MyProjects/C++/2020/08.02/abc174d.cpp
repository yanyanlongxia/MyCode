//File: abc174d.cpp
//Author: yanyanlongxia
//Date: 2020/8/3
//
#include <bits/stdc++.h>

using namespace std;
int n,cnt,ans;
string s;
int main() {
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<n;i++)
        if(s[i]=='W')
            cnt++;
    for(int i=n-cnt;i<n;i++)
        if(s[i]!='W')
            ans++;
    printf("%d\n",ans);
    return 0;
}