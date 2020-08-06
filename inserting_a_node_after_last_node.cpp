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
	
	
	struct node *t;
	t=head;
	while(t->next != NULL){
		t = t->next;
	}
	cout<<"\n"<<"Last node data is:"<<t->data<<"\n";
	cout<<"Type '1' if you want to insert a node after the last node\n";
	int response2;
	cin>>response2;
	if(response2 == 1){
		struct node *u;
		u = new node();
		cout<<"Enter the data you want in the node which will be inserted after the last node";
		cin>>u->data;
		t->next = u;
		u->next = NULL;
	}
	
	struct node *v;
	v = head;
	cout<<"The data of all nodes after inserting the new node after last node are respectively: ";
	while(v != NULL){
		cout<<v->data<<" ";
		v = v->next;
	}
	
	return 0;
}
