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
		q->next = head;
		p = p->next;
		i++;
	}
	
	struct node *r;
	r = head;
	cout<<"Data of all nodes in circular linked list are respectively, first and last data is of head node: ";
	while(r->next != head){
		cout<<r->data<<" ";
		r = r->next;
	}
	cout<<r->data<<" ";
	cout<<r->next->data;
	
	int response2;
	
	cout<<"\nEnter 1 if you want to delete the first node: ";
	cin>>response2;
	if(response2 == 1){
		struct node *t;
		t = head;
		while(t->next != head){
			t = t->next;
		}
		t->next = head->next;
		head = t->next;	
	}
	cout<<"Head node is deleted succesfully and new head data is="<<head->data<<"\n";
	struct node *k;
	k = head;
	cout<<"Data of all nodes in circular linked list are respectively, first and last data is of head node: ";
	while(k->next != head){
		cout<<k->data<<" ";
		k = k->next;
	}
	cout<<k->data<<" ";
	cout<<k->next->data;
	
	return 0;
}
