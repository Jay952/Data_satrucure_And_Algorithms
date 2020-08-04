#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n How many elements you want in your array\n";
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter the element:"<<i<<" \n";
		cin>>a[i];
	}
	cout<<"Your Array is:";
	for(int j=0;j<n;j++){
		
		cout<<a[j]<<" ";
	}
	cout<<"\n";
	
	int *Bubble_Sort(int arr[],int n);
	Bubble_Sort(a, n);
	
	
	cout<<"Sorted Array is:";
	for(int j=0;j<n;j++){
		
		cout<<a[j]<<" ";
	}
	cout<<"\n";
	
	
	
	return 0;
}


int *Bubble_Sort(int arr[], int n){
	int temp;
	for(int i=1; i<n; i++){
		for(int j=i-1; j>=0; j--){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	return arr;
}











