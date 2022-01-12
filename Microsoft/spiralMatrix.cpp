
/*
Given a matrix of size r*c. Traverse the matrix in spiral form.
*/

class Solution{   
    public: 
  
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) {
        
        vector<int>ans;
        
        int top = -1, bottom = r, left = -1, right = c;
        int i, j;
        
        while(true)   {
            
            i=top+1; j=left+1;
            while(j<right){
                ans.push_back(matrix[i][j++]);
            }
            top++;
            if(top+1==bottom)
                break;
            
            i=top+1; j=right-1;
            while(i<bottom){
                ans.push_back(matrix[i++][j]);
            }
            right--;
            if(left+1==right)
                break;
                
            i=bottom-1; j=right-1;
            while(j>left){
                ans.push_back(matrix[i][j--]);
            }
            bottom--;
            if(top+1==bottom)
                break;
            
            i=bottom-1; j=left+1;
            while(i>top){
                ans.push_back(matrix[i--][j]);
            }
            left++;
            if(left+1==right)
                break;
        }
        
        
        return ans;
    }

};
