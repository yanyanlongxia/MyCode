//File: a.cpp
//Author: yanyanlongxia
//Date: 2020/9/13
//
#include <bits/stdc++.h>

using namespace std;
int n,m,c[55];
vector<int>a[100];

int main() {
    int x,y;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
        scanf("%d",&c[i]);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        for (int j=1;j<=x;j++)
        {
            scanf("%d",&y);
            a[i].push_back(y);
        }
    }

}
