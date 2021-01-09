//File: maker.cpp
//Author: yanyanlongxia
//Date: 2020/10/31
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int random(int n){
    return llabs((ll)((ll)rand()*rand())%n+1);
}
int main() {
    //freopen("maker.in","r",stdin);
    //freopen("maker.out","w",stdout);
    srand(time(0));
    int n=random(1e6)+3;
    printf("%d\n",n);
    for (int i=1;i<n;i++)
    {
        int a=random(1e9);
        printf("%d ",a);
    }
    int a=random(1e9);
    printf("%d",a);
    puts("");
    return 0;
}
