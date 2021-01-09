#include<bits/stdc++.h>
using namespace std;
struct node
{
	int d;
	node *next,*pre;
}*p,*head,*r;
int m,s,n,k;
int main()
{
	freopen("jsf.in","r",stdin);
	freopen("jsf.out","w",stdout);
	int i;
	cin>>m>>s>>n>>k;
	head=new node;
	head->d=1;
	head->next=NULL;
	r=head;
	for(i=2;i<=m;i++)
	{
		p=new node;
		p->d=i;
		p->next=NULL;
		p->pre=r;
		r->next=p;
		r=p; 
	}
	r->next=head;
	head->pre=r;
	r=head;
	bool flag=1;
	for(i=1;i<s;i++)
		r=r->next;
	for(i=1;i<=m;i++)
	{
		if(i==1)
		{
			for(int j=1;j<n;j++)
				r=r->next;
			cout<<r->d;
			if(i!=m)
					cout<<" ";
				else
					cout<<endl;
			r->pre->next=r->next;
			r->next->pre=r->pre;
			flag=0;
		}
		else
		{
			if(flag==1)
			{
				for(int j=1;j<=n;j++)
					r=r->next;
				cout<<r->d;
				if(i!=m)
					cout<<" ";
				else
					cout<<endl;
				r->pre->next=r->next;
				r->next->pre=r->pre;
				flag=0;
			}
			else
			{
				for(int j=1;j<=k;j++)
					r=r->pre;
				cout<<r->d;
				if(i!=m)
					cout<<" ";
				else
					cout<<endl;
				r->pre->next=r->next;
				r->next->pre=r->pre;
				flag=1;
			}
		}
	}
	return 0;
}
