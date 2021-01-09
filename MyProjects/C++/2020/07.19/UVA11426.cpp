//
// Created by admin on 2020/7/22.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxlen=5000000;
int n,ans=0;
int v[maxlen+5],m[maxlen+5],pre[maxlen+5];
inline void init()
{
    for (int i=1;i<=maxlen;i++)  v[i]=m[i]=1;
    for (int i=2;i<=maxlen;i++)
    {
        if (v[i]==0)  continue;
        m[i]=-1;

        for (int j=2*i;j<=maxlen;j+=i)
        {
            v[j]=0;
            if ((j/i)%i==0)  m[j]=0;
            else m[j]=m[j]*(-1);
        }
    }
    for (int i=1;i<=maxlen;i++)  pre[i]=pre[i-1]+m[i];
}
signed main()
{
    init();
    while(cin>>n)
    {
        ans=0;
        if(n==0)
            return 0;
        int al,ar;
        for (al=1;al<=n;al++)
        {
            ar=n/(n/al);
            int now=n/al,bl,br,res=0;
            for (bl=1;bl<=now;bl++)
            {
                br=now/(now/bl);
                res+=(pre[br]-pre[bl-1])*(now/bl)*(now/bl);
                bl=br;
            }
            ans+=res*(((al+ar)*(ar-al+1))/2);
            al=ar;
        }
        ans=ans-((n+1)*n)/2;
        cout<<ans/2<<endl;
    }
    return 0;
}
