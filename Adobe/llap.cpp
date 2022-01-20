/*
Given an array called A[] of sorted integers having no duplicates, 
find the length of the Longest Arithmetic Progression (LLAP) in it.
*/

class Solution{   
public:

    int lengthOfLongestAP(int A[], int n) {
        
        if(n<=2)  return n;
            
        vector<unordered_map<int,int>>dp(n);  // {diff,count}
            
        int ans = 2;
        
        for(int i=0;i<n-1;i++){
            
            for(int j=i+1;j<n;j++){
                
                int diff = (A[j]-A[i]);
                
                if(dp[i].find(diff) != dp[i].end()){
                    
                    dp[j][diff] = dp[i][diff] + 1;
                    
                }
                else{
                    
                    dp[j][diff] = 2;
                }
                
                ans = max(ans,dp[j][diff]);
                
            }
            
        }
        
        return ans;
        
    }
};
