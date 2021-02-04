//File: P3803.cpp
//Author: yanyanlongxia
//Date: 2020/12/31
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=5e6+5;
const double PI=acos(-1.0);
int n,m,len,cnt,rev[N << 1];
struct Complex{
    double x,y;
    Complex() {}
    Complex(double _x,double _y): x(_x),y(_y) {}
    Complex operator + (Complex val)const {
        return Complex(x+val.x,y+val.y);
    }
    Complex operator - (Complex val)const{
        return Complex(x-val.x,y-val.y);
    }
    Complex operator * (Complex val)const {
        return Complex(x*val.x-y*val.y,x*val.y+y*val.x);
    }

}a[N<<1],b[N<<1],c[N<<1];
void FFT(Complex *a,int len,int flag){
    for(int i=0;i<len;i++){
        if(i > rev[i])
            swap(a[i],a[rev[i]]);
    }
    for(int i=2;i<=len;i<<=1){
        Complex wn(double(cos(flag*2*PI/i)),double(sin(flag*2*PI/i)));
        for(int j=0;j<len;j+=i){
            Complex w(1,0);
            for(int k=j;k<j+(i>>1);k++){
                Complex u=a[k];
                Complex t=a[k+(i>>1)]*w;
                a[k]=u+t;
                a[k+(i>>1)]=u-t;
                w=w*wn;
            }
        }
    }
    if(flag==-1){
        for(int i=0;i<len;i++)
            a[i].x/=len;
    }
}
int main() {
    freopen("data.in","rev",stdin);
    //freopen("P3803.out","w",stdout);
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i=0;i<=n;i++)
        scanf("%lf", &a[i].x);
    for(int i=0;i<=m;i++)
        scanf("%lf", &b[i].x);
    len=1,cnt=0;
    while(len<=n+m){
        len<<=1;
        cnt++;
    }
    for(int i=0;i<len;i++)
        rev[i]= (rev[i >> 1] >> 1) | ((i & 1) << (cnt - 1));
    FFT(a,len,1);
    FFT(b,len,1);
    for(int i=0;i<len;i++)
        c[i]=a[i]*b[i];
    FFT(c,len,-1);
    for(int i=0;i<=n+m;i++)
        printf("%d ",int(c[i].x+0.5));
    return 0;
}
