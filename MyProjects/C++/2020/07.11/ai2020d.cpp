//
// Created by admin on 2020/7/11.
//
#include <bits/stdc++.h>
using namespace std;
int n;
bitset<25000> a;
int get()
{
    int ans=0;
    for(int i=0;i<n;i++)
        ans+=a[i]*(1<<i);
    return ans;
}
void mode(bitset<2500>&b,int mo)
{

}
int main()
{
    cin>>n;
    for(int i=n-1;i>=0;i--)
        a[i]=int(getchar()-'0');
    for(int i=n-1;i>=0;i--)
    {
        a.flip(i);
        bitset<25000>b;
        b=a;
        int re=b.to_ulong(),an=-1;
        while(re)
        {
            an++;
            re=re%a.count();
        }
        cout<<an<<endl;
        a.flip(i);
    }
    return 0;
}

