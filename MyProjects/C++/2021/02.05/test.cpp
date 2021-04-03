//File: test.cpp
//Author: yanyanlongxia
//Date: 2020/8/14
//
#include <bits/stdc++.h>
#define rg register
using namespace std;
string s;
void radix_sort(vector<pair<pair<int,int>,int> > &a)
{
    int n=a.size();
    {
        vector<int>buck(n);
        for(auto x:a)
            buck[x.first.second]++;//统计各个桶中元素个数
        vector<pair<pair<int,int>,int> > an(n);  //按第二元素先排序的结果
        vector<int>pos(n);//各个桶在排序后序列中的位置
        pos[0]=0;
        for (rg int i = 1; i < n; ++i) {
            pos[i]=pos[i-1]+buck[i-1];//求出各个桶的起点
        }
        for(auto x:a)  //将旧数组中元素一个个放入桶中，形成新的数组（此处pos数组当做迭代器使用）
        {
            int i=x.first.second;
            an[pos[i]]=x;
            pos[i]++;
        }
        a=an;
    }
    {
        vector<int>buck(n);
        for(auto x:a)
            buck[x.first.first]++;//统计各个桶中元素个数
        vector<pair<pair<int,int>,int> > an(n);  //按第二元素先排序的结果
        vector<int>pos(n);//各个桶在排序后序列中的位置
        pos[0]=0;
        for (rg int i = 1; i < n; ++i) {
            pos[i]=pos[i-1]+buck[i-1];//求出各个桶的起点
        }
        for(auto x:a)  //将旧数组中元素一个个放入桶中，形成新的数组（此处pos数组当做迭代器使用）
        {
            int i=x.first.first;
            an[pos[i]]=x;
            pos[i]++;
        }
        a=an;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    int k=0,n;
    //getline(cin,s);
    cin>>s;
    s+='$';
    n=s.size();
    vector<int>p(n),c(n);  //p为后缀排序结果，c为字符串所处集合
    {//k=0时，即初始化
        vector<pair<char,int>>a(n);  //a为第一元为后缀起始字符，第二元为起始字符下标
        for (rg int i = 0; i < n; ++i) {
            a[i]={s[i],i};
        }
        sort(a.begin(),a.end());  //排序
        for (rg int i = 0; i < n; ++i) {
            p[i]=a[i].second;
        }
        c[p[0]]=0;
        for (rg int i = 1; i < n; ++i) {
            if(a[i].first==a[i-1].first)  //两字符串的起始字符相同，在此地位相等
                c[p[i]]=c[p[i-1]];
            else
                c[p[i]]=c[p[i-1]]+1;
        }
    }
    while ((1<<k)<n)  //k到k+1的过渡
    {
        vector<pair<pair<int,int>,int> > a(n);
        for (rg int i = 0; i < n; ++i) {
            a[i].first={c[i],c[(i+(1<<k)) %n]};
            a[i].second=i;
        }
        radix_sort(a);  //基数排序
        for (rg int i = 0; i < n; ++i) {
            p[i]=a[i].second;
        }
        c[p[0]]=0;
        for (rg int i = 1; i < n; ++i) {
            if(a[i].first==a[i-1].first)  //两字符串的起始字符相同，在此地位相等
                c[p[i]]=c[p[i-1]];
            else
                c[p[i]]=c[p[i-1]]+1;
        }
        k++;
    }
    for (rg int i = 1; i < n; ++i) {
        // if(i!=0)
        printf("%d ",p[i]+1);
    }
    puts("");
    return 0;
}
