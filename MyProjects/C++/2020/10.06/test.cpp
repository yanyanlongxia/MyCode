//File: normal.cpp
//Author: yanyanlongxia
//Date: 2020/10/7
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
multiset<int,greater<int> ,allocator<int> >s1;
multiset<int>s2;
int n,a[1000005],q;
inline void add(int x)
{
    if (s2.empty() || x> *(s1.begin()))
        s2.insert(x);
    else
        s1.insert(x);
    while (s1.size()>s2.size()+1)
    {
        x=*(s1.begin());
        s1.erase(s1.begin());
        s2.insert(x);
    }
    while (s2.size()>s1.size())
    {
        x=*(s2.begin());
        s2.erase(s2.begin());
        s1.insert(x);
    }
}
#define mid() *(s1.begin())
int main() {
    int x,y;
    scanf("%d%d",&n,&q);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (int i = 1; i <= q; ++i) {
        scanf("%d%d",&x,&y);
        s1.clear();
        s2.clear();
        for (int j=x;j<=y;j++)
            add(a[j]);
        printf("%d\n",mid());
    }
    return 0;
}
