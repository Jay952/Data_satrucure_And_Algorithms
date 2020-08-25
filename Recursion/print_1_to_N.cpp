#include<iostream>
using namespace std;
void print(int n){
	if(n == 1){
		cout<<"1"<<" ";
		return;
	}
	print(n-1);
	cout<<n<<" ";	
}
int main(){
	cout<<"Enter the Value of N"<<endl;
	int N;
	cin>>N;
	print(N);
	return 0;
	
}
