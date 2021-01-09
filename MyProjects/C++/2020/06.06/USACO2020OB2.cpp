//
// Created by admin on 2020/6/6.
//
#include <bits/stdc++.h>
using namespace std;
struct cow
{
    int pos;
    bool ge;
}x[2000];
int rr=0x3f3f3f3f,num,n,cha[2000],lx[2000];
bool cmp(cow a,cow b)
{
    return a.pos<b.pos;
}
int main()
{
    freopen("socdist2.in","r",stdin);
    freopen("socdist2.out","w",stdout);
    int temp=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x[i].pos>>x[i].ge;
    sort(x+1,x+n+1,cmp);
    for(int i=1;i<=n;i++)
        if(x[i].ge==0)
        {
            if(x[i-1].ge==0&&x[i+1].ge==0)
                continue;
            if(x[i-1].ge==1)
            {
                if(x[i+1].ge==1)
                    temp=min(x[i].pos-x[i-1].pos,x[i+1].pos-x[i].pos);
                else
                    temp=x[i].pos-x[i-1].pos;
            }
            else
                temp=x[i+1].pos-x[i].pos;
            rr=min(rr,temp);
        }
    int j=1;
    for(int i=1;i<=n;i++)
        if(x[i].ge==1)
        {
            lx[j]=x[i].pos;
            j++;
        }
    for(int i=1;i<j;i++)
        cha[i]=lx[i+1]-lx[i];
    for(int i=1;i<j;i++)
        if(cha[i]>=rr)
            num++;
    num++;
    cout<<num<<endl;
    return 0;
}
