#include <bits/stdc++.h>
using namespace std;
int n,m;
long long int k;
long long int a[300000];
long long int b[300000];
int main() {
    cin>>n>>m>>k;
    long long int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int res = 0;
    int atake = n;
    int btake = 0;
    while(true) {
        if(sum<=k) {
            res = max(res, atake + btake);
            if(btake<m) {
                sum+=b[btake];
                btake++;
            }
            else {
                break;
            }
        }
        else {
            if(atake==0) {
                break;
            }
            atake--;
            sum-=a[atake];
        }
    }
    cout<<res<<endl;
    return 0;
}
