//File: test.cpp
//Author: yanyanlongxia
//Date: 2020/8/12
//
#include <bits/stdc++.h>
#define MAXN 1000
using namespace std;
int c[MAXN+5], b[MAXN+5], T = 1;
#define Clear (++T)
inline void Add(int i, int v){
    for(;i<=MAXN;c[i]=b[i]<T?v:c[i]+v,b[i]=T,i+=i&-i);
}
inline int Sum(int i){
    int r=0;for(;i;r+=b[i]<T?0:c[i],i-=i&-i);
    return r;
}
int main() {

    return 0;
}