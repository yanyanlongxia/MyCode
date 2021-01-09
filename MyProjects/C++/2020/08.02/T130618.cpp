//
// Created by admin on 2020/8/3.
//
#include <bits/stdc++.h>
using namespace std;
int n,res,now,r;
char c[150000];
stack<int>s;
int main()
{
    scanf("%d%d",&n,&res);
    for(int i=1;i<n;i++)
    {
        scanf("%c",c[i]);
        if(c[i]=='|')
            c[i]='+';
    }
    now=rand();
    r=res;
    s.push(now);
    for(int i=n-1;i>=1;i--)
    {
        switch (c[i]) {
            case '+':
                res=res-now;

        }
    }
}