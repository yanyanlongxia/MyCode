#include <bits/stdc++.h>
using namespace std;
const int MAXN=16000;
struct node{
int s;
 	node *next;
};
node *son[MAXN];
int profit[MAXN],sum[MAXN];
bool vis[MAXN];
int root,n,max_pro;
void init()
{
	int i,a,b;
 	node *p;
	cin>>n;
 	for(i=1;i<=n;i++)
	   cin>>profit[i]; 
	for(i=1;i<=n-1;i++){ 
 		cin>>a>>b;
 		p=new node;
 		p->s=a;
 		p->next=son[b];
 		son[b]=p; 
		p=new node;
 		p->s=b;
 		p->next=son[a];
 		son[a]=p;
	} 
	root=1;
}
void buildtree(int k){
	node *p,*q;
 	int i;
	vis[k]=true;
 	p=son[k]; 
	while(p!=NULL){
 		i=p->s;
 		if(vis[i])
		  if(p==son[k]){
 			son[k]=p->next;
 			delete p;
 			p=son[k];
		  }
 		  else{
		  	q->next=p->next;
		  	delete p;
			p=q->next;
 		  }
		else{
 			buildtree(i);
 			if(p==son[k]) 
			  q=son[k];
 			else 
			  q=q->next;
 			p=p->next;
		} 
	} 
}
void calc(int k){
	node *p;
 	int i;
	p=son[k];
 	while(p!=NULL){
 		i=p->s;
 		calc(i);
 		if(sum[i]>0)
		  sum[k] += sum[i];
 		p=p->next;
	}
 	sum[k]+=profit[k]; }
void out(){
	int i; 
	for(i=1;i<=n;i++)
	  if(sum[i]>max_pro)
	    max_pro=sum[i];
 	cout<<max_pro<<endl;
}
int main()
{
	init();
 	buildtree(root); 
	calc(root);
 	out();
 	return 0;
}
