#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<cstdio>
#include<cstring>
#include<malloc.h>
using namespace std;
int n,i,ml[1000005],mlz[1000005],a,tot=0,k1,k2,k3;
int add(int a) {
    int j = 0, k, a1;
    ml[0] += 1;
    j = ml[0];
    ml[j] = a;
    k = j / 2;
    while (k > 0 && a < ml[k]) {
        ml[j] = ml[k];
        j = k;
        k = j / 2;
    }
    return 0;
}
 int del( ) {
     int j = 0, k, k1, k2, a, a1;
     j = ml[0];
     ml[1] = ml[j];
     ml[0] -= 1;
     j = 1;
     k = j * 2;
     while (k < ml[0]) {
         k1 = 0;
         if (ml[k] < ml[j]) k1 = k;
         if (k + 1 <= ml[0])
             if (ml[k + 1] < ml[k]) k1 = k + 1;
         if (k1 == 0) return 0;
         else {
             a = ml[j];
             ml[j] = ml[k1];
             ml[k1] = a;
         }
         j = k1;
         k = j * 2;
     }
     return 0;
 }
int main() {
    freopen("magic.in","r",stdin);
    freopen("magic.out","w",stdout);
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a;
        add(a);
    }
    for (i = 1; i <= n; i++) {
        mlz[i] = ml[1];
        del();
    }
    k2 = n / 2;
    k1 = 1;
    k3 = n;
    for (i = 1; i <= k2; i++) {
        tot = tot + mlz[k3] - mlz[k1];
        k3--;
        k1++;
    }
    printf("%d\n", tot);
    return 0;
}