//
// Created by admin on 2020/6/21.
//
#include <bits/stdc++.h>
using namespace std;
int n,y[400000],ny[400000];
struct segment_tree
{
    int l,r,len,cnt;  //左区间，右区间，矩形覆盖长度，被覆盖次数
}t[400000];
struct line
{
    int x,yu,yd,s;
}s[400000];
void build(int p,int l,int r)//建树
{
    t[p].l=l;
    t[p].r=r;
    if(l==r)
    {
        t[p].len=0;
        t[p].cnt=0;
        return ;
    }
    int mid=(l+r)/2;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
}
void spread(int p)
{
    if(t[p].l==t[p].r)  //搜到叶节点
        return ;
    spread(2*p);
    spread(2*p+1);
    t[p].len=t[2*p].len+t[2*p+1].len;  //成功更新
}
void change(int p,int l,int r,int d,int i)
{
    if(l<=t[p].l&&t[p].r<=r)
    {
        t[p].cnt+=d;
        if(t[p].cnt>0)
        {
            t[p].len=y[t[p].r-1]-y[t[p].l-1];
            t[p].len*=(s[i+1].x-s[i].x);
        }//求出区间覆盖面积
        else
            t[p].len=0;
        return;
    }
    int mid=(t[p].l+t[p].r)/2;
    if(l<mid)
        change(p*2,l,r,d,i);
    if(r>mid)
        change(p*2+1,l,r,d,i);
}
bool cmp(line a,line b)
{
    return a.x<b.x;
}
int main()
{
    int ty[400000],num;
    int a,b,c,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j=2*i;
        cin>>a>>b>>c>>d;
        s[j].x=a;
        s[j].yu=b;
        s[j].yd=d;
        s[j].s=1;
        s[j+1].x=c;
        s[j+1].yu=b;
        s[j+1].yd=d;
        s[j+1].s=-1;
        ty[j]=b;
        ty[j+1]=d;
    }
    n<<=1;
    sort(s,s+n,cmp);
    sort(ty,ty+n);
    y[0]=ty[0];
    for(int i=num=1;i<2*n;i++)
        if(ty[i]!=ty[i-1])
            y[num++]=ty[i];//  离散化
    build(1,1,num);
    for(int i=0;i<num;i++)
        ny[y[i]]=i;    //双向映射
    for(int i=0;i<n*2-1;i++)
    {
        int l=ny[s[i].yu]+1;
        int r=ny[s[i].yd]+1;
        change(1,l,r,s[i].s,i);
    }
    spread(1);
    cout<<t[1].len<<endl;
    return 0;
}
