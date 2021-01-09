//File: P6282.cpp
//Author: yanyanlongxia
//Date: 2020/9/18
//
#include <bits/stdc++.h>

using namespace std;
int n,m,f[100005],s[100005],cho[100005],bec[100005],ans;//选与备选
queue<int>q[100005];
int main() {
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++) {
        scanf("%d%d", &f[i], &s[i]);
        if (!bec[f[i]])
        {
            ans++;
            bec[f[i]]=i;
            cho[i]=1;
        }
        else
        {
            if (!bec[s[i]])
            {
                q[f[i]].push(i);
                ans++;
                bec[s[i]]=i;
                cho[i]=2;
            }
            else
            {
                q[f[i]].push(i);
                q[s[i]].push(i);
                cho[i]=3;
            }
        }
    }
    printf("%d\n",ans);
    for (int i=1;i<n;i++)
    {
        ans--;
        int now=f[i];
        while (!q[now].empty())
        {
            int next=q[now].front();
            q[now].pop();
            if (cho[next]==2)
            {
                cho[next]=1;
                bec[f[next]]=next;
                now=s[next];
            }
            if (cho[next]==3)
            {
                ans++;
                if (f[next]==now)
                {
                    cho[next]=1;
                    bec[f[next]]=next;
                }
                else
                {
                    cho[next]=2;
                    bec[s[next]]=next;
                }
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
