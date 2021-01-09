//File: P1214.cpp
//Author: yanyanlongxia
//Date: 2020/12/26
//
#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=1e7;
vector<pair<int,int> >res;
int n,m;
vector<int>tabl;
bool vis[N];
bool valid(int a,int b){
    for(int i=1;i<n;i++)
        if(!vis[a+i*b])
            return false;
    return true;
}
int main() {
    freopen("data.in","rev",stdin);
    //freopen("P1214.out","w",stdout);
    scanf("%d%d",&n,&m);

    for(int i=0;i<=m;i++)
        for (int j=0;j<=m;j++)
            tabl.push_back(i*i+j*j),vis[i*i+j*j]=true;
    sort(tabl.begin(),tabl.end());
    tabl.erase(unique(tabl.begin(),tabl.end()),tabl.end());
    int mam=tabl[tabl.size()-1];
    for(auto i : tabl)
        for(int j=1;j<=mam;j++){
            if(i+(n-1)*j>mam)
                break;
            if(valid(i,j))
                res.push_back(make_pair(j,i));
        }
    sort(res.begin(),res.end());
    if(res.empty()){
        puts("NONE");
        return 0;
    }
    for(int i=0;i<res.size();i++)
        printf("%d %d\n",res[i].second,res[i].first);
    return 0;
}
