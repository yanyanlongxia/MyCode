//File: ARC104C.cpp
//Author: yanyanlongxia
//Date: 2020/10/3
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1000005],b[1000005],tot1,tot2,re[1000005],spp[1000005];
int flag[1000005];
pair<int,int> pr[1000005],su[1000005];
set<int>used;
bool cmp1(pair<int,int>x,pair<int,int>y)
{
    return x.first<y.first;
}
bool cmp2(pair<int,int>x,pair<int,int>y)
{
    return x.second>y.second;
}
signed main() {
    memset(flag,-1, sizeof(flag));
    scanf("%lld",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld%lld",&a[i],&b[i]);
        if ((b[i]!=-1 && a[i]>b[i])||a[i]>2*n||b[i]>2*n ||a[i]==0||b[i]==0||a[i]<-1||b[i]<-1)
        {
            puts("No");
            return 0;
        }
        if (a[i]==-1 && b[i]==-1)
            continue;
        if (a[i]!=-1)
            pr[++tot1]=make_pair(a[i],b[i]);
        if (b[i]!=-1)
            su[++tot2]=make_pair(a[i],b[i]);
        if (a[i]!=-1 && spp[a[i]]!=0)
        {
            puts("No");
            return 0;
        }
        if (b[i]!=-1 && spp[b[i]]!=0)
        {
            puts("No");
            return 0;
        }
        spp[a[i]]=1;
        spp[b[i]]=1;
    }
    for (int i=1;i<=2*n;i++)
        used.insert(i);
    sort(pr+1,pr+1+tot1,cmp1);
    sort(su+1,su+1+tot2,cmp2);
    int r=-2,e=0;
    bool ifa=false;
    for (int i=1;i<=tot1;i++)
    {
        if (used.find(pr[i].first)!=used.end())
            used.erase(pr[i].first);
        if (used.find(pr[i].second)!=used.end())
            used.erase(pr[i].second);
        if (!ifa)
        {
            if (pr[i].second!=-1)
            {
                r=pr[i].second;
                e=pr[i].second-pr[i].first;
                flag[pr[i].first]= 1;
                re[pr[i].first]=re[pr[i].second]=e;
                flag[pr[i].second]=0;
                ifa=true;
            }
        }else
        {
            if (pr[i].first>r)
            {
                ifa=false;
                i--;
                continue;
            }
            if (pr[i].second!=-1 && pr[i].second!=pr[i].first+e)
            {
                puts("No");
                return 0;
            }
            if (pr[i].second==-1)
            {
                pr[i].second=pr[i].first+e;
                r=pr[i].second;
            }
            flag[pr[i].first]= 1;
            re[pr[i].first]=re[pr[i].second]=e;
            flag[pr[i].second]=0;
        }
    }
    r=0,e=0;
    ifa=false;
    for (int i=1;i<=tot2;i++)
    {
        if (used.find(su[i].first)!=used.end())
            used.erase(su[i].first);
        if (used.find(su[i].second)!=used.end())
            used.erase(su[i].second);
        if (!ifa)
        {
            if (su[i].first!=-1)
            {
                r=su[i].first;
                e=su[i].second-su[i].first;
                flag[su[i].first]= 1;
                re[su[i].first]=re[su[i].second]=e;
                flag[su[i].second]=0;
                ifa=true;
            }
        }else
        {
            if (su[i].second<r)
            {
                ifa=false;
                i--;
                continue;
            }
            if (su[i].first!=-1 && su[i].first!=su[i].second-e)
            {
                puts("No");
                return 0;
            }
            if (su[i].first==-1)
            {
                su[i].first=su[i].second-e;
                r=su[i].first;
            }
            flag[su[i].first]= 1;
            re[su[i].first]=re[su[i].second]=e;
            flag[su[i].second]=0;
        }
    }
    /*
    for (set<int>::iterator it=used.begin();it!=used.end();it++)
    {
        int now=*it;
        if (now==1 || flag[now-1]==0)
        {
            if (flag[now+1]==-1)
            {
                flag[now]=1;
                flag[now+1]=0;
                re[now]=re[now+1]=1;
                used.erase(now);
                used.erase(now+1);
            }
            else
            {
                if (flag[now+1]==0)
                {
                    puts("No");
                    return 0;
                }
                e=re[now+1];
                if (used.find(now+e)==used.end() || re[now+e-1]!=e || (re[now+e+1]!=e && flag[now+e+1]==0))
                {
                    puts("No");
                    return 0;
                } else
                {
                    re[now]=re[now+e]=e;
                    flag[now]=1;
                    flag[now+e]=0;
                    used.erase(now);
                    used.erase(now+e);
                }
            }
        }
    }
     */
    puts("Yes");
    return 0;
}
