#include<bits/stdc++.h>
using namespace std;
#define maxn 1000119
int num[maxn],tree[maxn],booll[maxn],nnn[maxn],N,ww;;
struct tt
{
    int l,r;
    int pos;
};
tt ask[maxn];
bool cmp(tt x,tt y)
{
    return x.r<y.r;
}
int lowbit(int n)
{
    return n&(-n);
}
void add(int n,int now)
{
    while(n<=N)
    {
        tree[n]+=now;
        n+=lowbit(n);
    }
}
int sum(int n)
{
    int ans=0;
    while(n!=0)
    {
        ans+=tree[n];
        n-=lowbit(n);
    }
    return ans;
}
int main()
{
    scanf("%d",&N);
    scanf("%d",&ww);
    for(int i=1;i<=N;i++)
        scanf("%d",&num[i]);
    for(int i=1;i<=ww;i++)
    {
        scanf("%d%d",&ask[i].l,&ask[i].r);
        ask[i].pos=i;
    }
    sort(ask+1,ask+1+ww,cmp);
    int next=1;
    for(int i=1;i<=ww;i++)
    {
        for(int j=next;j<=ask[i].r;j++)
        {
            if(booll[num[j]])
                add(booll[num[j]],-1);
            add(j,1);
            booll[num[j]]=j;
        }
        next=ask[i].r+1;
        nnn[ask[i].pos]=sum(ask[i].r)-sum(ask[i].l-1);
    }
    for(int i=1;i<=ww;i++)
        cout<<nnn[i]<<endl;
    return  0;
}
