//File: ARC104B.cpp
//Author: yanyanlongxia
//Date: 2020/10/3
//
#include <bits/stdc++.h>

using namespace std;
int n,buc[2],ans;
char st[1000005];
inline void add(int i)
{
    switch (st[i]) {
        case 'A':
            buc[0]++;
            break;
        case 'T':
            buc[0]--;
            break;
        case 'C':
            buc[1]++;
            break;
        case 'G':
            buc[1]--;
            break;
    }
}
inline void del(int i)
{
    switch (st[i]) {
        case 'A':
            buc[0]--;
            break;
        case 'T':
            buc[0]++;
            break;
        case 'C':
            buc[1]--;
            break;
        case 'G':
            buc[1]++;
            break;
    }
}
int main() {
    scanf("%d",&n);
    scanf("%s",(st+1));
    for (int i=1;i<=n;i++)
    {
        buc[0]=buc[1]=0;
        for (int j=1;j<=i;j++)
            add(j);
        if (!buc[0] && !buc[1])
            ans++;
        for (int j=i+1;j<=n;j++)
        {
            del(j-i);
            add(j);
            if (!buc[0] && !buc[1])
                ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
