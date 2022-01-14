/*
Serialization is to store a tree in an array so that it can be 
later restored and Deserialization is reading tree back from the 
array. Now your task is to complete the function serialize which 
stores the tree into an array A[ ] and deSerialize which 
deserializes the array to the tree and returns it.
*/

class Solution{
    
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) {
        
        vector<int>v;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            
            Node* tmp = q.front();
            q.pop();
            
            if(tmp==NULL){
                v.push_back(-1);
            }
            else{
                v.push_back(tmp->data);
                q.push(tmp->left);
                q.push(tmp->right);
            }
            
        }
        
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int>&A){
       
       int n = A.size();
       
       Node* root = new Node(A[0]);
       
       queue<Node*>q;
       q.push(root);
       
       int i = 1;
       
       while(!q.empty()) {
           
           Node* tmp = q.front();
           q.pop();
           
           if(A[i]!=-1){
               Node* tmp2 = new Node(A[i]);
               q.push(tmp2);
               tmp->left = tmp2;
           }
           else 
               tmp->left = NULL;
           
           i++;
           
           if(A[i]!=-1){
               Node* tmp2 = new Node(A[i]);
               q.push(tmp2);
               tmp->right = tmp2;
           }
           else 
               tmp->right = NULL;
           
           i++;
           
       }
       
       return root;
       
    }

};
