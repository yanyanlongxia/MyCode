#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
long long qpow(int a,int b,int r)
{
    long long ans=1,buff=a;
    while(b)
    {
        if(b&1)ans=(ans*buff)%r;
        buff=(buff*buff)%r;
        b>>=1;
    }
    return ans;
}
bool Miller_Rabbin(int n,int a)
{
    int r=0,s=n-1,j;
    if(!(n%a))
        return false;
    while(!(s&1)){
        s>>=1;
        r++;
    }
    long long k=qpow(a,s,n);
    if(k==1)
        return true;
    for(j=0;j<r;j++,k=k*k%n)
        if(k==n-1)
            return true;
    return false;
}
bool IsPrime(int n)
{
    int tab[]={2,3,5,13};
    for(int i=0;i<4;i++)
    {
        if(n==tab[i])
            return true;
        if(!Miller_Rabbin(n,tab[i]))
            return false;
    }
    return true;
}
int main()
{
    int i,N;
    long tmp, count;
    scanf("%d",&N);
    count = 0;
    for(i=0;i<N;i++)
    {
        scanf("%ld",&tmp);
        if(IsPrime(tmp))
            count++;
    }
    printf("%d\n",count);
}