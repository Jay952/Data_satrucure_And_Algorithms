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
		q->next = head;
		z = z->next;
		i++;
	}


	struct node *k;
	k = head;
	cout<<"Data of all nodes in circular linked list are respectively, first and last data is of head node: ";
	while(k->next != head){
		cout<<k->data<<" ";
		k = k->next;
	}
	cout<<k->data<<" ";
	cout<<k->next->data<<" ";

    struct node *p;
	cout<<"\n";
	p = head->next->next->next;
	cout<<"The node pointed by p has data="<<p->data<<"\n";
	int response2;
	cout<<"Enter 1 if you want to delete the node pointed by p in a circular linked list: ";
	cin>>response2;
	if(response2 == 1){
		struct node *t;
		t = head;
		while(t->next != p){
			t = t->next;
		}		
		t->next = p->next;
	}

	cout<<"The node pointed by p in a circular linked list is deleted succesfully\n";

	struct node *r;
	r = head;
	cout<<"Data of all nodes in circular linked list are respectively, first and last data is of head node: ";
	while(r->next != head){
		cout<<r->data<<" ";
		r = r->next;
	}
	cout<<r->data<<" ";
	cout<<r->next->data;
	return 0;
}
