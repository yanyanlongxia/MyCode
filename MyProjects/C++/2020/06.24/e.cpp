
#include <bits/stdc++.h>
using namespace std;
deque<int> q1,q2;
int n,a[100],ans;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    q1.push_back(a[1]);
    if(a[2]<a[1])
        q2.push_back(a[2]);
    else
        q1.push_back(a[2]);
    for(int i=3;i<=n;i++)
    {
        int p1=q1[q1.size()-1];
        int p2=q2[q2.size()-1];
        int d1=p1-a[i];
        int d2=p2-a[i];
        if(d1<0)
        {
            if(d2<0)
            {
                if(p1>p2)
                    q1.push_back(a[i]);
                else
                    q2.push_back(a[i]);
            } else
                q1.push_back(a[i]);
        } else{
            if(d2<0)
                q2.push_back(a[i]);
            else
            {
                if(d1>d2)
                    q2.push_back(a[i]);
                else
                    q1.push_back(a[i]);
            }
        }
    }
    for(int i=0;i<q1.size()-1;i++)
    	if(q1[i]>q1[i+1])
        	ans+=q1[i]-q1[i+1];
    for(int i=0;i<q2.size()-1;i++)
    	if(q2[i]>q2[i+1])
        	ans+=q2[i]-q2[i+1];
	cout<<ans<<endl; 
    return 0;
}
