#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main(){
	int response;
	cout<<"Type '1' to create a node\n";
	cin>>response;
	struct node *head, *z;
	if(response == 1){
		head = new node();
		cout<<"Enter Head Data:";
		cin>>head->data;
		head->next = NULL;
		z = head;
	}
	else{
		cout<<"You have not typed 1";
		return 0;
	}
    int n;
	cout<<"The data in Head is:"<<head->data;
	cout<<"\nNumber of nodes you want to insert after head (n>=4) =";
	cin>>n;
	int i=0;
	while(i<n){
		struct node *q;
		q = new node();
		cout<<"Enter the data of node "<<i+1<<":";
		cin>>q->data;
		z->next = q;
		q->next = NULL;
		z = z->next;
		i++;
	}
	struct node *r;
	r = head;
	cout<<"Data of all nodes are respectively: ";
	while(r != NULL){
		cout<<r->data<<" ";
		r = r->next;
	}
	
	struct node *p;
	p = head;
	p = p->next->next->next;
	cout<<"The node pointed by pointer p has data = "<<p->data;
	cout<<"\nNow we are deleting the node pointed by pointer p\n";
	
	struct node *l;
	l = head;
	while(l->next != p){
		l = l->next;
	}
	
	l->next = p->next;
	
	cout<<"We have deleted the node pointed by pointer p\n";
	
	struct node *k;
	k = head;
	cout<<"The data of all the node after inserting a new node after a node pointed a pointer p\n";
	while(k != NULL){
		cout<<k->data<<" ";
		k = k->next;
	}
	
	
	
	return 0;
}
