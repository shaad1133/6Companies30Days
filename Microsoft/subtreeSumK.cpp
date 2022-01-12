/*
Given a binary tree and an integer X. 
Your task is to complete the function countSubtreesWithSumX() 
that returns the count of the number of subtress having 
total node’s data sum equal to the value X.
*/

//Helper function
int countHelper(Node* root, int sum, int &count){
    
    if(root==NULL) 
        return 0;
    
    int subTreeSum = root->data;
    
    if(root->left)
        subTreeSum+= countHelper(root->left,sum,count);
        
    if(root->right)
        subTreeSum+= countHelper(root->right,sum,count);  
    
    if(subTreeSum==sum)
        count++;
    
    return subTreeSum;    
        
}

//Call Function
int countSubtreesWithSumX(Node* root, int sum){
	
    int count = 0;
	 
    countHelper(root, sum, count);
	
    return count;
	
}
