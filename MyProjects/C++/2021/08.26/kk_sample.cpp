#include <bits/stdc++.h>
using namespace std;
const int N=513,M=int(5e6)/N;
int pre[N][N][M];
void init(int n, int m, int q, int aw, int kw, const vector<vector<int> > &a) {

}
int query(int k) {
}
struct xorShift128Plus {
	unsigned long long k1, k2;
	unsigned long long gen() {
		register unsigned long long k3 = k1, k4 = k2;
		k1 = k4;
		k3 ^= k3 << 23;
		k2 = k3 ^ k4 ^ (k3 >> 17) ^ (k4 >> 26);
		return k2 + k4;
	}
	int gen(int w) {
		return gen() >> (64 - w);
	}
};
int main() {
	//freopen("kk.in", "r", stdin);
	//freopen("kk.out", "w", stdout);
	int n, m, q, aw, kw;
	xorShift128Plus rng;
	scanf("%d%d%d%d%d%llu%llu", &n, &m, &q, &aw, &kw, &rng.k1, &rng.k2);
	vector<vector<int> > a(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rng.gen(aw);
            //printf("%d ",a[i][j]);
		}
        //printf("\n");
	}
	init(n, m, q, aw, kw, a);
	unsigned long long res = 0;
	for (int i = 1; i <= q; i++) {
		res ^= (unsigned long long)i * query(rng.gen(kw));
	}
	printf("%llu\n", res);
	return 0;
}
