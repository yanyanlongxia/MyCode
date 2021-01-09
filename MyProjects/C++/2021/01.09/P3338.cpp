//File: P3338.cpp
//Author: yanyanlongxia
//Date: 2021/1/9
//
#include <bits/stdc++.h>
//#define double long double
#define ll long long
using namespace std;
const int N=5e6+5;
const double PI=acos(-1.0);
struct Complex{
    double x,y;
    Complex() {}
    Complex(double _x,double _y): x(_x),y(_y){}
    Complex operator + (Complex val)const{
        return Complex(x+val.x,y+val.y);
    }
    Complex operator - (Complex val)const{
        return Complex(x-val.x,y-val.y);
    }
    Complex operator *(Complex val)const{
        return Complex(x*val.x-y*val.y,x*val.y+y*val.x);
    }

}a[N<<1],b[N<<1],c[N<<1],d[N<<1],e[N<<1];
int r[N<<1],n;
void FFT(Complex *a,int len,int flag){
    for(int i=0;i<len;i++){
        if(i>r[i])
            swap(a[i],a[r[i]]);
    }
    for(int i=2;i<=len;i<<=1){
        Complex wn(double(cos(flag*PI*2.0/i)),double(sin(flag*PI*2.0/i)));
        for(int j=0;j<len;j+=i){
            Complex w(1,0);
            for(int k=j;k<j+(i>>1);k++){
                Complex u=a[k];
                Complex t=a[k+(i>>1)]*w;
                a[k]=u+t;
                a[k+(i>>1)]=(u-t);
                w=w*wn;
            }
        }
    }
    if(flag==-1){
        for(int i=0;i<len;i++)
            a[i].x/=len;
    }
}
void mul(Complex *a,Complex *b,Complex *res,int n,int m){
    static Complex f[N<<1],g[N<<1];

}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P3338.out","w",stdout);
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%lf", &a[i].x);
        b[i].x=double(1.0/i/i);
        c[n-i].x=a[i].x;
    }
    int len=1,cnt=0;
    while(len<=(n<<1)){
        len<<=1;
        cnt++;
    }
    for(int i=0;i<len;i++)
        r[i]=(r[i>>1]>>1)|((i&1)<<(cnt-1));
    FFT(a,len,1);
    FFT(b,len,1);
    FFT(c,len,1);
    for(int i=0;i<len;i++){
        a[i]=a[i]*b[i];
        c[i]=c[i]*b[i];
    }
    FFT(a,len,-1);
    FFT(c,len,-1);
    for(int i=1;i<=n;i++)
        printf("%.3lf\n",a[i].x-c[n-i].x);
    return 0;
}
