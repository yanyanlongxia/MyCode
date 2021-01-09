//File: P3871.cpp
//Author: yanyanlongxia
//Date: 2020/8/18
//[TJOI2010]中位数
#include <bits/stdc++.h>

using namespace std;
int n,m;
vector<int>a;
void add(int x)
{
    a.insert(lower_bound(a.begin(),a.end(),x),x);
}
int ask()
{
    return a[a.size()/2-(a.size() & 1 ^ 1)];
}
int main() {
    string s;
    int x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    scanf("%d",&m);
    for (int i = 1; i <= m; ++i) {
        cin>>s;
        if(s=="add")
        {
            scanf("%d",&x);
            add(x);
        }else
            printf("%d\n",ask());
    }
    return 0;
}
