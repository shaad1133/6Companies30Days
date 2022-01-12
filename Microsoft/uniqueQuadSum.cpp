/*
Given an array of integers and another number. 
Find all the unique quadruple from the given 
array that sums up to the given number.
*/

class Solution{
    public:
   
    
    vector<vector<int> > fourSum(vector<int> &arr, int sum) {
        
        int n = arr.size();
        vector<vector<int>>ans;
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n-2;i++){
            
            if(i>0 && arr[i]==arr[i-1]) 
                continue;
            
            for(int j=i+1;j<n-1;j++) {
                
                if(j>i+1 && arr[j]==arr[j-1]) 
                    continue;
                
                int target = sum-(arr[i]+arr[j]);
                int l = j+1,r = n-1;
                
                while(l<r){
                    
                    if(target==(arr[l]+arr[r])){
                        
                        ans.push_back({arr[i],arr[j],arr[l],arr[r]});
                        l++;r--;
                        while(arr[l]==arr[l-1] && l<r) l++;
                        while(arr[r]==arr[r+1] && l<r) r--;
                        
                    }
                    else if(target<(arr[l]+arr[r]))
                        r--;
                    else
                        l++;
                }
            }
        }
        
        return ans;

    }

};
