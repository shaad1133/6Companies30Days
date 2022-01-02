/*
Given an array of positive integers nums and a positive integer target, 
return the minimal length of a contiguous subarray 
[numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater 
than or equal to target. If there is no such subarray, return 0 instead.
*/

    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        
        long long sum = 0;
        int j = 0;
        int len = INT_MAX;
        
        for(int i=0;i<n;i++){
            
            sum+=nums[i];
            
            while(j<=i && sum>=target){
                
                len = min(len,i-j+1);
                sum-= nums[j++];
                
            }
        }
        
        if(len==INT_MAX) return 0; // no subarray with sum>=target
        
        return len;
      
    }
