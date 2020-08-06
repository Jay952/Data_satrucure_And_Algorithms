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
	
	int *Insertion_Sort(int arr[],int n);
	Insertion_Sort(a, n);
	
	
	cout<<"Sorted Array is:";
	for(int j=0;j<n;j++){
		
		cout<<a[j]<<" ";
	}
	cout<<"\n";
	
	
	return 0;
}


int *Insertion_Sort(int arr[], int n){
	int key;
	for(int i=1; i<n; i++){
		key = arr[i];
		for(int j=i-1; j>=0; j--){
			if(key < arr[j]){
				arr[j+1] = arr[j];	
				if(j == 0){
					arr[j] = key;
				}
			}
			if(key > arr[j]){
				arr[j+1] = key;
				break;
			}
		}
		
		
	}
	return arr;
}






