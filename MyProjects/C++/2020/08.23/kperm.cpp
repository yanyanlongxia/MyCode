//File: kperm.cpp
//Author: yanyanlongxia
//Date: 2020/9/7
//
#include <bits/stdc++.h>

using namespace std;
const int mo=924844033;
int n,k,a[1000005],ans;
bool judge()
{
    for (int i=1;i<=n;i++)
    {
        if(abs(a[i]-i)==k)
            return false;
    }
    return true;
}
int main() {
    freopen("kperm.in","r",stdin);
    freopen("kperm.out","w",stdout);
    scanf("%d%d",&n,&k);
    for (int i=1;i<=n;i++)
        a[i]=i;
    do {
        if(judge())
        {
            ans++;
            ans%=mo;
        }
    }while (next_permutation(a+1,a+n+1));
    printf("%d\n",ans);
    return 0;
}
