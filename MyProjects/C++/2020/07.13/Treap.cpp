//P3369
#include <bits/stdc++.h>
using namespace std;
const int inf=1 << 30;
struct treap
{
    int l,r;
    int val,dat;
    int cnt,size;//重复个数，以此节点为根的字数大小
}t[1000000];
int tot,root,n;
int New(int val)
{
    t[++tot].val=val;
    t[tot].size=t[tot].cnt=1;
    t[tot].dat=rand();
    return tot;
}
void update(int p)
{
    t[p].size=t[t[p].l].size+t[t[p].r].size+t[p].cnt;
}
void build()
{
    root=New(-inf);
    t[root].r=New(inf);
    update(root);
}
int GetRankbyVal(int p,int val)
{
    if(p==0)
        return 0;
    if(t[p].val==val)
        return t[t[p].l].size+1;
    if(val<t[p].val)
        return GetRankbyVal(t[p].l,val);//左子树中的排名
    else
        return GetRankbyVal(t[p].r,val)+t[t[p].l].size+t[p].cnt;//右子树中排名+左子树大小+本节点重复个数
}
int GetValbyRank(int p,int rank)
{
    if(p==0)
        return inf;
    if(t[t[p].l].size>=rank)
        return GetValbyRank(t[p].l,rank);//在左子树中搜索
    if(t[t[p].l].size+t[p].cnt>=rank)
        return t[p].val; //就是本次的值
    return GetValbyRank(t[p].r,rank-t[t[p].l].size-t[p].cnt);//在右子树中搜索，排名减去左子树大小和本节点重复数
}
void zig(int &p) //向右旋转（以p为根）
{
    int q=t[p].l;
    t[p].l=t[q].r;
    t[q].r=p;
    p=q; //将根替换为左孩子
    update(t[p].r);update(p); //全部更新
}
void zag(int &p) //向左旋转（以p为根）
{
    int q=t[p].r;
    t[p].r=t[q].l;
    t[q].l=p;
    p=q;  //将根替换成左孩子
    update(t[p].l); update(p); //全部更新
}
void insert(int &p,int val)
{
    if(p==0)
    {
        p=New(val);
        return;
    }
    if(t[p].val==val)
    {
        t[p].cnt++;  //直接添加重复个数
        update(p);
        return ;
    }
    if(val<t[p].val)  //无重复项
    {
        insert(t[p].l,val);  //递归插入
        if(t[p].dat<t[t[p].l].dat)
            zig(p);  //不满足堆性质，右旋
    } else{
        insert(t[p].r,val);
        if(t[p].dat<t[t[p].r].dat)
            zag(p);
    }
    update(p);
}
int pre(int val) // 求前驱
{
    int ans=1;  //t[1].val==-inf
    int p=root;
    while(p)
    {
        if(t[p].val==val) //找到了
        {
            if(t[p].l>0) //节点左子树中的最大值
            {
                p=t[p].l;
                while(t[p].r>0)
                    p=t[p].r;
                ans=p;
            }
            break;
        }
        if(t[p].val<val && t[p].val>t[ans].val)
            ans=p;  //迭代
        p= val<t[p].val ? t[p].l : t[p].r;
    }
    return t[ans].val;
}
int next(int val) //求后继，与前驱相似
{
    int ans=2;  //t[2].val==inf
    int p=root;
    while(p)
    {
        if(t[p].val==val)
        {
            if(t[p].r>0)
            {
                p=t[p].r;
                while(t[p].l>0)
                    p=t[p].l;
                ans=p;
            }
            break;
        }
        if(t[p].val>val && t[p].val<t[ans].val)
            ans=p;
        p= val < t[p].val ? t[p].l : t[p].r;
    }
    return t[ans].val;
}
void remove(int &p,int val)//将待删节点旋转到叶子上
{
    if(p==0)
        return;
    if(t[p].val==val)
    {
        if(t[p].cnt>1)
        {
            t[p].cnt--;
            update(p);
            return;
        }
        if(t[p].l||t[p].r) //非叶子节点
        {
            if(t[p].r==0 || t[t[p].l].dat>t[t[p].r].dat)
                zig(p),remove(t[p].r,val);// 右旋
            else
                zag(p),remove(t[p].l,val);
            update(p);
        } else
            p=0; //是叶子节点，直接删除
        return;
    }
    val<t[p].val ? remove(t[p].l,val) : remove(t[p].r,val);
    update(p);
}
int main()
{
    build();
    cin>>n;
    while(n--)
    {
        int opt,x;
        cin>>opt>>x;
        switch (opt) {
            case 1:
                insert(root,x);
                break;
            case 2:
                remove(root,x);
                break;
            case 3:
                cout<<GetRankbyVal(root,x)-1<<endl;
                break;
            case 4:
                cout<<GetValbyRank(root,x+1)<<endl;
                break;
            case 5:
                cout<<pre(x)<<endl;
                break;
            case 6:
                cout<<next(x)<<endl;
                break;
        }
    }
    return 0;
}
