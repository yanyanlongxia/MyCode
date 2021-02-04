#include <bits/stdc++.h>
using namespace std;
const int mod=20200621;
vector<int> so[150000];
set<int> sr;
int n,ans,k;
void calc(int now,int step)
{
    if(step==k-1)
    {
        ans+=so[now].size();
        if(ans>mod)
            ans%=mod;
        return ;
    }
    for(int i=1; i < so[now].size(); i++)
        calc(so[now][i],step+1);
    if((so[now].empty())&&step==1)
        return;
    calc(now,step+1);
}
int main()
{
    int a,b,w;
    cin>>n>>k;
    for(int i=1;i<n;i++)
    {
        cin>>a>>b>>w;
        if(w==1)
        {
            so[b].push_back(a);
            so[a].push_back(b);
            sr.insert(a);
            sr.insert(b);
        }
    }
    for (set<int>::iterator it=sr.begin();it!=sr.end();it++)
        calc(*it,1);
    cout<<ans<<endl;
    return 0;
}
