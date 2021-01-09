//File: P1823.cpp
//Author: yanyanlongxia
//Date: 2020/9/22
//
#include <bits/stdc++.h>
using namespace std;
int n,a[1000005],ans,s[1000005],top;
inline int read()
{
    int f=1,res=0;
    char ch=getchar();
    while (!isdigit(ch))
    {
        if (ch=='-')
            f=-1;
        ch=getchar();
    }
    while (isdigit(ch))
    {
        res=10*res+ch-'0';
        ch=getchar();
    }
    return f*res;
}
int main() {
    n=read();
    for (int i=1;i<=n;i++)
    {
        a[i]=read();
        int bcu=1;
        while (top>0 && a[i]>s[top])
        {
            ans++;
            top--;
        }
        while (top>0 && a[i]==s[top])
        {
            ans++;
            top--;
            bcu++;
        }
        if (top>0)
            ans++;
        top+=bcu;
        s[top]=a[i];
    }
    printf("%d\n", ans);
    return 0;
}
