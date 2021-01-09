//File: P1903.cpp
//Author: yanyanlongxia
//Date: 2020/10/14
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=7e5;
int n,m,a[N],bls,bel[N],cnt[N],res=0,ans[N],qcnt,ccnt;
struct query{
    int l,r,pre,pos;
    bool operator < (query x)const
    {
        if (bel[l] == bel[x.l]) {
            if (bel[r] == bel[x.r])
                return pre < x.pre;
            else
                return r < x.r;
        } else
            return l < x.l;
    }
}ask[N];
struct chl{
    int pos,val;
}change[N];
void add(int x)
{
    if (cnt[x]++==0)
        ++res;
}
void sub(int x)
{
    if (--cnt[x]==0)
        --res;
}
void cha(int x, int i) {
    if (change[x].pos >= ask[i].l && change[x].pos <= ask[i].r) {
        sub(a[change[x].pos]);
        add(change[x].val);
    }
    swap(a[change[x].pos], change[x].val);
}
int main() {
    freopen("data.in", "r", stdin);
    cin >> n >> m;
    bls = pow(n, 2.0 / 3);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        bel[i] = i / bls;
    }
    char opt[10];
    while (m--) {
        scanf("%s", opt);
        if (opt[0] == 'Q') {
            ++qcnt;
            cin >> ask[qcnt].l >> ask[qcnt].r;
            ask[qcnt].pre = ccnt;
            ask[qcnt].pos = qcnt;
        } else {
            ++ccnt;
            cin >> change[ccnt].pos >> change[ccnt].val;
        }
    }
    sort(ask + 1, ask + qcnt + 1);
    int l = 1, r = 0, now = 0;
    for (int i = 1; i <= qcnt; ++i) {
        while (l > ask[i].l) add(a[--l]);
        while (r < ask[i].r) add(a[++r]);
        while (l < ask[i].l) sub(a[l++]);
        while (r > ask[i].r) sub(a[r--]);
        while (now < ask[i].pre) cha(++now, i);
        while (now > ask[i].pre) cha(now--, i);
        ans[ask[i].pos] = res;
    }
    for (int i = 1; i <= qcnt; ++i)
        cout << ans[i] << endl;
    return 0;
}
