//File: CF1408B.cpp
//Author: yanyanlongxia
//Date: 2020/9/30
//
#include <bits/stdc++.h>

using namespace std;
int t,n,k,a[1000005];
int up(double x)
{
    int res=x;
    if (x>res)
        res++;
    return res;
}
int main() {
    scanf("%d",&t);
    a[0]=-0x3f3f3f3f;
    while (t--)
    {
        int cnt=0;
        scanf("%d%d",&n,&k);
        for (int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if (a[i]!=a[i-1])
                cnt++;
        }
        if (k==1 && cnt>1)
            puts("-1");
        else
            printf("%d\n",up((double)cnt/k));
    }
    return 0;
}
