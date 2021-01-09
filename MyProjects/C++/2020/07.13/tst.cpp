#include <bits/stdc++.h>
using namespace std;
int n[3],lis[3][100][2],ok[3][3][51][51],dir[4][2] = {-1, 0, 1, 0, 0, 1, 0, -1};
char sn[42][42][42][42];
set<pair<int, int> > op;
int valid(int i1, int i2, int dx, int dy) 
{
    op.clear();
    for(int i = 0; i < n[i1]; ++i)
        op.insert(make_pair(lis[i1][i][0], lis[i1][i][1]));
    for(int i = 0; i < n[i2]; ++i) 
        if(op.find(make_pair(lis[i2][i][0] + dx, lis[i2][i][1] + dy)) != op.end())
            return 0;
    return 1;
}
int ip(int i1, int i2, int dx, int dy) {
    if(dx < -20 || dx > 20 || dy < -20 || dy > 20) return 1;
    return ok[i1][i2][dx + 20][dy + 20];
}
int isOk(int dx1, int dy1, int dx2, int dy2) {
    return ip(0, 1, dx1, dy1) &&
           ip(0, 2, dx2, dy2) &&
           ip(1, 2, dx2 - dx1, dy2 - dy1);
}
const int lim = 20;
char q[3000000][4];
int tl;
void add (int dx1, int dy1, int dx2, int dy2) {
    if(dx1 < -lim || dy1 < -lim || dx1 > lim || dy1 > lim ||
       dx2 < -lim || dy2 < -lim || dx2 > lim || dy2 > lim) return;
    if(!isOk(dx1, dy1, dx2, dy2)) return;
    if(sn[dx1 + lim][dy1 + lim][dx2 + lim][dy2 + lim]) return;
    sn[dx1 + lim][dy1 + lim][dx2 + lim][dy2 + lim] = 1;
    q[tl][0] = dx1;
    q[tl][1] = dy1;
    q[tl][2] = dx2;
    q[tl][3] = dy2;
    tl++;
}
int main() {
    cin>>n[0]>>n[1]>>n[2];
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < n[i]; ++j)
            scanf("%d%d", &lis[i][j][0], &lis[i][j][1]);
    for(int i1 = 0; i1 < 3; ++i1)
        for(int i2 = 0; i2 < i1; ++i2)
            for(int dx = -20; dx <= 20; ++dx)
                for(int dy = -20; dy <= 20; ++dy) 
                    ok[i2][i1][dx + 20][dy + 20] = valid(i1, i2, dx, dy);
    memset(sn, 0, sizeof(sn));
    tl = 0;
    add(0, 0, 0, 0);
    for(int i = 0; i < tl; ++i) 
    {
        int dx1 = q[i][0];
        int dy1 = q[i][1];
        int dx2 = q[i][2];
        int dy2 = q[i][3];
        if(dx1 == lim && dy1 == lim && dx2 == -lim && dy2 == -lim) 
        {
            puts("1");
            return 0;
        }
        for(int j = 0; j < 4; ++j) {
            add(dx1 + dir[j][0], dy1 + dir[j][1], dx2, dy2);
            add(dx1, dy1, dx2 + dir[j][0], dy2 + dir[j][1]);
            add(dx1 + dir[j][0], dy1 + dir[j][1],dx2 + dir[j][0], dy2 + dir[j][1]);
        }
    }
    puts("0");
    return 0;
}