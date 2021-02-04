//
// Created by admin on 2020/6/7.
//
#include <iostream>
#include <vector>
#define int long long
using namespace std;
int n,a[500100],count,temp[500100];
void merge(int left,int right)
{
    if(left==right)
        return;
    int mid=(left+right)/2;
    int l=left,r=mid+1;
    if(l<r)
    {
        merge(l,mid);
        merge(r,right);
        if(a[mid]<=a[r])
            return;
        for(int k=left;k<=right;k++)
        {
            if(l>mid)
            {
                temp[k]=a[r];
                r++;
                continue;
            }
            if(r>right)
            {
                temp[k]=a[l];
                l++;
                continue;
            }
            if(a[l]<=a[r])
            {
                temp[k]=a[l];
                l++;
            } else
            {
                temp[k]=a[r];
                r++;
                count+=mid-l+1;
            }
        }
        for(int k=left;k<=right;k++)
            a[k]=temp[k];
    }
}

signed main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    merge(1,n);
    cout<<count<<endl;
    return 0;
}
