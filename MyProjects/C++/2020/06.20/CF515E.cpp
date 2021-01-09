//
// Created by admin on 2020/6/20.
//
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+7;
const long long inf = 1LL*1e17;
long long d[MAXN],h[MAXN];
int n,m,a,b;
struct segment_tree //线段树
{
    int l,r;
    long long a,b,maxn;
}t[4*MAXN];
void build(int x,int l,int r)
{
    t[x].l=l;
    t[x].r=r;
    if(l==r)
    {
        t[x].a=h[l]+d[l-1];
        t[x].b=h[l]-d[l-1];
        t[x].maxn=-inf;
    }
    else
    {
        int mid=(l+r)/2;
        build(x*2,l,mid);
        build(x*2+1,mid+1,r);
        t[x].a=max(t[x*2].a,t[x*2+1].a);
        t[x].b=max(t[x*2].b,t[x*2+1].b);
        t[x].maxn=max(t[x*2].maxn,max(t[x*2+1].maxn,t[x*2].b+t[x*2+1].a)); //区间最值
    }
}
segment_tree ask(int x,int l,int r) //询问操作
{
    int lv=t[x].l,rv=t[x].r;
    if(l<=lv && rv<=r)
        return t[x];
    int mid=(lv+rv)/2; //二分
    segment_tree t1,t2,t3;//左子树，右子树，合并后树
    t1.a=t1.b=t1.maxn=t2.a=t2.b=t2.maxn=t3.a=t3.b=t3.maxn= -1*inf; //全部初始化为负无穷
    if(l<=mid)
        t1=ask(x*2,l,r);
    if(r>mid)
        t2=ask(x*2+1,l,r);
    t3.a=max(t1.a,t2.a);
    t3.b=max(t1.b,t2.b);
    t3.maxn=max(t1.maxn,max(t2.maxn,t1.b+t2.a));//区间最值
    return t3;
}
int main()
{
    ios::sync_with_stdio(false); //优化
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>d[i];
        d[n+i]=d[i];//断环为链
    }
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
        h[i]*=2;
        h[n+i]=h[i];//断环为链
    }
    for(int i=1;i<=2*n;i++)
        d[i]+=d[i-1];  //处理为前缀和的形式
    build(1,1,2*n);  //建树
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        if(a<=b)
            cout<<ask(1,b+1,a+n-1).maxn<<endl; //取补集进行操作
        else
            cout<<ask(1,b+1,a-1).maxn<<endl;
    }
    return 0;
}
