//
// Created by admin on 2020/7/5.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int a,b,x,y,c,t;
int exgcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1,y=0;
        return a;
    }
    int t,gcd;
    gcd=exgcd(b,a%b,x,y);
    t=x;x=y;
    y=t-(a/b)*y;
    return gcd;
}
signed main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        int gcd=exgcd(a,b,x,y);
        if(c%gcd!=0)
            printf("-1\n");
        else
        {
            x*=c/gcd,y*=c/gcd; int p=b/gcd,q=a/gcd,k;
            if(x<0)
                k=ceil((1.0-x)/p),x+=p*k,y-=q*k;
            else
                if(x>=0)
                    k=(x-1)/p ,x-=p*k,y+=q*k;
            if(y>0){
                printf("%lld ",(y-1)/q+1);
                printf("%lld ",x);
                printf("%lld ",(y-1)%q+1);
                printf("%lld ",x+(y-1)/q*p);
                printf("%lld ",y);
            } else{
                printf("%lld " ,x);
                printf("%lld",y+q*(int)ceil((1.0-y)/q));
            }
            puts("");
        }
    }
    return 0;
}