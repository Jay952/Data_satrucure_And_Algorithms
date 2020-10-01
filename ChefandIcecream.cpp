#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int Testcases;
	cin>>Testcases;
	for(int i=0;i<Testcases;i++){
	    int N,cost5,cost10,cost15;
	    cin>>N;
	    int value=0;
	    cost5=cost10=cost15=0;
	    int cost[N];
	    for(int j=0;j<N;j++){
	        cin>>cost[j];
	        if(cost[0]!=5){
	             value=1;
	        }
	        else{
	            if(cost[j]==5){
	                cost5=cost5+1;
	            }
	            else if(cost[j]==10){
	                cost10=cost10+1;
	                if(cost5==0){
	                    value=1;
	               
	                }
	                else{
	                    cost5=cost5-1;
	                }
	            }
	            else if(cost[j]==15){
	                cost15=cost15+1;
	                if(cost10==0){
	                    if(cost5<2){
	                       
	                        value=1;
	               
	                   
	                    }
	                    else if(cost5>=2){
	                        cost5=cost5-2;
	                    }
	                }
	                else{
	                    cost10=cost10-1;
	                }
	                
	            }
	        }
	       
	        
	    }
	    if(value==0){
	        cout<<"YES";
	        cout<<endl;
	    }
	    if(value==1){
	        cout<<"NO";
	        cout<<endl;
	    }
	}
	return 0;
}