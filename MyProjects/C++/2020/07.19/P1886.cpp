//
// Created by admin on 2020/7/21.
//
#include <bits/stdc++.h>
#define MN 5000000
using namespace std;
int n,k,a[MN],q[MN],p[MN];//q为单调队列,p存储q中元素在a中下标
void get_min()
{
    int head=1,tail=0;
    for(int i=1;i<=n;i++)
    {
        while(head<=tail&&q[tail]>=a[i])  //若此时q[tail]大于a[i]，那么前者的生存能力比后者弱，剩余生存时间也比后者短
            tail--;//若此时q[tail]等于a[i],那么至少前者剩余生存时间也比后者短，无论如何，q[tail]都是无用项，直接弹出
        q[++tail]=a[i];//tail先自加，后赋值
        p[tail]=i;
        while(p[head]<=i-k)
            head++;//弹出已过期的队列元素
        if(i>=k)
            printf("%d ",q[head]);
    }
    puts("");
}
void get_max()  //同上
{
    int head=1,tail=0;
    for(int i=1;i<=n;i++)
    {
        while(head<=tail&&q[tail]<=a[i])
            tail--;
        q[++tail]=a[i];
        p[tail]=i;
        while(p[head]<=i-k)
            head++;
        if(i>=k)
            printf("%d ",q[head]);
    }
    puts("");
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    get_min();
    get_max();
    return 0;
}