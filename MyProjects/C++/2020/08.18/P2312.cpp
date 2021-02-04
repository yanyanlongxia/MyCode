//File: P2312.cpp
//Author: yanyanlongxia
//Date: 2020/8/21
//
#include <bits/stdc++.h>
#define int long long
#define mo 194910011777
using namespace std;
int n,a[1000005],m;
vector<int>ans;
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10%mo+ch-48;ch=getchar();}
    return x*f%mo;
}
bool check(int x)
{
    int res=0;
    for(int i=n;i>=1;i--)
        res=(res+a[i])%mo*x%mo;
    res=(res+a[0])%mo;
    return !res;
}
signed main() {
    n=read();m=read();
    for (int i = 0; i <= n; ++i) {
        a[i]=read();
    }
    for (int i = 1; i <= m; ++i) {
        if(check(i))
            ans.push_back(i);
    }
    printf("%lld\n",ans.size());
    for (int i=0;i<ans.size();i++)
        printf("%lld\n",ans[i]);
    return 0;
}
