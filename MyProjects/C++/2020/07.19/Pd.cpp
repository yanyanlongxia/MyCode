//
// Created by admin on 2020/7/19.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mo=4294967296;
int n,m;
char s[500000];
struct segment_tree {
    int l, r, dat[6][6], ch;
}t[200005];//200001==ans    200002==tmpans
void merge(int s1,int s2,int p)
{

    for(int i=1;i<=5;i++)
        for(int j=i;j<=5;j++)
        {
            t[p].dat[i][j]=t[s1].dat[i][j]+t[s2].dat[i][j];
            t[p].dat[i][j]%=mo;
            for(int k=i;k<j;k++)
            {
                t[p].dat[i][j]+=t[s1].dat[i][k]*t[s2].dat[k+1][j];
                t[p].dat[i][j]%=mo;
            }
        }
}
void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if(l==r)
    {
        if(s[l]=='(')
            t[p].dat[1][1]=1;
        if(s[l]=='0')
            t[p].dat[2][2]=t[p].dat[4][4]=1;
        if(s[l]=='w')
            t[p].dat[3][3]=1;
        if(s[l]==')')
            t[p].dat[5][5]=1;
        return ;
    }
    int mid=(l+r)/2;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
    merge(p*2,p*2+1,p);
}
void spread(int p)
{
    if(t[p].ch)
    {
        t[p*2].ch=t[p*2+1].ch=t[p].ch;
        memset(t[p].dat,0,sizeof(t[p].dat));
        if(t[p].ch=='(')
            t[p].dat[1][1]=(t[p].r-t[p].l+1)%mo;
        if(t[p].ch=='0')
            t[p].dat[2][2]=t[p].dat[4][4]=(t[p].r-t[p].l+1)%mo;
        if(t[p].ch=='w')
            t[p].dat[3][3]=(t[p].r-t[p].l+1)%mo;
        if(t[p].ch==')')
            t[p].dat[5][5]=(t[p].r-t[p].l+1)%mo;
        t[p].ch=0;
    }
}
void change(int p,int l,int r,char k)
{
    if(l<=t[p].l&&t[p].r<=r)
    {
        t[p].ch=k;
        spread(p);
        return ;
    }
    spread(p*2);spread(p*2+1);
    int mid=(t[p].l+t[p].r)/2;
    if(mid>=l)
        change(p*2,l,r,k);
    if(mid<r)
        change(p*2+1,l,r,k);
    merge(p*2,p*2+1,p);
}
void ask(int p,int l,int r)
{
    if(l<=t[p].l&&t[p].r<=r)
    {
        merge(200001,p,200002);
        memcpy(t[200001].dat,t[200002].dat,sizeof(t[200002].dat));
    }
    int mid=(t[p].l+t[p].r)/2;
    if(p*2>200000)
        return;
    if(l<=mid)
        ask(p*2,l,r);
    if(r>mid)
        ask(p*2+1,l,r);
}
signed main()
{
    scanf("%lld%lld",&n,&m);
    scanf("%s", s + 1);
    build(1,1,n);
    while(m--)
    {
        char op,z;
        int x,y;
        scanf("%c",&op);
        if(op=='A')
        {
            cin>>x>>z;
            change(1,x,x,z);
        }
        else
        {
            if(op=='B')
            {
                cin>>x>>y>>z;
                change(1,x,y,z);
            }
            else
            {
                scanf("%lld%lld",&x,&y);
                memset(t[200001].dat,0,sizeof(t[200001].dat));
                ask(1,x,y);
                cout<<t[200001].dat[1][5]<<endl;
            }
        }
    }
    return 0;
}
