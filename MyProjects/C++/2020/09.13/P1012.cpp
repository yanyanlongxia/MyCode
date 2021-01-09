//File: P1012.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>

using namespace std;
string st,s[100005];
int n;
bool cmp(string a,string b)
{
    return a+b>b+a;
}
int main() {
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        cin>>s[i];
    sort(s+1,s+n+1,cmp);
    for (int i=1;i<=n;i++)
        st+=s[i];
    cout<<st<<endl;
    return 0;
}
//34331213
//43133123