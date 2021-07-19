//Created by yanyanlongxia on 2021/7/19
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
#define infm(x) memset(x,0x3f3f3f3f,sizeof(x))
#define minfm(x) memset(x,0xcf,sizeof(x))
using namespace std;
const int N=10;
bool a[2][2][40];
int az,bz;
int main() {
    freopen("data.in", "r", stdin);
    //freopen("ZR850.out","w",stdout);
    int x;
    for (int i = 0; i <= 1; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &x);
            a[i][0][x] = true;
        }
        for (int j = 1; j <= 2; j++) {
            scanf("%d", &x);
            a[i][1][x] = true;
        }
    }
    for (int i = 1; i <= 35; i++) {
        if (a[0][0][i] && a[1][0][i])
            az++;
    }
    for (int i = 1; i <= 12; i++) {
        if (a[0][1][i] && a[1][1][i])
            bz++;
    }
    bool zj = false;
    if (az == 5 && bz == 2) {
        puts("5000000");
        zj = true;
    }
    if (az == 5 && bz == 1) {
        puts("250000");
        zj = true;
    }
    if ((az == 5 && bz == 0) || (az == 4 && bz == 2)) {
        puts("3000");
        zj = true;
    }
    if ((az == 4 && bz == 1) || (az == 3 && bz == 2)) {
        puts("200");
        zj = true;
    }
    if (az + bz == 4) {
        puts("10");
        zj = true;
    }
    if (az + bz == 3) {
        puts("5");
        zj = true;
    }
    if (az == 0 && bz == 2) {
        puts("5");
        zj = true;
    }
    if (!zj)
        puts("0");
    return 0;
}
