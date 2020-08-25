#include<iostream>
#include<array>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	array<int,7> arr1;
	stack<int> s;
	vector<int> v;
	cout<<"Enter 7 elements in the array: "<<endl;
	for(int i=0; i<7; i++){
		cout<<"Enter the element of index "<<i<<": ";
		cin>>arr1[i];
	}
	cout<<s.size();
	for(int i=6; i>=0; i--){
		if(s.size() == 0){
			v.push_back(-1);
			cout<<v[6-i];
		}
		else if(s.top() > arr1[i]){
			v.push_back(s.top());
			cout<<v[6-i];
		}
		else if(s.top() < arr1[i]){
			while(arr1[i]>s.top()){
				s.pop();
			}
			if(s.size() ==0){
				v.push_back(-1);
				cout<<v[6-i];
			}
			else{
				v.push_back(s.top());
				cout<<v[6-i];
			}
		}
		s.push(arr1[i]);
	}
	
	reverse(v.begin(), v.end());
	
	cout<<"Nearest greater to right is: ";
	for(int j=0; j<7; j++){
		cout<<v[j]<<" ";
	}
	
	return 0;
}
