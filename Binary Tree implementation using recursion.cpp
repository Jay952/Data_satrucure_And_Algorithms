#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};


struct node *Create()
{
	int x;
	struct node *newnode;
	newnode = new node();
	cin>>x; 
	
	if(x== -1)
	{
		return 0;
	}
	
	newnode->data=x;
	cout<<"Enter Value of Left Child of "<<x<<" (if no left child, Enter -1)"<<"\n";
	newnode->left=Create();
	cout<<"Enter Value of Right Child of "<<x<<" (if no right child, Enter -1)"<<"\n";
	newnode->right=Create();
	
}


int main()
{
	
	struct node *root;
	cout<<"Enter Value of Root node\n";
    root = Create();
}



