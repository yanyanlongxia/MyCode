//
// Created by admin on 2020/7/23.
//
#include <iostream>
#define int long long
using namespace std;
int n,q,a[100005],c[2][100005],sum[100005];
int ask(int k,int x)
{
    int ans=0;
    for(;x;x-=x & -x)
        ans+=c[k][x];
    return ans;
}
void add(int k,int x,int d) {
    for (; x <= n; x += x & -x)
        c[k][x] += d;
}
signed main()
{
    char s;
    int l,r,d;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    for(int i=1;i<=q;i++)
    {
        cin>>s;
        if(s=='C')
        {
            cin>>l>>r>>d;
            add(0,l,d);
            add(0,r+1,-d);
            add(1,l,d*l);
            add(1,r+1,-(r+1)*d);
        }
        else
        {
            cin>>l>>r;
            cout<<(sum[r]+(r+1)*ask(0,r)-ask(1,r))-(sum[l-1]+l*ask(0,l-1)-ask(1,l-1))<<endl;
        }
    }
    return 0;
}