#include <bits/stdc++.h>
using namespace std;
const int N=265,M=int(5e6)/N/N;
int pre[N][N][M],cir;
void init(int n, int m, int q, int aw, int kw, const vector<vector<int> > &a) {
    cir = 1<<int(ceil(log(n)/ log(2)));
    if(m>n)
        cir*=2;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            pre[0][i][j]=a[i][j];
        }
    for(int i=1;i<=2*cir;i++){
        for(int u=0;u<n;u++)
            for(int v=0;v<m;v++)
                pre[i][u][v]=pre[i-1][u][v]^pre[i-1][u+1][v]^pre[i-1][u][v+1]^pre[i-1][u+1][v+1];
    }
}
int query(int k) {
    k%=cir;
    //printf("%d\n",k);
    return pre[k][0][0];
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
    freopen("kk.in", "r", stdin);
    freopen("kk.out", "w", stdout);
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
    //printf("%d\n",cir);
    unsigned long long res = 0;
    for (int i = 1; i <= q; i++) {
        res ^= (unsigned long long)i * query(rng.gen(kw));
    }
    //printf("%d %d\n",pre[0][0][0],pre[cir][0][0]);
    /*for(int i=0;i<=2*cir;i++)
        printf("%d ",pre[i][0][0]);*/
    /*puts("");*/
    printf("%llu\n", res);
    return 0;
}
