//
// Created by admin on 2020/7/5.
//
#include <bits/stdc++.h>
using namespace std;
int n,a[110000],t;
int main()
{
    scanf("%d",&t);
    while (t--)
    {
        int ans=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)
            ans^=a[i];
        if(!ans)
            printf("No\n");
        else
            printf("Yes\n");
    }
}
