//File: P2324.cpp
//Author: yanyanlongxia
//Date: 2020/9/24
//[SCOI2005]骑士精神
#include <bits/stdc++.h>

using namespace std;
int t,maxd;
map<string,int>h;
bool found;
inline string move_bit(string x,int i,int p)
{
    x[i]=x[p];
    x[p]='0';
    return x;
}
void dfs(const string& x,int p,int step,int flag,int from) {
    if (h[x] + flag == 3) {
        found = true;
        return;
    }
    h[x] = flag;
    if (step == maxd)
        return;
    if (p / 5 > 1 && p % 5 && p - 11 != from)
        dfs(move_bit(x, p, p - 11), p - 11, step + 1, flag, p);
    if (p / 5 > 1 && p % 5 < 4 && p - 9 != from)
        dfs(move_bit(x, p, p - 9), p - 9, step + 1, flag, p);
    if (p / 5 < 3 && p % 5 && p + 9 != from)
        dfs(move_bit(x, p, p + 9), p + 9, step + 1, flag, p);
    if (p / 5 < 3 && p % 5 < 4 && p + 11 != from)
        dfs(move_bit(x, p, p + 11), p + 11, step + 1, flag, p);
    if (p / 5 && p % 5 > 1 && p - 7 != from)
        dfs(move_bit(x, p, p - 7), p - 7, step + 1, flag, p);
    if (p / 5 && p % 5 < 3 && p - 3 != from)
        dfs(move_bit(x, p, p - 3), p - 3, step + 1, flag, p);
    if (p / 5 < 4 && p % 5 > 1 && p + 3 != from)
        dfs(move_bit(x, p, p + 3), p + 3, step + 1, flag, p);
    if (p / 5 < 4 && p % 5 < 3 && p + 7 != from)
        dfs(move_bit(x, p, p + 7), p + 7, step + 1, flag, p);
}
signed main() {
    string ed="2222212222110221111211111",tmp;
    scanf("%d",&t);
    while (t--)
    {
        h.clear();
        int now=0,p;
        found= false;
        string st;
        st.clear();
        maxd=0;
        for (int i=1;i<=5;i++)
        {
            cin>>tmp;
            for (int j=0;j<tmp.size();j++) {
                switch (tmp[j]) {
                    case '*':
                        tmp[j] = '0';
                        p=now;
                        break;
                    case '0':
                        tmp[j] = '1';
                        break;
                    case '1':
                        tmp[j] = '2';
                        break;
                }
                now++;
            }
            st+=tmp;
        }
        while (maxd<=8)
        {
            dfs(st,p,0,1,-1);
            if (found)
            {
                printf("%d\n",maxd*2-1);
                break;
            }
            if (maxd==8)
                break;
            dfs(ed,12,0,2,-1);
            if (found)
            {
                printf("%d\n",maxd*2);
                break;
            }
            maxd++;
        }
        if (!found)
            puts("-1");
    }
    return 0;
}
