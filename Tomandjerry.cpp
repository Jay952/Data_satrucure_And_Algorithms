#include <iostream>
using namespace std;
#include <cmath>
int main() {
	// your code goes here
	int Testcases;
	cin>>Testcases;
	for(int i=0;i<Testcases;i++){
	 
	    unsigned long long int divisor,num,twice,value,sum,power;
	    divisor=0;
	    twice=0;
	    value=0;
	    sum=0;
	    power=0;
	    cin>>num;
	    if(num%2!=0){
	        sum=num/2;
	        cout<<sum;
	        cout<<endl;
	    }
	   
	    else{
	        for(int j=1;pow(2,j)<=num;j++){
	               power=pow(2,j);
	               if(num%power ==0){
	                   divisor=power;
	               }
	              else{
	                
	                  break;
	              }
	               
	            }
	            
	          
	             twice=divisor*2;
	           
	            value=num/twice;
	            cout<<value;
	            cout<<endl;
	   
	    }
	    
	   
	}
	
	return 0;
}