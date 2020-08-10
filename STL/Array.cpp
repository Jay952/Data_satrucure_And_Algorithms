#include<iostream>
#include<array>
using namespace std;
int main(){
	array<int,5> myarray;
	myarray = {1,2,3,4,5};
	cout<<"Array is:";
	for(int i=0; i<5; i++){
		cout<<myarray[i]<<" ";
	}
	cout<<"\nElement at index 1: "<<myarray.at(1)<<endl;
	cout<<"Front of the array is: "<<myarray.front()<<endl;
	cout<<"Back of the array is: "<<myarray.back()<<endl;
	cout<<"data() function in array gives: "<<myarray.data()<<endl;
	return 0;
}
