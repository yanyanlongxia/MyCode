#include <bits/stdc++.h>
using namespace std;
int w[3],h[3],sx[3],sy[3];
bool a[3][10][10];
const int dx[4] = {-1, 1, 0, 0},dy[4] = {0, 0, -1, 1};
struct sss 
{
    explicit sss(int d) : d(d) 
    {
        for(int i = 2; i >= 0; i--)
        {
            sx[i] -= sx[0];
            sy[i] -= sy[0];
        }
        memcpy(ssx, sx, sizeof(ssx));
        memcpy(ssy, sy, sizeof(ssy));
    }
    sss(const sss& st) 
    {
        d = st.d;
        memcpy(ssx, st.ssx, sizeof(ssx));
        memcpy(ssy, st.ssy, sizeof(ssy));
    }
    sss& operator=(const sss& st) 
    {
        d = st.d;
        memcpy(ssx, st.ssx, sizeof(ssx));
        memcpy(ssy, st.ssy, sizeof(ssy));
        return *this;
    }
    void unpack()
    {
        memcpy(sx, ssx, sizeof(ssx));
        memcpy(sy, ssy, sizeof(ssy));
    }
    bool operator<(const sss& st)
    {
        int r = memcmp(ssx, st.ssx, sizeof(ssx));
        if(!r) r = memcmp(ssy, st.ssy, sizeof(ssy));
        return r < 0;
    }
    int d,ssx[3],ssy[3];
};
bool intersect(int i, int j) {
    return sx[i] < sx[j] + w[j] && sx[j] < sx[i] + w[i] &&
           sy[i] < sy[j] + h[j] && sy[j] < sy[i] + h[i];
}
bool check() {
    for(int i = 0; i < 3; i++) {
        if(sx[i] < -20 || sx[i] > 20 || sy[i] < -20 || sy[i] > 20) return false;
        for(int j = i + 1; j < 3; j++) {
            for(int x = 0; x < w[i]; x++) {
                for(int y = 0; y < h[i]; y++)
                {
                    if(!a[i][x][y])
                        continue;
                    int nx=sx[i]+x-sx[j],ny=sy[i] + y - sy[j];
                    if(nx < 0 || nx >= w[j] || ny < 0 || ny >= h[j] ||
                       !a[j][nx][ny]) continue;
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int N[3];
    cin >> N[0] >> N[1] >> N[2];
    for(int i = 0; i < 3; i++) {
        int mx = 10, my = 10;
        int gx = 0, gy = 0;
        for(int j = 0; j < N[i]; j++) {
            int x, y; cin >> x >> y;
            a[i][x][y] = true;
            mx = min(mx, x); my = min(my, y);
            gx = max(gx, x + 1); gy = max(gy, y + 1);
        }
        w[i] = gx - mx; h[i] = gy - my;
        for(int x = mx; x < 10; x++)
            for(int y = my; y < 10; y++) {
                a[i][x - mx][y - my] = a[i][x][y];
                if(mx || my) a[i][x][y] = false;
            }
        sx[i] = mx;
        sy[i] = my;
    }
    queue<sss> q;
    set<sss> vis;
    q.push(sss(0));
    while(!q.empty()) {
        sss st = q.front();
        q.pop();
        st.unpack();
        if(!intersect(0, 1) && !intersect(0, 2) && !intersect(1, 2)) {
            cout << st.d << endl;
            return 0;
        }
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 4; j++) 
            {
                st.unpack();
                sx[i] += dx[j];
                sy[i] += dy[j];
                sss nst = sss(st.d + 1);
                if(vis.insert(nst).second && check()) q.push(nst);
            }
        }
    }
    cout << -1 << endl;
}