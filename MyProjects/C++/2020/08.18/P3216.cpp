//File: P3216.cpp
//Author: yanyanlongxia
//Date: 2020/8/22
//[HNOI2011]数学作业
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,mod;
struct matrix
{
    int size,content[4][4];
    matrix (int s)
    {
        size=s;
        memset(content,0,sizeof(content));
    }
    void operator ~ ()
    {
        for (int i = 1; i <= size; ++i) {
            content[i][i]=1;
        }
    }
    matrix operator * (const matrix &b)const
    {
        matrix ret(3);
        for (int i = 1; i <= size; ++i) {
            for (int j = 1; j <= size; ++j) {
                for (int k = 1; k <= size; ++k) {
                    ret.content[j][k]=(ret.content[j][k]+(content[j][i]*b.content[i][k])%mod)%mod;
                }
            }
        }
        return ret;
    }
    matrix operator ^ (const int &b)const//快速幂
    {
        matrix ret(3),x=*this;
        ~ret;
        int tmp=b;
        for(;tmp;tmp>>=1)
        {
            if(tmp&1)
                ret=ret*x;
            x=x*x;
        }
        return ret;
    }
};
matrix ans(3);
void  calc(int p,int b)
{
    matrix x(3);
    x.content[1][1]=p%mod;
    x.content[1][2]=x.content[1][3]=x.content[2][2]=x.content[2][3]=x.content[3][3]=1;
    ans=(x^b)*ans;
}
signed main() {
    scanf("%lld%lld",&n,&mod);
    ~ans;
    int r=10;
    while (r<=n)
    {
        calc(r,r-(r/10));
        r*=10;
    }
    calc(r,n-r/10+1);
    printf("%lld\n",ans.content[1][3]);
    return 0;
}
