#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter n How many elements you want in your array\n";
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter the element: "<<i<<" \n";
		cin>>a[i];
	}
	cout<<"Your Array is:";
	for(int j=0;j<n;j++){
		
		cout<<a[j]<<" ";
	}
	cout<<"\n";
	
	int *Selection_Sort(int arr[],int n);
	Selection_Sort(a, n);
	
	
	cout<<"Sorted Array is:";
	for(int j=0;j<n;j++){
		
		cout<<a[j]<<" ";
	}
	cout<<"\n";
	
	
	return 0;
}


int *Selection_Sort(int arr[], int n){
	int temp;
	for(int i=n-1; i>0; i--){
		int Large = arr[i];
		for(int j=i-1; j>=0; j--){
			if(Large < arr[j]){
				temp = Large;
				Large = arr[j];
				arr[j] = temp;
			}
			
		}
		arr[i] = Large;
		
	}
	return arr;
}






