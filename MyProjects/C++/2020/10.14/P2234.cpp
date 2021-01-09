//File: P2234.cpp
//Author: yanyanlongxia
//Date: 2020/10/19
//[HNOI2002]营业额统计
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e6;
int n,cnt,root,ans;
struct fhq{
    int l,r,sz,val,dat;
}t[N];
inline int newnode(int val){
    t[++cnt].val=val;
    t[cnt].sz=1;
    t[cnt].dat=rand();
    return cnt;
}
inline void split(int p,int val,int &x,int &y){
    if (!p)
        x=y=0;
    else{
        if (t[p].val<=val){
            x=p;
            split(t[p].r,val,t[p].r,y);
        }else
        {
            y=p;
            split(t[p].l,val,x,t[p].l);
        }
    }
}
inline int merge(int x,int y)
{
    if (!x || !y)
        return x+y;
    if (t[x].dat>t[y].dat){
        t[x].r=merge(t[x].r,y);
        return x;
    }else{
        t[y].l=merge(x,t[y].l);
        return y;
    }
}
int x,y,z;
inline void insert(int val){
    split(root,val,x,y);
    root=merge(merge(x,newnode(val)),y);
}
inline int getpre(int val){
    split(root,val,x,y);
    int p=x,res;
    while (t[p].r)
        p=t[p].r;
    res=t[p].val;
    root=merge(x,y);
    return res;
}
inline int getnext(int val){
    split(root,val,x,y);
    int p=y,res;
    while (t[p].l)
        p=t[p].l;
    res=t[p].val;
    root=merge(x,y);
    return res;
}
int main() {
    int a,b,c;
    freopen("data.in","r",stdin);
    //freopen("P2234.out","w",stdout);
    srand(time(0));
    scanf("%d",&n);
    insert(0x3f3f3f3f);
    insert(-0x3f3f3f3f);
    scanf("%d",&a);
    ans=a;
    insert(a);
    for (int i=2;i<=n;i++){
        scanf("%d",&a);
        b=a-getpre(a);
        c=getnext(a)-a;
        ans+=min(b,c);
        insert(a);
    }
    printf("%d\n",ans);
    return 0;
}
