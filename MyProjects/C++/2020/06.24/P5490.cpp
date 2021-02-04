#include <iostream>
#include <algorithm>
#define int long long
using namespace std;
int x1,x2,y1,y2,x[1000000],n,tot,ans;
struct segment
{
    int l,r,sum,len;
}t[4000000];
struct scanl
{
    int l,r,h,m;
}line[4000000];
void build(int p,int l,int r)
{
    t[p].l=l;
    t[p].r=r;
    if (l==r)
        return;
    int mid=(l+r)>>1;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
}
void update(long long p) {
    int l=t[p].l,r=t[p].r;
    if(t[p].sum)
        t[p].len=x[r+1]-x[l];
    else
        t[p].len=t[p*2].len+t[2*p+1].len;
}

void change(int p,int L,int R,int c)
{
    int l=t[p].l,r=t[p].r;
    if(x[r+1]<=L || x[l]>=R)
        return;
    if(L<=x[l]&&x[r+1]<=R)
    {
        t[p].sum+=c;
        update(p);
        return ;
    }
    change(p*2,L,R,c);
    change(p*2+1,L,R,c);
    update(p);
}
bool cmp(scanl a,scanl b)
{
    return a.h<b.h;
}
signed main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        x[2*i-1]=x1;x[2*i]=x2;
        line[2*i-1]=(scanl){x1,x2,y1,1};
        line[2*i]=(scanl){x1,x2,y2,-1};
    }
    n<<=1;
    sort(line+1,line+n+1,cmp);
    sort(x+1,x+n+1);
    tot=unique(x+1,x+n+1)-x-1;
    build(1,1,tot-1);
    for(int i=1;i<n;i++)
    {
        change(1,line[i].l,line[i].r,line[i].m);
        ans+=t[1].len*(line[i+1].h-line[i].h);
    }
    cout<<ans<<endl;
    return 0;
}