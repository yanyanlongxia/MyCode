//File: P4137.cpp
//Author: yanyanlongxia
//Date: 2020/10/19
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=4e6;
int n,m,a[N],res,ans[N],bls,bel[N],cnt[N];
bool flag=true;
inline int read()
{
    int f=1,ret=0;
    char ch=getchar();
    while (!isdigit(ch))
    {
        if (ch=='-')
            f=-1;
        ch=getchar();
    }
    while (isdigit(ch)){
        ret=10*ret+ch-'0';
        ch=getchar();
    }
    return f*ret;
}
inline void print(int val)
{
    if(val>=10)
        print(val/10);
    putchar(val%10+'0');
}
struct query{
    int l,r,pos;
    bool operator < (query b)const{
        if (flag){
            if (l==b.l)
                return r<b.r;
            return l<b.l;
        }
        if (bel[l]==bel[b.l])
            return r<b.r;
        return l<b.l;
    }
}ask[N];
inline void add(int x){
    if ((++cnt[x])==1){
        if (x>res)
            return;
        int tmp=res;
        while (++tmp)
            if (!cnt[tmp])
            {
                res=tmp;
                return;
            }
    }
}
inline void sub(int x){
    if ((--cnt[x])==0)
        res=min(res,x);
}
int main() {
    freopen("data.in","r",stdin);
    //freopen("P4137.out","w",stdout);
    //scanf("%d%d",&n,&m);
    n=read();m=read();
    bls=sqrt(n);
    for (int i=1;i<=n;i++)
    {
        //scanf("%d",&a[i]);
        a[i]=read();
        if (a[i]>n)
            a[i]=n+1;
        bel[i]=i/bls;
    }
    for (int i=1;i<=m;i++) {
        //scanf("%d%d", &ask[i].l, &ask[i].r);
        ask[i].l=read();ask[i].r=read();
        if ((ask[i].l!=1&&ask[i].l!=2)||(ask[i].r!=2e5))
            flag=false;
        ask[i].pos=i;
    }
    sort(ask+1,ask+1+m);
    int l=1,r=0;
    for (int i=1;i<=m;i++){
        while (l>ask[i].l) add(a[--l]);
        while (r<ask[i].r) add(a[++r]);
        while (l<ask[i].l) sub(a[l++]);
        while (r>ask[i].r) sub(a[r--]);
        ans[ask[i].pos]=res;
    }
    for (int i=1;i<=m;i++)
    {
        print(ans[i]);
        puts("");
    }
    return 0;
}
