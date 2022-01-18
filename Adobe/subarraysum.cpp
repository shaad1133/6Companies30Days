/*
Given an unsorted array A of size N that contains only non-negative integers, 
find a continuous sub-array which adds to a given number S.
*/

class Solution{
    public:
    
    
    vector<int> subarraySum(int arr[], int n, long long s){
        
        int l = 0, r = 0;
        long long sum = 0;
        
        while(r<n) {
            
            sum+=arr[r];
            
            if(sum==s)  return {l+1,r+1};
            
            else if(sum>s){   
                while(sum>s) sum-=arr[l++];
                sum-=arr[r];
            }
            else r++;
                
        }
        
        return {-1};
        
    }
};
