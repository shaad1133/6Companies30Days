/*
Count the subarrays having product less than k int the array
*/

int countSubArrayProductLessThanK(const vector<int>&arr, int n, long long k) {
        
     int count = 0, j = 0;
     long long prod = 1;
        
     for(int i=0;i<n;i++)  {
            
         prod*=arr[i];
            
         while(j<=i && prod>=k){
                
              prod/=arr[j];
              j++;
                
         }
            
         count+= (i-j+1);
            
     }
        
     return count;
  
}
