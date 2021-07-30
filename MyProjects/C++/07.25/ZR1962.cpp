//Created by yanyanlongxia on 2021/7/29
//
#include <bits/stdc++.h>
#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=3e6;
struct hash {
    ll hash[N], pw[N];
    ll base, MOD;
    int len;
    void get_hash(char *s) {
        len = strlen(s + 1);
        pw[0] = 1;
        hash[0] = 0;
        for (int i = 1; i <= len; i++) {
            hash[i] = (base * hash[i - 1] % MOD + s[i] - 'A' + 1) % MOD;
            pw[i] = pw[i - 1] * base % MOD;
        }
    }
    ll get_num(int l, int r) {
        return (hash[r] - hash[l - 1] * pw[r - l + 1] % MOD + MOD) % MOD;
    }
    bool eras(int pos) {
        int poit = (len - 1) / 2;
        int xa, xb;
        if (pos == 1) {
            xa = get_num(2, 1 + poit);
            xb = get_num(2 + poit, len);
            return xa == xb;
        }
        if (pos == len) {
            xa = get_num(1, poit);
            xb = get_num(poit + 1, len - 1);
            return xa == xb;
        }
        if (pos == poit + 1) {
            xa = get_num(1, poit);
            xb = get_num(poit + 2, len);
            return xa == xb;
        }
        if (pos <= poit) {
            xa = (get_num(1, pos - 1) * pw[poit - pos + 1] % MOD + get_num(pos + 1, 1 + poit)) % MOD;
            xb = get_num(poit + 2, len);
            return xa == xb;
        } else {
            xa = get_num(1, poit);//pos-poit-1   poit-pos+poit=2*poit-pos
            xb = (get_num(poit + 1, pos - 1) * pw[2 * poit - pos] % MOD + get_num(pos + 1, 2 * poit)) % MOD;
            return xa == xb;
        }
    }
}h1,h2;
int n;
char s[N];
void extim(){
    puts("NOT POSSIBLE");
}
void extmul(){
    puts("NOT UNIQUE");
}
int main() {
    freopen("data.in", "r", stdin);
    //freopen("ZR1962.out","w",stdout);
    scanf("%d", &n);
    scanf("%s", (s + 1));
    if ((n - 1) & 1) {
        extim();
        return 0;
    }
    h1.base = 131;
    h2.base = 19;
    h1.MOD = 19491001;
    h2.MOD = 998244353;
    h1.get_hash(s);
    h2.get_hash(s);
    int num = 0, ans, cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (h1.eras(i) && h2.eras(i)) {
            num++;
            ans = i;
        }
    }
    if (num == 0) {
        extim();
        return 0;
    }
    if (num != 1) {
        extmul();
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        if (i != ans) {
            printf("%c", s[i]);
            cnt++;
            if (cnt == (n - 1) / 2)
                break;
        }
    }
    puts("");
    return 0;
}
