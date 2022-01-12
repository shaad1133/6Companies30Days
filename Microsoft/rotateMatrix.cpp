/*
Given a square matrix[][] of size N x N. 
The task is to rotate it by 90 degrees 
in an anti-clockwise direction without 
using any extra space.
*/


void rotate(vector<vector<int>>&matrix){
    
    int n = matrix.size();
    
    int l = 0,r = n-1;
    while(l<r){
        
        for(int i=0;i<n;i++){
            
            swap(matrix[i][l],matrix[i][r]);
            
        }
        
        l++; r--;  
        
    }
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i;j++){
            
            swap(matrix[i][j],matrix[j][i]);
            
        }
        
    }
    
}
