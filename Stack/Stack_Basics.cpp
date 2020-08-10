#include<iostream>
#include<stack>
using namespace std;


int main(){
	stack<int> myStack;
	myStack.push(1);
	myStack.push(2);
	myStack.push(3);
	myStack.push(4);
	myStack.push(5);
	cout<<"Number of elements in the stack: "<<myStack.size()<<endl;
	
	while(!myStack.empty()){
		cout<<"Top of the stack is: "<<myStack.top()<<endl;
		myStack.pop();
	}
	
	
	return 0;
}
