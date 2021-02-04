//File: P5020.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>

using namespace std;
int n,a[100005],t,ans;
bool f[100005];
int main() {
    scanf("%d",&t);
    while (t--)
    {
        memset(f,0,sizeof(f));
        scanf("%d",&n);
        ans=n;
        for (int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        f[0]=true;
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)
        {
            if (f[a[i]]) {
                ans--;
                continue;
            }
            for (int j=a[i];j<=a[n];j++)
                f[j]=f[j]|f[j-a[i]];
        }
        printf("%d\n",ans);
    }
}
