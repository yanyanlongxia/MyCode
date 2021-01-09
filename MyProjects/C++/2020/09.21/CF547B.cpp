//File: CF547B.cpp
//Author: yanyanlongxia
//Date: 2020/9/23
//
#include <bits/stdc++.h>

using namespace std;
struct bear
{
    int a,l,r;
}t[1000005];
int n,top,s[1000005];
bool cmp(bear x,bear y)
{
    return x.a>y.a;
}
int main() {
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        scanf("%d",&t[i].a);
    //top=1,s[1]=0;
    top=0;
    for (int i=1;i<=n;i++)
    {
        if (top==0 || t[i].a>t[s[top]].a)
        {
            t[i].l=i;
            s[++top]=i;
        }
        else
        {
            while (top>0 && t[i].a<=t[s[top]].a)
                top--;
            t[i].l=s[top]+1;
            s[++top]=i;
        }
    }
    top=0;
    //top=1,s[1]=n+1;
    for (int i=n;i>=1;i--)
    {
        if (top==0 || t[i].a>t[s[top]].a)
        {
            t[i].r=i;
            s[++top]=i;
        }
        else
        {
            while (top>0 && t[i].a<=t[s[top]].a)
                top--;
            t[i].r=s[top]-1;
            s[++top]=i;
        }
    }
    sort(t+1,t+n+1,cmp);
    int now=0;
    for (int i=1;i<=n;i++)
    {
        if (t[i].l==n+1)
            t[i].l=1;
        if (t[i].r==-1)
            t[i].r=n;
        int dist=t[i].r-t[i].l+1;
        if (dist>now) {
            for (int j = now + 1; j <= dist; j++)
                printf("%d ", t[i].a);
            now=dist;
        }
    }
    return 0;
}
