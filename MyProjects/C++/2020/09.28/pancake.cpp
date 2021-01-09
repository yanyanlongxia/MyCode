//File: pancake.cpp
//Author: yanyanlongxia
//Date: 2020/10/2
//
#include <bits/stdc++.h>

using namespace std;
int n,q,k,a[1000005],ans;
struct node
{
    int x,y,cost;
    node(){
        x=y=cost=0;
    }
    bool operator > (node b)const
    {
        return cost<b.cost;
    }
    bool operator < (node b)const
    {
        return cost >b.cost;
    }
};
multiset<int>s;
priority_queue<node>t;
int main() {
    scanf("%d%d%d",&n,&q,&k);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        s.insert(a[i]);
        ans+=a[i]*a[i];
    }
    for (int i=1;i<=k;i++)
    {
        int now=*(--s.end());
        int x=now/2,y=now-x;
        multiset<int>::iterator it=s.end();
        s.erase(--it);
        s.insert(x);
        s.insert(y);
        ans-=2*x*y;
        node ow;
        ow.x=x;ow.y=y;ow.cost=2*x*y;
        t.push(ow);
    }
    int opt;
    printf("%d\n",ans);
    while (q--)
    {
        scanf("%d",&opt);
        if (opt==1)
        {
            int now=*(--s.end());
            int x=now/2,y=now-x;
            multiset<int>::iterator it=s.end();
            s.erase(--it);
            s.insert(x);
            s.insert(y);
            ans-=2*x*y;
            node ow;
            ow.x=x;ow.y=y;ow.cost=2*x*y;
            t.push(ow);
        }
        if (opt==2)
        {
            node now=t.top();
            t.pop();
            ans+=now.cost;
            multiset<int>::iterator it1=s.find(now.x);
            //if (it1==s.end())
                //it1--;
            s.erase(it1);
            multiset<int>::iterator it2=s.find(now.y);
            //if (it2==s.end())
              //  it2--;
            s.erase(it2);
            s.insert(now.x+now.y);
        }
        if (opt==3)
        {
            int x;
            scanf("%d",&x);
            node now=t.top();
            int fi=x/2,se=x-fi;
            ans+=x*x;
            if (2*fi*se>now.cost)
            {
                t.pop();
                node next;
                next.x=fi;next.y=se;next.cost=2*fi*se;
                t.push(next);
                ans+=now.cost;
                ans-=next.cost;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
