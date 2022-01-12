class Solution{
    public:
    
    vector <int> calculateSpan(int price[], int n){
       
       vector<int>v;
       
       stack<int>s;
       
       for(int i=0;i<n;i++){
           
           while(!s.empty() && price[s.top()]<=price[i])  // find next greater
                s.pop();
           
           if(s.empty())
                v.push_back(i+1);
           else 
                v.push_back(i-s.top());
                
           s.push(i);        
       }  
       
       return v;
    }

};
