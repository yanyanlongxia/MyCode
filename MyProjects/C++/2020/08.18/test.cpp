#include <bits/stdc++.h>
#include <con>
using namespace std;
typedef long long ll;
const int MAXN = 50005;
int n,ans,k;
ll M;
ll p[MAXN],c[MAXN];
int used[MAXN];
struct Cow {
    ll val;
    int id;

    Cow(ll _val = 0, int _id = 0) : val(_val), id(_id) {}

    friend bool operator<(const Cow &x, const Cow &y) {
        return x.val > y.val;
    }
};
priority_queue<Cow> qa,qb;
priority_queue<ll,vector<ll>,greater<ll> > qc;
int main() {
    scanf("%d%d%lld", &n, &k, &M);
    for (int i = 1; i <= n; i++) {
        scanf("%lld%lld", &p[i], &c[i]);
        qa.push(Cow(p[i], i));
        qb.push(Cow(c[i], i));
    }
    for (int i = 1; i <= k; i++)
        qc.push(0ll);
    for (int i = 1; i <= n; i++) {
        while (used[qa.top().id])
            qa.pop();
        while (used[qb.top().id])
            qb.pop();
        if (qc.top() + qb.top().val < qa.top().val) {
            Cow x = qb.top();
            ll cost = qc.top() + x.val;
            qc.pop();
            if (cost > M)
                break;
            M -= cost;
            qc.push(p[x.id] - c[x.id]);
            used[x.id] = 1;
        } else {
            ll cost = qa.top().val;
            int x = qa.top().id;
            if (cost > M)
                break;
            M -= cost;
            used[x] = 1;
        }
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}