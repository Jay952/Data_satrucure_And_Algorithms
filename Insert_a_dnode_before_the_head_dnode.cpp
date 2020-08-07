#include<iostream>
using namespace std;

struct dnode{
	int data;
	struct dnode *next;
	struct dnode *prev;
};

int main(){
	
	int response;
	cout<<"Type '1' to create a doubly node\n";
	cin>>response;
	struct dnode *head, *p;
	if(response == 1){
		head = new dnode();
		cout<<"Enter Head Data:";
		cin>>head->data;
		head->next = NULL;
		head->prev = NULL;
		p = head;
	}
	else{
		cout<<"You have not typed 1";
		return 0;
	}
	int n;
	cout<<"The data in Head is:"<<head->data;
	cout<<"\nNumber of nodes you want to insert after head (n) =";
	cin>>n;
	int i=0;
	while(i<n){
		struct dnode *q;
		q = new dnode();
		cout<<"Enter the data of dnode "<<i+1<<":";
		cin>>q->data;
		p->next = q;
		q->next = NULL;
		q->prev = p;
		p = p->next;
		i++;
	}
	struct dnode *r;
	r = head;
	cout<<"Data of all nodes are respectively: ";
	while(r != NULL){
		cout<<r->data<<" ";
		r = r->next;
	}
	cout<<"\n";
	int response2;
	cout<<"Enter 1 if you want to add a dnode before the head node\n";
	cin>>response2;
	if(response == 1){
		struct dnode *t;
		t = new dnode();
		cout<<"Enter data in the new dnode before head:";
		cin>>t->data;
		t->next = head;
		t->prev = NULL;
		head->prev = t;
		head = t;
	}
	
	
	struct dnode *u;
	u = head;
	cout<<"Data of all nodes after inserting a new node before head node are respectively: ";
	while(u != NULL){
		cout<<u->data<<" ";
		u = u->next;
	}
	
	
	
	return 0;
}
