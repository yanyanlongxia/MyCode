#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a;
    double st=clock();
    for (long long i=1;i<=1e10;i++)
        a++;
    double ed=clock();
    printf("%.0lfms\n",(ed-st)/CLOCKS_PER_SEC);
    return 0;
}