//File: CF1399C.cpp
//Author: yanyanlongxia
//Date: 2020/8/5
//
#include <bits/stdc++.h>

using namespace std;
int t,n,w[100],ans,res[100];
set<int>s;
void init()
{
    memset(res,0,sizeof(res));
    s.clear();
    for(int i=1;i<=n;i++)
    {
        s.insert(w[i]);
        res[w[i]]++;
    }
}
int main() {
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%d",&n);
        for (int i = 1; i <= n; ++i) {
            scanf("%d",&w[i]);
        }
        for (int i = 1; i <= 100; ++i) {
            init();
            int tmp=0;
            while (!s.empty())
            {
                int now=*s.begin();
                if(now!=i-now || res[now]!=1)
                    if(s.find(i-now)!=s.end())
                    {
                        if(res[i-now]==1)
                            s.erase(s.find(i-now));
                        else
                            res[i-now]--;
                        tmp++;
                    }
                if(res[now]==1)
                    s.erase(s.begin());
                else
                    res[now]--;
            }
            ans=max(ans,tmp);
        }
        printf("%d\n",ans);
    }
    return 0;
}