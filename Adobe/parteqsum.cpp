/*
Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same.
*/

class Solution{
public:

    int equalPartition(int N, int arr[]){
        
        int sum = 0;
    
        for(int i=0;i<N;i++)
            sum+=arr[i];
            
        if(sum%2==1)
            return 0;
            
        bool array[(sum/2)+1][N+1];
        
        for(int j=0;j<N+1;j++)
            array[0][j]=true;
            
        for(int i=1;i<(sum/2)+1;i++)
            array[i][0]=false;
            
        for(int i=1;i<N+1;i++) {
            
            for(int j=1;j<(sum/2)+1;j++){
                
                array[j][i]=array[j][i-1]||((j-arr[i-1]<0)?false:array[j-arr[i-1]][i-1]);
                
            }
        }  
        
        return array[sum/2][N];
        
    }
    
};
