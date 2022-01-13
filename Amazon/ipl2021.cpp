/*
find the maximum score for each and every contiguous
sub-list of size K to strategize for the game.
*/

class Solution{
  public:
    
    vector<int> max_of_subarrays(int *arr, int n, int k){
        
        deque<int>dq;
        vector<int>v;
        
        
        for(int i=0;i<n;i++){
            
            
            while(!dq.empty() && arr[i]>=arr[dq.back()])
                dq.pop_back();
                
            dq.push_back(i);
            
            while(!dq.empty() && dq.front()<=i-k)
                dq.pop_front();
                
            if(i<k-1) continue;    
            
            v.push_back(arr[dq.front()]);
            
            
        }
        
        
        return v;

        
    }
};
