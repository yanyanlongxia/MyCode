//
// Created by admin on 2020/8/1.
//
#include <bits/stdc++.h>
#define ll long long
#define sz(x) (int)(x).size()
using namespace std;
ll gcd(ll a,ll b)
{
    return b==0 ?  a  :  gcd(b,a%b);
}
void solve()
{
    ll m,d,w,l,r,n,c,e;
    cin>>m>>d>>w;
    e=gcd(d-1,w);
    w/=e;
    l=w;r=(min(m,d)/w)*w;
    if (l>r)
        cout<<"0\n";
    else
    {
        n=(r-l)/w+1;
        c=(min(m,d)-(2*w))-(min(m,d)-w);
        cout<<(((2*(min(m,d)-w)+(n-1)*(c)))*n)/2<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    while (n--)
        solve();
    return 0;
}
