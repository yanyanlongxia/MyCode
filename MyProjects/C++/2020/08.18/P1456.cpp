//File: P1456.cpp
//Author: yanyanlongxia
//Date: 2020/8/19
//
#include<bits/stdc++.h>
#define MAXN 100005
#define getSZ(p) (p?p->sz:0)
using namespace std;
int N,M;
struct segment{
    int sz;
    segment *ls,*rs;
    void update(){
        sz = getSZ(ls) + getSZ(rs);
    }
}*rt[MAXN];
segment* newNode(int sz){
    segment *p = new segment;
    p->sz = sz; p->ls = p->rs = 0;
    return p;
}
segment* insert(segment* p, int l, int r, int x);
segment* merge(segment* p0, segment* p1);
int query(segment* rt, int l, int r, int f);
int p[MAXN];
int findR(int x){
    if(p[x]==x) return x;
    return p[x] = findR(p[x]);
}
int main(){
    int NN = 32786;
    while(cin>>N){
        memset(rt,0,sizeof(rt));
        int x;
        for(int i=1;i<=N;i++){
            cin>>x;
            rt[i] = insert(rt[i],1,NN,x);
            p[i] = i;
        }
        cin>>M;
        int u,v,ru,rv;
        int x0,x1;
        while(M--){
            cin>>u>>v;
            ru = findR(u); rv = findR(v);
            if(ru == rv){
                cout<<-1<<endl;
                continue;
            }
            x0 = query(rt[ru], 1, NN, 1); x1 = query(rt[rv], 1, NN, 1);
            rt[ru] = merge(rt[ru], rt[rv]);
            rt[ru] = insert(rt[ru], 1, NN, x0/2);
            rt[ru] = insert(rt[ru], 1, NN, x1/2);
            p[rv] = ru;
            cout<<query(rt[ru], 1, NN, 0)<<endl;
        }
    }
    return 0;
}
segment* insert(segment* p, int l, int r, int x){
    if(!p) p = newNode(0);
    ++p->sz;
    if(l==r) return p;
    int mid = (l + r)/2;
    if(x <= mid) p->ls = insert(p->ls, l, mid, x);
    else p->rs = insert(p->rs, mid+1, r, x);
    p->update();
    return p;
}
segment* merge(segment* p0, segment* p1){
    if(!p0 || !p1) return p0?p0:p1;
    segment *p = newNode(getSZ(p0) + getSZ(p1));
    p->ls = merge(p0->ls, p1->ls);
    p->rs = merge(p0->rs, p1->rs);
    delete p0; delete p1;
    return p;
}
int query(segment* p, int l, int r, int f){
    if(f) --p->sz;
    if(l == r){
        return l;
    }
    int mid = (l+r)/2;
    if(getSZ(p->rs)) return query(p->rs, mid+1, r, f);
    else return query(p->ls, l, mid, f);
}