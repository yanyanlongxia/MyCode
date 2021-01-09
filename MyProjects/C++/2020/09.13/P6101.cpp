//File: P6101.cpp
//Author: yanyanlongxia
//Date: 2020/9/17
//
#include <bits/stdc++.h>
#define int __int128
using namespace std;
string s;
int buc[200],need;
bool cmp(int a,int b)
{
    return a>b;
}
inline __int128 read(){
    __int128 x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=x*10+ch-'0';
        ch=getchar();
    }
    return x*f;
}

inline void print(__int128 x){
    if(x<0){
        putchar('-');
        x=-x;
    }
    if(x>9)
        print(x/10);
    putchar(x%10+'0');
}
signed main() {
    cin>>s;
    need=read();
    for (int i=0;i<s.size();i++)
        buc[s[i]]++;
    sort(buc,buc+200,cmp);
    int t=buc[0],tar=need-s.size()+t;
    int b=0;
    if (tar<t) {
        puts("0");
        return 0;
    }
    while (t<<b < tar)
        b++;
    print(b);
    puts("");
    return 0;
}
