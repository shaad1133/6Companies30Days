/*
Count the number of ways to decode the message.
*/

  int CountWays(string str) {
  		    
        if(str[0]=='0') return 0; // invalid string (trailing zeroes)
		    
        int n = str.length();
		    
        int dp[n+1] = {0};
        dp[0] = 1;
        dp[1] = 1;
        		     
        for(int i=2;i<=n;i++) {
        		
             int temp = 0;   
             if(str[i-1]!='0')
        	 temp += dp[i-1];
        		        
             int num = stoi(str.substr(i-2,2));
        		        
             if(str[i-2]!='0' && num>=1 && num<=26)
                 temp+= dp[i-2];
        		           
             dp[i] = temp % 1000000007;   
        		        
        }
        		    
        return dp[n];
		    
  }
