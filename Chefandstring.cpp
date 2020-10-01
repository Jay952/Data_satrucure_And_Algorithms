#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;

	int value;
	
	string str;
	for(int i=0;i<N;i++){
	    cin>>str;
	    value=0;
	    int j=0;
	    while(j+1<str.size()){
	        if(str[j]==str[j+1]){
	            j=j+1;
	        }
	        else{
	            j=j+2;
	            value=value+1;
	        }
	    }
	    cout<<value;
	    cout<<endl;
	}
	return 0;
}
