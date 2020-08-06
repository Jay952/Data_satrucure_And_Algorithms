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
	
	cout<<"\n Now we are going to delete the first node\n";
	struct node *m;
	m = head;
	head = head->next;
	m->next = NULL;
	
	
	cout<<"\n";
	
	struct node *y;
	y = head;
	cout<<"The data of all nodes after deleting the first node: ";
	while(y != NULL){
		cout<<y->data<<" ";
		y = y->next;
	}
	
	return 0;
}
