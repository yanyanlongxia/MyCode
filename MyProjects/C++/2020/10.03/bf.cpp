//File: bf.cpp
//Author: yanyanlongxia
//Date: 2020/10/5
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,maxm,step[2000005];
vector<pair<int,int> >v;
inline bool check(int num)
{
    for (int i=v.size()-1;i>=0;i--)
    {
        int x=v[i].first,y=v[i].second;

    }
}
int main() {
    scanf("%d",&n);
    char opt[10];
    int x;
    for (int i=1;i<=10000;i++)
        step[i]=step[i-(i & -i)]+1;
    for (int i=1;i<=n;i++)
    {
        scanf("%s",opt);
        scanf("%d",&x);
        if (opt[0]=='c')
        {
            m++;
        }
        else
        {
            v.push_back(make_pair(x,m));
        }
    }

}
