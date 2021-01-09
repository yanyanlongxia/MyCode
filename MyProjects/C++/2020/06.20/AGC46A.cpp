//
// Created by admin on 2020/6/20.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int i=1;
    cin>>x;
    while((360*i)%x!=0)
        i++;
    cout<<(360*i)/x<<endl;
    return 0;
}
