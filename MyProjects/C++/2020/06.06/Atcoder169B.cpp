//
// Created by admin on 2020/6/6.
//
#include <cstdio>
int n;
long long a[100005];
int main()
{
    long long p=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)
        if(a[i]==0)
        {
            printf("0\n");
            return 0;
        }
    for(int i=1;i<=n;i++)
    {
        if(a[i]<=1000000000000000000/p)
            p*=a[i];
        else
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("%lld\n",p);
    return 0;
}
