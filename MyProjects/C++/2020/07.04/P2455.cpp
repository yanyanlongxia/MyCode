//
// Created by admin on 2020/7/4.
//
#include <bits/stdc++.h>
using namespace std;
double a[105][105],b[105];
int n;
bool jud(int i)
{
    int c=0;
    for(int j=1;j<=n;j++)
        if(fabs(a[i][j])>1e-8)
            return 1;
    return 0;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
            if(fabs(a[j][i])>1e-8)
            {
                for(int k=1;k<=n;k++)
                    swap(a[i][k],a[j][k]);
                swap(b[i],b[j]);
            }
        for(int j=1;j<=n;j++)
        {
            if(i==j)
                continue;
            double rate=a[j][i]/a[i][i];
            for(int k=i;k<=n;k++)
                a[j][k]-=a[i][k]*rate;
            b[j]-=b[i]*rate;
        }
    }
    for(int i=1;i<=n;i++)
        if(jud(i)==0)
        {
            if(b[i]==0)
            {
                cout<<0<<endl;
                return 0;
            }
            cout<<"-1"<<endl;
            return 0;
        }
    for(int i=1;i<=n;i++)
        printf("x%d=%.2f\n",i,b[i]/a[i][i]);
    return 0;
}
