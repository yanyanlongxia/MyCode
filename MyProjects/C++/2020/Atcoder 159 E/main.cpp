#include<bits/stdc++.h>
using namespace std;
const int N=15,M=1005;
int h,w,k;
int s[15][1005];
int main()
{
    cin>>h>>w>>k;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            char m;
            cin>>m;
            int e=m-'0';
            s[i][j]=e+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
        }
    }
    int minsum=h+w-2;
    for(int i=0;i<(1<<(h-1));i++)
    {
        vector<int> q;
        q.push_back(0);
        int sum=0;
        for(int j=0;j<h-1;j++)
        {
            if(i>>j&1)
            {
                q.push_back(j+1);
                sum++;
            }
        }
        q.push_back(h);
        bool flag=true;
        int lastline=0;
        for(int j=1;j<=w;j++)
        {
            int maxn=0;
            for(int d=1;d<q.size();d++)
                maxn=max(maxn,s[q[d]][j]-s[q[d]][lastline]-s[q[d-1]][j]+s[q[d-1]][lastline]);
            if(maxn>k)
            {
                if(j==1)
                {
                    flag=false;
                    break;
                }
                sum++;
                lastline=j-1;
            }
        }
        if(!flag)
            continue;
        minsum=min(minsum,sum);
    }
    cout<<minsum<<endl;
    return 0;
}