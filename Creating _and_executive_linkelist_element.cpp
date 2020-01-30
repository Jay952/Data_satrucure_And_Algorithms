#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

node *create(int n)
{
	int i=0;
	node *head,*p,*nnode;
	
	for(i=0;i<n;i++)
	{
		nnode=new node();
		cin>>nnode->data;
		
		if(i==0)
		{
			head=nnode;
			head->next=NULL;
			p=head;
		}
		
		else
		{
			p->next=nnode;
			p=p->next;
		}
		
		
		
	}
	
	return head;
}


int main()
{
	node *head,*p;
	head=create(5);
	p=head;
	
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	
	
	cout<<"Bye";
	
}
