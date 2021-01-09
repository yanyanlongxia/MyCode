//File: P1379.cpp
//Author: yanyanlongxia
//Date: 2020/9/23
//
#include <bits/stdc++.h>

using namespace std;
const int base[]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
map<int,int>h;
bool found;
int maxd;
inline int getbit(int x,int i)
{
    return x%base[i+1]/base[i];
}
inline int movebit(int x,int p,int i)
{
    return x-getbit(x,i)*base[i]+getbit(x,i)*base[p];
}
void dfs(int x,int p,int step,int flag,int from) {
    if (h[x] + flag == 3) {
        found = true;
        return;
    }
    h[x] = flag;
    if (step == maxd)
        return;
    if (p / 3 && p - 3 != from)
        dfs(movebit(x, p, p - 3), p - 3, step + 1, flag, p);
    if (p / 3 != 2 && p + 3 != from)
        dfs(movebit(x, p, p + 3), p + 3, step + 1, flag, p);
    if (p % 3 && p - 1 != from)
        dfs(movebit(x, p, p - 1), p - 1, step + 1, flag, p);
    if (p % 3 != 2 && p + 1 != from)
        dfs(movebit(x, p, p + 1), p + 1, step + 1, flag, p);
}
int main() {
    int st,ed=123804765;
    int i;
    scanf("%d",&st);
    for (i=0;getbit(st,i)!=0;i++);
    while (true)
    {
        dfs(st,i,0,1,-1);
        if (found)
        {
            printf("%d\n",maxd*2-1);
            break;
        }
        dfs(ed,4,0,2,-1);
        if (found)
        {
            printf("%d\n",maxd*2);
            break;
        }
        maxd++;
    }
    return 0;
}
