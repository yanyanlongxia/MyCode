#include <bits/stdc++.h>

#define ll long long
using namespace std;
const int N=2e6;
struct fhq{
    int l,r,sz,val,dat;
}t[N];
int cnt,root,T;
inline int newnode(int val) {
    t[++cnt].val = val;
    t[cnt].dat = rand();
    t[cnt].sz = 1;
    return cnt;
}
inline void update(int p) {
    t[p].sz = t[t[p].l].sz + t[t[p].r].sz + 1;
}
void split(int p,int val,int &x,int &y) {
    if (!p)
        x = y = 0;
    else {
        if (t[p].val <= val) {
            x = p;
            split(t[p].r, val, t[p].r, y);
        } else {
            y = p;
            split(t[p].l, val, x, t[p].l);
        }
        update(p);
    }
}
int  merge(int x,int y) {
    if (!x || !y)
        return x + y;
    if (t[x].dat > t[y].dat) {
        t[x].r = merge(t[x].r, y);
        update(x);
        return x;
    } else {
        t[y].l = merge(x, t[y].l);
        update(y);
        return y;
    }
}
int x,y,z;
inline void insert(int val) {
    split(root, val, x, y);
    root = merge(merge(x, newnode(val)), y);
}
inline void erase(int val)
{
    split(root,val,x,z);
    split(x,val-1,x,y);
    y=merge(t[y].l,t[y].r);
    root=merge(merge(x,y),z);
}
inline int getrkbyval(int val) {
    int res;
    split(root, val - 1, x, y);
    res = t[x].sz + 1;
    root = merge(x, y);
    return res;
}
inline int getvalbyrk(int rk) {
    int p = root;
    while (p) {
        if (t[t[p].l].sz + 1 == rk)
            break;
        else {
            if (t[t[p].l].sz + 1 > rk)
                p = t[p].l;
            else {
                rk -= t[t[p].l].sz + 1;
                p = t[p].r;
            }
        }
    }
    return t[p].val;
}
inline int getpre(int val) {
    split(root, val - 1, x, y);
    int p = x, res;
    while (t[p].r)
        p = t[p].r;
    res = t[p].val;
    root = merge(x, y);
    return res;
}
inline int getnext(int val) {
    split(root, val, x, y);
    int p = y, res;
    while (t[p].l)
        p = t[p].l;
    res = t[p].val;
    root = merge(x, y);
    return res;
}
int main() {
    //freopen("data.in","r",stdin);
    //freopen("P3369.out","w",stdout);
    srand(time(NULL));
    scanf("%d", &T);
    int opt, num;
    while (T--) {
        scanf("%d%d", &opt, &num);
        switch (opt) {
            case 1:
                insert(num);
                break;
            case 2:
                erase(num);
                break;
            case 3:
                printf("%d\n", getrkbyval(num));
                break;
            case 4:
                printf("%d\n", getvalbyrk(num));
                break;
            case 5:
                printf("%d\n", getpre(num));
                break;
            case 6:
                printf("%d\n", getnext(num));
                break;
        }
    }
    return 0;
}
