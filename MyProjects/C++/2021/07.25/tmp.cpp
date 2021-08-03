//Created by yanyanlongxia on 2021/7/29
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const ll base=131;
const ll MOD=19491001;
struct hash
{
    long long hash[500010], pw[500010];
    void hs(char *s)
    {
        int len = strlen(s + 1);
        pw[0] = 1;
        for (int i = 1; i <= len; ++ i)
        {
            hash[i] = (hash[i - 1] * base + s[i] - 'a') % MOD;
            pw[i] = pw[i - 1] * base % MOD;
        }
    }
    long long get(int l, int r)
    {
        return ((hash[r] - hash[l - 1] * pw[r - l + 1]) % MOD + MOD) % MOD;
    }
}S, T;
int main() {
    //freopen("tmp.in","r",stdin);
    //freopen("tmp.out","w",stdout);

    return 0;
}
