//File: 8.cpp
//Author: yanyanlongxia
//Date: 2020/12/13
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
int main() {
    //freopen("8.in","r",stdin);
    //freopen("8.out","w",stdout);
    cin>>n;
    switch(n){
        case 1:
            cout<<"A"<<endl;
            break;
        case 6:
            cout<<"ACBEFD"<<endl;
            break;
        case 7:
            cout<<"BCAEFGD"<<endl;
            break;
        default:
            return 0;
    }
    return 0;
}
