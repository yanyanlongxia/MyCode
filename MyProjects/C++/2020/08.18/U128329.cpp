//File: U128329.cpp
//Author: yanyanlongxia
//Date: 2020/8/22
//
#include <bits/stdc++.h>

using namespace std;
const int dx[4]={-1,0,0,1},dy[4]={0,1,-1,0};
int n,m,topxl[1000005],topxr[1000005],topyu[1000005],topyd[1000005],tott,dist[1000005],sp,ep;
char st[1005][1005];
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
    while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
    return x*f;
}
struct node
{
    int x,y,belx,bely;
    node()
    {
        x=y=belx=bely=0;
    }
}s,e,no[1000005];
int calc(int x,int y)
{
    return (y-1)*m+x;
}
queue<pair<int,int> >q;
int main() {
    memset(dist, 0x3f3f3f3f, sizeof(dist));
    bool flag = true;
    node last;
    n = read();
    m = read();
    for (int i = 1; i <= n; ++i) {
        scanf("%s", (st[i] + 1));
        for (int j = 1; j <= m; ++j) {
            if (st[i][j] == '.') {
                tott++;
                no[tott].x = i;
                no[tott].y = j;
            }
        }
    }
    s.x = read();
    s.y = read();
    sp = calc(s.x, s.y);
    e.x = read();
    e.y = read();
    ep = calc(e.x, e.y);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) {
            if (st[i][j] == '.') {
                int now = calc(i, j);
                no[now].belx = last.belx + flag;
                if (flag) {
                    topxl[no[now].belx] = now;
                    flag = false;
                }
                if (st[i][j + 1] == '#') {
                    topxr[no[now].belx] = now;
                }
                last = no[now];
            } else
                flag = true;
        }
    flag = true;
    last.x = last.y = last.belx = last.bely = 0;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j) {
            if (st[j][i] == '.') {
                int now = calc(j, i);
                no[now].bely = last.bely + flag;
                if (flag) {
                    topyu[no[now].bely] = now;
                    flag = false;
                }
                if (st[i + 1][j] == '#') {
                    topyd[no[now].bely] = now;
                }
                last = no[now];
            } else
                flag = true;
        }
    dist[sp] = 0;
    q.push(make_pair(sp, 0));
    while (!q.empty()) {
        int now = q.front().first, from = q.front().second;
        q.pop();
        if (now == ep)
            continue;
        bool flagx=true,flagy=true;
        int x = no[now].x, y = no[now].y;
        int nxt;
        if (no[now].belx == no[from].belx)
            flagx= false;
        if(no[now].bely == no[from].bely)
            flagy=false;
        bool nflag=false;
        if(flagx)
        {
            nxt=topxl[no[now].belx];
            if (dist[now]+1<dist[nxt] && !nflag)
            {
                dist[nxt]=dist[now]+1;
                q.push(make_pair(nxt,now));
                if(nxt==ep)
                    nflag=true;
            }
            nxt=topxr[no[now].belx];
            if (dist[now]+1<dist[nxt] && !nflag)
            {
                dist[nxt]=dist[now]+1;
                q.push(make_pair(nxt,now));
                if(nxt==ep)
                    nflag=true;
            }
            if(no[now].belx==no[ep].belx && !nflag)
            {
                if (st[x+dx[0]][y+dy[0]]=='.')
                {
                    nxt = calc(x + dx[0], y + dy[0]);
                    if (dist[now]+1<dist[nxt])
                    {
                        dist[nxt]=dist[now]+1;
                        q.push(make_pair(nxt,now));
                    }
                }
                if(st[x+dx[3]][y+dy[3]]=='.')
                {
                    nxt = calc(x + dx[3], y + dy[3]);
                    if (dist[now]+1<dist[nxt])
                    {
                        dist[nxt]=dist[now]+1;
                        q.push(make_pair(nxt,now));
                    }
                }
            }
        }
        if(flagy && !nflag)
        {
            nxt=topyu[no[now].bely];
            if (dist[now]+1<dist[nxt] && !nflag)
            {
                dist[nxt]=dist[now]+1;
                q.push(make_pair(nxt,now));
                if(nxt==ep)
                    nflag=true;
            }
            nxt=topyd[no[now].bely];
            if (dist[now]+1<dist[nxt]&& !nflag)
            {
                dist[nxt]=dist[now]+1;
                q.push(make_pair(nxt,now));
                if(nxt==ep)
                    nflag=true;
            }
            if(no[now].bely==no[ep].bely && !nflag)
            {
                if(st[x+dx[1]][y+dy[1]]=='.')
                {
                    nxt = calc(x + dx[1], y + dy[1]);
                    if (dist[now]+1<dist[nxt])
                    {
                        dist[nxt]=dist[now]+1;
                        q.push(make_pair(nxt,now));
                    }
                }
                if(st[x+dx[2]][y=dy[2]]=='.')
                {
                    nxt = calc(x + dx[2], y + dy[2]);
                    if (dist[now]+1<dist[nxt])
                    {
                        dist[nxt]=dist[now]+1;
                        q.push(make_pair(nxt,now));
                    }
                }
            }
        }
    }
    if(dist[ep]==0x3f3f3f3f)
        dist[ep]=-1;
    printf("%d\n",dist[ep]);
    return 0;
}
