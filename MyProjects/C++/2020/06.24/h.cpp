#include <bits/stdc++.h>
using namespace std;
int n,k,s,a[10000],wd[10000],wi[10000];
int main()
{
    int sum=0,minn=0x3f3f3f3f;
    cin>>n>>k>>s;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=k;i++)
        sum+=a[i];
    int delta=s-sum;
    for(int i=1;i<=k;i++)
        for(int j=k+i;j<=n;j+=k)
        {
            if(a[j]!=a[i]+delta)
                wd[i]++;
            if(a[j]!=a[i])
                wi[i]++;
        }
    for(int i=1;i<=k;i++)
    {
        sum=wd[i];
        for(int j=1;j<=k;j++)
            if(i!=j)
                sum+=wi[j];
        minn=min(minn,sum);
    }
    cout<<minn+1<<endl;
    return 0;
}
