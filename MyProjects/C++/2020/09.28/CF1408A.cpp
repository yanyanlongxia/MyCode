//File: CF1408A.cpp
//Author: yanyanlongxia
//Date: 2020/9/30
//
#include <bits/stdc++.h>

using namespace std;
int t,n,a[4][200];
vector<int>st;
bool found;
void print()
{
    for (int i=0;i<st.size();i++)
        printf("%d ",st[i]);
    puts("");
}
void dfs(int step,int last)
{
    if (found)
        return;
    if (step==n)
    {
        if (last!=st[0])
        {
            print();
            found=true;
        }
        return;
    }
    for (int i=1;i<=3;i++)
    {
        if (a[i][step+1]!=last)
        {
            st.push_back(a[i][step+1]);
            dfs(step+1,a[i][step+1]);
            st.pop_back();
        }
        if (found)
            return;
    }
}
int main() {
    scanf("%d",&t);
    while (t--)
    {
        found=false;
        st.clear();
        scanf("%d",&n);
        for (int i=1;i<=3;i++)
            for (int j=1;j<=n;j++)
                scanf("%d",&a[i][j]);
        dfs(0,0x3f3f3f3f);
    }
    return 0;
}
