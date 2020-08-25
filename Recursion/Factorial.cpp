#include<iostream>
using namespace std;
int fact(int n){
	if(n == 1){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	cout<<"Enter the Value of N"<<endl;
	int N;
	cin>>N;
	cout<<"Factorial of "<<N<<" is: "<<fact(N);
	return 0;
}
