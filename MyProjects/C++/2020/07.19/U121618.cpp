//
// Created by admin on 2020/7/28.
//
#include <bits/stdc++.h>
using namespace std;
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(!isdigit(ch)){if(ch=='-') f=-1;  ch=getchar();}
    while (isdigit(ch)){ x=10*x+ch-'0';ch=getchar();}
    return x*f;
}
int f(int n){
    int i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int m;
    m = read();
    while(m){
        int i,n,k=0;
        for(i=0;i<m;i++){
            n=read();
            if(f(n)&&n!=1)
                k++;
        }
        cout<<k<<endl;
        m = read();
    }
}
