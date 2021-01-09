//File: ZR1584.cpp
//Author: yanyanlongxia
//Date: 2020/10/29
//
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
#define ll long long
using namespace std;
const int N=2e6;
int n,col[N],cnt[N],f[N],ans;
inline int read() {
    int fe = 1, ret = 0;
    char ch = getchar();
    while (!isdigit(ch)) {
        if (ch == '-')
            fe = -1;
        ch = getchar();
    }
    while (isdigit(ch)) {
        ret = 10 * ret + ch - '0';
        ch = getchar();
    }
    return fe * ret;
}
void solve(int l,int r) {
    if (l > r || r - l + 1 <= ans) {
        for (int i = l; i <= r; i++)
            cnt[col[i]] = 0;
        return;
    }
    int x=l,y=r,pos=0;
    while (x<=y){
        if (cnt[col[x]]<f[r-l+1])
        {
            pos=x;
            break;
        }
        if(cnt[col[y]]<f[r-l+1])
        {
            pos=y;
            break;
        }
        x++;
        y--;
    }
    if (!pos)
    {
        ans=max(ans,r-l+1);
        for (int i=l;i<=r;i++)
            cnt[col[i]]=0;
        return ;
    }
    int mid=(l+r)>>1;
    cnt[col[pos]]--;
    if (pos<=mid){
        for (int i=l;i<pos;i++)
            cnt[col[i]]--;
        solve(pos+1,r);
        for (int i=l;i<pos;i++)
            cnt[col[i]]++;
        solve(l,pos-1);
    }else{
        for (int i=r;i>pos;i--)
            cnt[col[i]]--;
        solve(l,pos-1);
        for (int i=r;i>pos;i--)
            cnt[col[i]]++;
        solve(pos+1,r);
    }
}
int main() {
    freopen("data.in", "r", stdin);
    //freopen("ZR1584.out","w",stdout);
    n = read();
    for (int i = 1; i <= n; i++) {
        col[i] = read();
        cnt[col[i]]++;
    }
    for (int i = 1; i <= n; i++)
        f[i] = read();
    solve(1, n);
    printf("%d\n", ans);
    return 0;
}
