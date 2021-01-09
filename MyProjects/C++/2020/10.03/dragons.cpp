//File: dragons.cpp
//Author: yanyanlongxia
//Date: 2020/10/5
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
struct cases
{
    bool flag;
    int a,pos;
}lsq[1000005],st[1000005];
int n,top,dp[1000005];
set<int>s1,s2;
int main() {
    freopen("dragons.in","r",stdin);
    freopen("dragons.out","w",stdout);
    char opt[3];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%s", opt);
        scanf("%d", &lsq[i].a);
        lsq[i].pos=i;
        if (opt[0] == 'c') {
            lsq[i].flag = true;
        } else {
            lsq[i].flag = false;
            if (i != n)
                lsq[i].a--;
            if (!top || lsq[i].a > st[top].a) {
                st[++top] = lsq[i];
            } else {
                while (top && lsq[i].a <= st[top].a)
                    top--;
                st[++top] = lsq[i];
            }
        }
    }
    int first = 1, lal = 0;
    if (top == 1) {
        for (int i = 1; i < st[top].pos; i++)
            if (lsq[i].flag)
                s1.insert(lsq[i].a);
        for (int i = 1; i <= st[top].a; i++) {
            if (s1.empty()) {
                puts("-1");
                return 0;
            }
            dp[top] += *(--s1.end());
            s1.erase(--s1.end());
        }
    } else {
        for (int i = 1; i < st[1].pos; i++)
            if (lsq[i].flag)
                s1.insert(lsq[i].a);
        for (int i = 1; i <= st[1].a; i++) {
            if (s1.empty()) {
                break;
            }
            dp[1] += *(--s1.end());
            s1.erase(--s1.end());
        }
        for (int i = 1; i < top; i++) {
            int get1=0;
            s1.clear();
            s2.clear();
            for (int j = first; j < st[i].pos; j++)
                if (lsq[j].flag)
                    s1.insert(lsq[j].a);
            for (int j = st[i].pos + 1; j < st[i + 1].pos; j++)
                if (lsq[j].flag)
                    s2.insert(lsq[j].a);
            for (int j = 1; j <= st[i+1].a - lal; j++) {
                if (s1.empty() && s2.empty() && i == top) {
                    puts("-1");
                    return 0;
                }
                if (s1.empty() && s2.empty())
                    break;
                if (s1.empty() || get1==st[i].a)
                {
                    dp[i+1]+=*(--s2.end());
                    s2.erase(--s2.end());
                }
                else
                {
                    if (s2.empty())
                    {
                        get1++;
                        dp[i+1]+=*(--s1.end());
                        s1.erase(--s1.end());
                    }
                    else
                    {
                        int x1=*(--s1.end()),x2=*(--s2.end());
                        if (x1>x2)
                        {
                            get1++;
                            dp[i+1]+=x1;
                            s1.erase(--s1.end());
                        }
                        else
                        {
                            dp[i+1]+=x2;
                            s2.erase(--s2.end());
                        }
                    }
                }
            }
            dp[i+1]+=dp[i-1];
            lal=st[i].a;
            first=st[i].pos+1;
        }
    }
    printf("%d\n",dp[top]);
    return 0;
}
