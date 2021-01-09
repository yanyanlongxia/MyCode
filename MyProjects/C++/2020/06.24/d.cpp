#include<bits/stdc++.h>
#define int long long
using namespace std;
map<int, int> mp;
int  ans,t;
int a[20], ls[20], win, orz, b[20];
int dfs(int x, int y) {
    if(x == 4) return 1;
    if(ls[x] + 3 * (5 - y ) < a[x]) return 0;
    int tot = 0;
    if(y > 4) {
        for(int i = x + 1; i <= 4; i++) b[i] = a[i] - ls[i];
        sort(b + x + 1, b + 5, greater<int>());
        int zt = 0;
        for(int i = x + 1; i <= 4; i++) zt = zt * 28LL + b[i];
        if(mp.find(zt) != mp.end()) return mp[zt];
        else return mp[zt] = dfs(x + 1, x + 2);
    }
    if(ls[x] + 3 <= a[x] && win) {
        ls[x] += 3, win--;
        tot += dfs(x, y + 1);
        ls[x] -= 3, win++;
    }
    if(ls[y] + 3 <= a[y] && win) {
        ls[y] += 3, win--;
        tot += dfs(x, y + 1);
        ls[y] -= 3, win++;
    }
    if(ls[x] + 1 <= a[x] && ls[y] + 1 <= a[y] && orz) {
        ls[x]++, ls[y]++, orz--;
        tot += dfs(x, y + 1);
        ls[x]--, ls[y]--, orz++;
    }
    return tot;
}
signed main() {
    cin>>t;
    while(t--)
    {
        win=0;
        mp.clear();
        for(int i = 1; i <= 4; i++)
        {
            cin>>a[i];
            win+=a[i];
        }
        win -= 12;
        orz = 6 - win;
        sort(a + 1, a + 5, greater<int>());
        if(dfs(1,2)==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}