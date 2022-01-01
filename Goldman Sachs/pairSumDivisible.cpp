/*
Given an array of integers and a number k, 
write a function that returns true if 
given array can be divided into pairs 
such that sum of every pair is divisible by k.
*/


bool canPair(vector<int> nums, int k) {
        
        int n = nums.size();
        
        if(n&1) return false; // if no of elements are odd
        
        unordered_map<int,int>m; // hashmap
        for(auto i:nums){
            
            m[i%k]++;
            
        }
        
        if(m[0]&1) // if no of numbers with rem 0 are odd
            return false;
        
        if(k%2==0 && m[k/2]%2==1) // if k is even and num with rem k/2 are odd 
            return false;
        
        for(int i=1;i<k;i++){
            
            if(m[i]!=m[k-i])
                return false;
            
        }
        
        return true;
        
 }
