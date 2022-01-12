/*
Given a binary tree, connect the nodes that are at same level. 
You'll be given an addition nextRight pointer for the same.
Initially, all the nextRight pointers point to garbage values. 
Your function should set these pointers to point next right 
for each node.

       10                       10 ------> NULL
      / \                       /      \
     3   5       =>     3 ------> 5 --------> NULL
    / \     \               /  \           \
   4   1   2          4 --> 1 -----> 2 -------> NULL
*/

struct Node{

   int data;
   Node *left,  *right;
   Node *nextRight; 
 
}; 


class Solution{
    public:
    
    // Call Function
    void connect(Node *root){
       
       if(!root) return;
       
       queue<Node*>q;
       q.push(root);
       int cnt = 1;
       
       while(!q.empty()){
           
           int x = 0;
           
           for(int i=0;i<cnt;i++){
               
               Node*temp = q.front();
               q.pop();
               
               if(i<cnt-1) q.front()->nextRight = temp;
               
               if(temp->right){
                   q.push(temp->right);
                   x++;
               }

               if(temp->left){
                   q.push(temp->left);
                   x++;
               }
           }
           
           cnt = x;
           
       }
       
    }    
      
};
