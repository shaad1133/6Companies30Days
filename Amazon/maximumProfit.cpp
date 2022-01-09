/*
In the stock market, a person buys a stock and sells it on some future date. 
Given the stock prices of N days in an array A[ ] and a positive integer K, 
find out the maximum profit a person can make in at-most K transactions. 
A transaction is equivalent to (buying + selling) of a stock and new 
transaction can start only when the previous transaction has been completed.
*/

int maxProfit(int K, int N, int A[]) {
        
     int dp[K+1][N];
        
     for(int i=0;i<=K;i++){ // till ith transaction

          for(int j=0;j<N;j++){ // till jth day
                
              if(i==0 || j==0){
                    
                 dp[i][j] = 0;
                 continue;
              }
                
              dp[i][j] = dp[i][j-1];
                
              for(int pd=0;pd<j;pd++){ // pd = prev day
                    
                  dp[i][j] = max(dp[i][j] , dp[i-1][pd] + A[j]-A[pd]);
                    
              }

          }

     }
        
     return dp[K][N-1];
        
}
