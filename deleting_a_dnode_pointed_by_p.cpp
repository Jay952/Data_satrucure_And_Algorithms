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
	struct dnode *head, *k;
	if(response == 1){
		head = new dnode();
		cout<<"Enter Head Data:";
		cin>>head->data;
		head->next = NULL;
		head->prev = NULL;
		k = head;
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
		k->next = q;
		q->next = NULL;
		q->prev = k;
		k = k->next;
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
	
	struct dnode *p;
	p = head->next->next->next;
	cout<<"The dnode pointed by p has data="<<p->data<<"\n";
	
	
	int response2;
	cout<<"Enter 1 if you want to delete a dnode pointed by p in a doubly linked list\n";
	cin>>response2;
	if(response == 1){
		struct dnode *t, *l;
		t = head;
		while(t->next != p){
			t = t->next;
		}
		l = p->next;
		t->next = l;
		l->prev = t;
		}
	
	struct dnode *u;
	u = head;
	cout<<"Data of all dnodes after deleting a dnode pointed by p are respectively: ";
	while(u != NULL){
		cout<<u->data<<" ";
		u = u->next;
	}
	
	return 0;
}
