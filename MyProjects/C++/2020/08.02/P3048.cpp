//[USACO12FEB]Cow IDs S
// Created by admin on 2020/8/3.
//主要思路为记录二进制串中每个1的位置，并且每个每个串都是由前一个串交换元素和移动元素得来的
#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000];
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=k;i++)
        a[i]=i;
    for(int i=2;i<=n;i++)
        for(int j=1;j<=k;j++)
        {
            if(a[j]+1!=a[j+1])
            {
                a[j]++;
                break;
            }
            else
                a[j]=j;
        }
    for(int i=a[k];i;i--)
    {
        if(a[k]==i)
        {
            printf("1");
            k--;
        }
        else
            printf("0");
    }
    return 0;
}