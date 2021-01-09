//File: P3467.cpp
//Author: yanyanlongxia
//Date: 2020/9/22
//
#include <bits/stdc++.h>

using namespace std;
int n,ans;
stack<int>s;
int main() {
    int x,y;
    scanf("%d",&n);
    ans=n;
    for (int i=1;i<=n;i++)
    {
        scanf("%d%d",&y,&x);
        while (!s.empty() && x<=s.top())
        {
            if (x==s.top())
                ans--;
            s.pop();
        }
        s.push(x);
    }
    printf("%d\n",ans);
    return 0;
}
