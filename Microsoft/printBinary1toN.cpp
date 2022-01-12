/*
Given a number N. The task is to generate and print
all binary numbers with decimal values from 1 to N.
*/

vector<string> generate(int N)  {
	
     vector<string>ans;
	
     for(int i=1;i<=N;i++){
	    
	        int num = i;
	        string s; 
	    
	        while(num) {
	        
	            s = to_string(num%2) + s; 
	            num>>=1;

	        }  
	    
	        ans.push_back(s);
	    
     }
	
     return ans;

}
