//File: hard.cpp
//Author: yanyanlongxia
//Date: 2020/10/7
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
struct node
{
    string s;
    int index;
}st[1000005];
bool cmp(node a,node b)
{
    return a.s+b.s<b.s+a.s;
}
int main() {
    freopen("hard.in","r",stdin);
    freopen("hard.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        cin>>st[i].s;
        st[i].index=i;
    }
    stable_sort(st+1,st+n+1,cmp);
    for (int i=1;i<=n;i++)
        printf("%d ",st[i].index);
    puts("");
    return 0;
}
