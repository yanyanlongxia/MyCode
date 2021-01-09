#include <bits/stdc++.h>
using namespace std;
int n,ans=0,na,nb;
vector<bool> a;
void dfs(int t)
{
    if(t==n)
    {
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                a[i] == a[j] ? na : nb++;
        if(na==nb)
            ans++;
        return;
    }
    a.push_back(1);
    na++;
    dfs(t+1);
    a.pop_back();
    na--;
    a.push_back(0);
    nb++;
    dfs(t+1);
    nb--;
}
int main()
{
    cin>>n;
    if((n+2)%4==0||(n+3)%4==0)
    {
        cout<<0<<endl;
        return 0;
    }
    dfs(0);
    cout<<ans<<endl;
    return 0;
}
