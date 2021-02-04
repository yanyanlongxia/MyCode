//
// Created by admin on 2020/7/30.
//
#include <bits/stdc++.h>
using namespace std;
int t,n;
int read(){
    int x=0,f=1;char ch=getchar();
    while(!isdigit(ch)){if(ch=='-') f=-1;ch=getchar();}
    while(isdigit(ch)){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int main()
{
    t=read();
    while(t--)
    {
        n=read();
        if(n<31)
        {
            puts("NO");
            continue;
        }
        puts("YES");
        if(n==36)
        {
            printf("%d %d %d %d\n",5,6,10,15);
            continue;
        }
        if(n==40)
        {
            printf("%d %d %d %d\n",6,9,10,15);
            continue;
        }
        if(n==44)
        {
            printf("%d %d %d %d\n",6,7,10,21);
            continue;
        }
        printf("%d %d %d %d\n",6,10,14,n-30);
    }
    return 0;
}