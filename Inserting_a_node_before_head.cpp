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
	cout<<"\n";
	int response2;
	cout<<"Type '1' if you want to insert a node before head\n";
	cin>>response2;
	if(response2 == 1){
		struct node *t;
		t = new node();
		cout<<"Enter the data in the new node:";
		cin>>t->data; 
		t->next = head;
		head = t;
	}
	
	
	struct node *u;
	u = head;
	cout<<"Data of all nodes after inserting new node are respectively: ";
	while(u != NULL){
		cout<<u->data<<" ";
		u = u->next;
	}
	
	
	return 0;
}
