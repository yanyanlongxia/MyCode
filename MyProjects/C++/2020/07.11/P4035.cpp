//
// Created by admin on 2020/7/12.
//
#include <bits/stdc++.h>
using namespace std;
double a[15][15],b[15],c[15][15];
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n+1;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for (int j = 1; j <= n; ++j) {//系数与常数计算公式
            b[i]+=a[i][j]*a[i][j]-a[i+1][j]*a[i+1][j];
            c[i][j]=2*(a[i][j]-a[i+1][j]);
        }
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=n ; ++j) {
            if (fabs(c[i][j])>1e-8)
            {
                for (int k = 1; k <=n; ++k) {
                    swap(c[i][k],c[j][k]);
                }
                swap(b[i],b[j]);
            }
        }
        for (int j = 1; j <=n ; ++j) {//消去其它各行第i项系数
            if (i==j)
                continue;
            double rate=c[j][i]/c[i][i];
            for (int k = 1; k <=n ; ++k) {
                c[j][k]-=c[i][k]*rate;
            }
            b[j]-=b[i]*rate;
        }
    }
    for (int i = 1; i <n ; ++i) {
        printf("%.3f ",b[i]/c[i][i]); //保留小数点后三位
    }
    printf("%.3f\n",b[n]/c[n][n]);
    return 0;
}
