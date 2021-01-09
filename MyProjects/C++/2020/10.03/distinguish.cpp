//File: distinguish.cpp
//Author: yanyanlongxia
//Date: 2020/10/3
//
#include <bits/stdc++.h>
#define int long long
using namespace std;
string st[1000005];
int n,nxt[1000005],ans;
inline void getnext(string t)
{
    int i=-1,j=0;
    nxt[0]=-1;
    while (j<t.size())
    {
        if (i==-1 || t[i]==t[j])
        {
            i++;
            j++;
            nxt[j]=i;
        }
        else
            i=nxt[i];
    }
}
inline bool bein(string s,string t)
{
    int i=0,j=0;
    while (i<s.size())
    {
        if (j==-1 || s[i]==t[j])
        {
            i++;
            j++;
        }else
            j=nxt[j];
        if (j==t.size())
            return true;
    }
    return false;
}
inline bool beok(const string& t,int pos)
{
    memset(nxt,0, sizeof(nxt));
    getnext(t);
    for (int i=1;i<=n;i++)
    {
        if (i==pos)
            continue;
        if (bein(st[i],t))
            return true;
    }
    return false;
}
signed main() {
    freopen("distinguish.in","r",stdin);
    freopen("distinguish.out","w",stdout);
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++) {
        cin >> st[i];
    }
    for (int i = 1; i <= n; i++) {
        ans=(1+st[i].size())*st[i].size()/2;
        int start = 0, len;
        while (start < st[i].size())
        {
            bool flag=true;
            for (len = 1; len <= st[i].size() - start; len++) {
                if (len==st[i].size()-start)
                    flag=false;
                if (!beok(st[i].substr(start, len), i)) {
                    ans -= (len) * (len-1) / 2;
                    start=start+len;
                    if (len==st[i].size()-start)
                        flag=true;
                    break;
                }
            }
            if (!flag)
            {
                int now=st[i].size()-start;
                ans-=(now+1)*(now)/2;
                break;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}