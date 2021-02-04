//File: CF1426B.cpp
//Author: yanyanlongxia
//Date: 2020/9/28
//
#include <bits/stdc++.h>

using namespace std;
int n,m,t;
int main() {
    int x,y,z,w;
    scanf("%d",&t);
    while (t--)
    {
        bool flag=false;
        scanf("%d%d",&n,&m);
        for (int i=1;i<=n;i++)
        {
            scanf("%d %d %d %d",&x,&y,&z,&w);
            if (y==z)
            {
                if (!flag)
                    flag = true;
            }
        }
        if (!flag || m&1)
            puts("NO");
        else
            puts("YES");
    }
    return 0;
}
