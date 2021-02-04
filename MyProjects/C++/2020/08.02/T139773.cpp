//File: T139773.cpp
//Author: yanyanlongxia
//Date: 2020/8/4
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,ans[]={0,1,1,2,1,2,2,3,1,2,2,2,2,2,3,4,1,2,2,2,2,3,2,3,2,2,2,2,3,2,4,5,1,2,2,3,2,2,2,3,2,2,3,2,2,4,3,3,2,3,2,4,2,2,2,3,3,2,2,2,4,2,5,6,1,2,2,2,2,3,3,3,2,3,2,4,2,3,3,3,2,2,2,2,3,4,2,3,2,4,4,3,3,5,3,3,2,2,3,2,2,2,4,3,2};
signed main() {
    scanf("%d",&t);
    while(t--)
    {
        bool flag=0;
        scanf("%d",&n);
        if(n<=80)
        {
            printf("%d\n",ans[n]);
            continue;
        }
        for(int i=1;i<=62;i++)
        {
            if((1<<i)==n)
            {
                printf("1\n");
                flag=1;
                break;
            }
            if((1<<i)==n+1)
            {
                printf("%lld\n",i);
                flag=1;
                break;
            }
            if(((1<<i)+1)%n==0)
            {
                printf("2\n");
                flag=1;
                break;
            }
        }

        if(flag)
            continue;
    }
    return 0;
}