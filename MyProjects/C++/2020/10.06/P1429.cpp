//File: P1429.cpp
//Author: yanyanlongxia
//Date: 2020/10/6
//
#include <bits/stdc++.h>
using namespace std;

struct node {
    double x, y;
};
bool same(double a, double b) {
    if(fabs(a-b) <= 1e-5) return true; return false;
}
bool cmpx(node a, node b) {
    if(!same(a.x, b.x)) return a.x<b.x; return a.y<b.y;
}
bool cmpy(node a, node b) {
    if(!same(a.y, b.y)) return a.y<b.y; return a.x<b.x;
}
const int maxn = 200000 + 6; node arr[maxn];
#define sqr(A) ((A)*(A))
double dist(node a, node b) {
    return sqrt(sqr(a.x-b.x) + sqr(a.y-b.y));
}
double mind(int L, int R) {
    sort(arr + L, arr + R + 1, cmpx);
    double ans = 1e300;
    if (R - L + 1 <= 3) {
        for (int i = L; i <= R; i++)
            for (int j = i + 1; j <= R; j++)
                ans = min(ans, dist(arr[i], arr[j]));
    } else {
        int mid = (L + R) / 2;
        double midx = arr[mid].x;
        ans = min(ans, mind(L, mid));
        ans = min(ans, mind(mid + 1, R));
        vector<node> avai;
        avai.clear();
        for (int i = L; i <= R; i++)
            if (fabs(arr[i].x - midx) <= ans)
                avai.push_back(arr[i]);
        double dnow = 1e300;
        sort(avai.begin(), avai.end(), cmpy);
        for (int i = 0; i < avai.size(); i++)
            for (int j = i + 1; j < avai.size(); j++) {
                double d = dist(avai[i], avai[j]);
                if (d > ans && !same(d, ans))
                    break;
                dnow = min(dnow, d);
            }
        ans = min(ans, dnow);
        avai.clear();
    }
    return ans;
}
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++)
        scanf("%lf%lf", &arr[i].x, &arr[i].y);
    double ans = mind(1, n);
    printf("%.4lf\n", ans);
    return 0;
}
