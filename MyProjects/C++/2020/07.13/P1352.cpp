//
// Created by admin on 2020/7/18.
//
#include <bits/stdc++.h>
using namespace std;
int n,h[15000],f[15000][2];
bool vi[15000];
vector<int> so[15000];
void dp(int x)
{
    f[x][0]=0;f[x][1]=h[x];
    for(int i=0;i<so[x].size();i++)
    {
        int y=so[x][i];
        dp(y);
        f[x][0]+=max(f[y][0],f[y][1]);
        f[x][1]+=f[y][0];
    }
}
int main()
{
    int l,k, root = 0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>h[i];
    for(int i=1;i<n;i++)
    {
        cin>>l>>k;
        vi[l]=true;
        so[k].push_back(l);
    }
    for(int i=1;i<=n;i++)
        if(!vi[i])
        {
            root=i;
            break;
        }
    dp(root);
    cout<<max(f[root][0],f[root][1])<<endl;
    return 0;
}
