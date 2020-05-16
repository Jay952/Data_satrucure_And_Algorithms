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

void Preorder(struct node *root)
{
	if(root==0)
	{
		return;
	}
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}



void Inorder(struct node *root)
{
	if(root->==0)
	{
		return;
	  	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}



int main()
{
	
	struct node *root;
	cout<<"Enter Value of Root node\n";
    root = Create();
    cout<<"Preorder is:";
    Preorder(root);
    cout<<"Inorder is:";
    Inorder(root);
    cout<<"Postorder is:";
    Postorder(root);
}




