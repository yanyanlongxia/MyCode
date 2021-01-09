//File: ZR1584.cpp
//Author: yanyanlongxia
//Date: 2020/10/3
//
#include <bits/stdc++.h>

using namespace std;
int n,a[1000005],f[1000005];
map<int,int>buc;
inline bool valid(int x)
{
    buc.clear();
    for (int i=1;i<=x;i++)
    {
        add(a[i],1);
    }
    if (minn>=f[x])
        return true;
    for (int i=x+1;i<=n;i++)
    {
        buc[a[i-x]]--;
        if (buc[a[i-x]]!=0)
            minn=min(minn,buc[a[i-x]]);
        buc[a[i]]++;
        minn=min(minn,buc[a[i]]);
        if (minn>=f[x])
            return true;
    }
    return false;
}
int main() {
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (int i=1;i<=n;i++)
        scanf("%d",&f[i]);
    for (int i=n;i>=1;i--)
        if (valid(i))
        {
            printf("%d\n",i);
            return 0;
        }
    printf("%d\n",0);
    return 0;
}
