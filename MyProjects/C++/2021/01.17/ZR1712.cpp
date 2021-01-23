//Created by yanyanlongxia on 2021/1/17
//
#include <bits/stdc++.h>

#define ll long long
#define clm(x) memset(x,0,sizeof(x))
using namespace std;
const int N=5e6+5;
int cnt;
struct node{
    char val;
    int pre,nxt;
    node(){
        pre=nxt=0;
    }

}lis[N];
string s,t;
int main() {
    freopen("data.in","r",stdin);
    //freopen("ZR1712.out","w",stdout);
    cin>>s>>t;
    lis[++cnt].val=s[0];
    for(int i=1;i<s.size();i++){
        lis[++cnt].val=s[i];
        if(t[i-1]=='L'){
            lis[cnt].pre=lis[cnt-1].pre;
            lis[lis[cnt].pre].nxt=cnt;
            lis[cnt-1].pre=cnt;
            lis[cnt].nxt=cnt-1;
        }else{
            lis[cnt].nxt=lis[cnt-1].nxt;
            lis[lis[cnt].nxt].pre=cnt;
            lis[cnt-1].nxt=cnt;
            lis[cnt].pre=cnt-1;
        }
    }
    int  head=cnt;
    while (lis[head].pre)
        head=lis[head].pre;
    while (head){
        printf("%c",lis[head].val);
        head=lis[head].nxt;
    }
    printf("\n");
    return 0;
}
