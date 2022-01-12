int minDifference(int arr[], int n)  { 
	    
      int sum = 0;

      for(int i=0;i<n;i++) 
	        sum+=arr[i];
	    
      bool dp[n+1][sum+1];
	    
      for(int i=0;i<=n;i++){
	        for(int j=0;j<=sum;j++){
	            
	            if(j==0){
	                
	                dp[i][j] = true;
	                continue;
	            }
	            
	            if(i==0){
	                
	                dp[i][j] = false;
	                continue;
	            }   
	            
	            dp[i][j] = dp[i-1][j];
	            
	            if(j-arr[i-1]>=0){
	                
	                dp[i][j] = dp[i][j]||dp[i-1][j-arr[i-1]];
	            
	            }
	            
	        }

      }
	  
	    
      int mindiff = sum;
	    
      for(int i=0;i<=sum;i++){
	        
	        if(dp[n][i]==true)
	            mindiff = min(mindiff,abs(sum-2*i));
      }
	    
      return mindiff;
	    
}
