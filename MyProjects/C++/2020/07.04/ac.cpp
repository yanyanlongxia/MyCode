#include<bits/stdc++.h>
#define debug(x) printf("In function [%s],the value of ["#x"] is %d\n",__FUNCTION__,x)
#define up(l,r,i) for(register int i=l;i<=r;++i)
#define dn(r,l,i) for(register int i=r;i>=l;--i)
using namespace std;
typedef long long LL;
const int INF =2147483647;
int qread(){
    int w=1,c,ret=0;
    while((c=getchar())> '9'||c< '0')
        w=(c=='-'?-1:1); ret=c-'0';
    while((c=getchar())>='0'&&c<='9')
        ret=ret*10+c-'0';
    return ret*w;
}
void qwrite(int x){
    if(x<0) x=-x,putchar('-');
    if(x>9) qwrite(x/10);
    putchar('0'+x%10);
}
LL exgcd(LL a,LL b,LL &x,LL &y){
    LL d=a; if(b==0) x=1,y=0; else{
        d=exgcd(b,a%b,y,x),y-=a/b*x;
    }
    return d;
}
int main(){
    dn(qread(),1,T){
        LL a=qread(),b=qread(),c=qread(),x,y;
        LL d=exgcd(a,b,x,y);
        if(c%d!=0) puts("-1"); else{
            x*=c/d,y*=c/d; LL p=b/d,q=a/d,k;
            if(x<0) k=ceil((1.0-x)/p),x+=p*k,y-=q*k;
            else	//将x提高到最小正整数
            if(x>=0)k=(x-1)/p ,x-=p*k,y+=q*k;		//将x降低到最小正整数
            if(y>0){	//有正整数解
                printf("%lld ",(y-1)/q+1);	//将y减到1的方案数即为解的个数
                printf("%lld ",x);			//当前的x即为最小正整数x
                printf("%lld ",(y-1)%q+1); 	//将y取到最小正整数
                printf("%lld ",x+(y-1)/q*p);	//将x提升到最大
                printf("%lld ",y);			//特解即为y最大值
            } else{		//无整数解
                printf("%lld " ,x);			//当前的x即为最小的正整数x
                printf("%lld",y+q*(LL)ceil((1.0-y)/q)); //将y提高到正整数
            }
            puts("");
        }
    }
    return 0;
}