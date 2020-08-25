#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> Vec;
//	for(int i=0; i<32; i++){
//		Vec.push_back(i);
//		cout<<Vec.size()<<" "<<Vec.capacity()<<endl;
//	}
     Vec.reserve(30);
    
     for(int i=0; i<32; i++){
		Vec.push_back(i+1);
		cout<<Vec.size()<<" "<<Vec.capacity()<<endl;
	}
	cout<<"Result: "<<Vec[0];
	}
