//File: CF1399A.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//
#include <bits/stdc++.h>

using namespace std;
int t,n,a[100];
int main() {
    scanf("%d",&t);
    while(t--)
    {
        int flag=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        sort(a+1,a+n+1);
        if(n%2==1)
        {
            a[n+1]=0x3f3f3f3f;
            for(int i=1;i<=n;i++)
                if(a[i+1]-a[i]>1)
                {

                    flag++;
                    if(flag==2)
                    {
                        printf("NO\n");
                        break;
                    }
                }
            if(flag==2)
                continue;
        }else
        {
            for(int i=1;i<=n;i++)
                if(a[i+1]-a[i]>1)
                {
                    printf("NO\n");
                    flag=1;
                    break;
                }
            if(flag)
                continue;
        }
        printf("YES\n");
    }
    return 0;
}