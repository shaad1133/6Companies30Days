//Given an integer array arr, return the length of the longest subarray,
// which is a mountain. Return 0 if there is no mountain subarray.


class Solution {
public:

    int longestMountain(vector<int>& arr) {
        
        int n = arr.size();
        
        int l = 0, r = 0;
        len = 0;

        while(r<n-1) {
            

            while(r<n-1 && arr[r]<arr[r+1])
                r++;
            
            int peak = r;
            
            if(peak==l){
                
                while(r<n-1 && arr[r+1]<=arr[r]) r++;
                l = r;
                continue;

            }
            
            while(r<n-1 && arr[r]>arr[r+1])
                r++;
            
            if(peak==r){
                
                while(r<n-1 && arr[r+1]>=arr[r]) r++;
                l = r;
                continue;

            }
            
            len = max(len,r-l+1);

            l = r;
            
        }
        
        return len;

    }
};
