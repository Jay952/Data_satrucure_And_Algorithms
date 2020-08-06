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
	struct node *head, *p;
	if(response == 1){
		head = new node();
		cout<<"Enter Head Data:";
		cin>>head->data;
		head->next = NULL;
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
		struct node *q;
		q = new node();
		cout<<"Enter the data of node "<<i+1<<":";
		cin>>q->data;
		p->next = q;
		q->next = NULL;
		p = p->next;
		i++;
	}
	struct node *r;
	r = head;
	cout<<"Data of all nodes are respectively: ";
	while(r != NULL){
		cout<<r->data<<" ";
		r = r->next;
	}
	
	
	struct node *t, *u;
	t = head;
	u = t->next;
	
	while(u->next != NULL){
		t = t->next;
		u = u->next;
	}
	t->next = NULL;
	
	cout<<"\nThe data of after deleting the last node is: ";
	struct node *v;
	v = head;
	while( v != NULL){
		cout<<v->data<<" ";
		v = v->next;
	}
	
	
	return 0;
}
