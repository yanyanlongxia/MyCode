//File: P3871.cpp
//Author: yanyanlongxia
//Date: 2020/9/26
//
#include <bits/stdc++.h>

using namespace std;
int n,a[1000005],m;
priority_queue<int>great;
priority_queue<int,vector<int>,greater<int> >little;
inline void add(int x)
{
    if (little.empty())
        little.push(x);
    else{
        if (x>=little.top())
            little.push(x);
        else
            great.push(x);
    }
    if (great.size()>little.size()+1)
    {
        little.push(great.top());
        great.pop();
    }
    if (little.size()>great.size())
    {
        great.push(little.top());
        little.pop();
    }
}
inline int ask()
{
    return great.top();
}
int main() {
    int x;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        add(x);
    }
    scanf("%d",&m);
    char opt[10];
    while (m--)
    {
        scanf("%s",opt);
        if (opt[0]=='a')
        {
            scanf("%d",&x);
            add(x);
        }
        else
            printf("%d\n",ask());
    }
    return 0;
}
