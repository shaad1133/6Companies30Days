/*
Given an unsorted array Arr of size N of positive integers. 
One number 'A' from set {1, 2, …N} is missing and 
one number 'B' occurs twice in array. Find these two numbers.
*/

int *findTwoElement(int *arr, int n) {
        
  
        int* ans = new int[2];
            
        int xorr;
        for(int i=0;i<n+1;i++){
            
            if(i==0){
                xorr = arr[0];
                continue;
            }
            if(i==n){
                xorr = xorr^n;
                continue;
            }
            
            xorr = xorr^arr[i]^i;
            
        }
        
        int k = xorr & -xorr;
        
        int n1 = 0;
        
        for(int i=0;i<n;i++){
            
            if(k & arr[i])
                n1 = n1^arr[i];
            
        }
        
        for(int i=1;i<=n;i++){
            
            if(k & i)
                n1 = n1^i;
        }
        
        int n2 = n1^xorr;
        
        for(int i=0;i<n;i++) {
            
            if(arr[i]==n1){
                ans[0]=n1; ans[1]=n2;
                break;
            }
            else if(arr[i]==n2){
                ans[0]=n2; ans[1]=n1;
                break;
            }
        }
      
        return ans;
        
}
