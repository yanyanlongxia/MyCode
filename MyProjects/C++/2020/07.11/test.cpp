//
// Created by admin on 2020/7/12.
//

#include<iostream>
#include<cmath>
using namespace std;
int f(int n){
    int i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int m;
    while(cin>>m&&m){
        int i,n,k=0;
        for(i=0;i<m;i++){
            cin>>n;
            if(f(n)&&n!=1)
                k++;
        }
        cout<<k<<endl;
    }
}
