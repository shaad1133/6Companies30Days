// Find max 10 numbers in a list having 10M entries.

// Time Complexity (nlogk) , k = 10 , n = list size


vector<int> findmaxten(list<int>l){  // list of 10M entries
    
    priority_queue<int,greater<int>,vector<int>>pq;  
    
    int i = 0;
    for(auto num:l) {
        
        if(i<10) {
          
            pq.push(num);
            i++;
        }
        else if(num > pq.top()){
          
            pq.pop();
            pq.push(num);
            
        }
    }
    
    vector<int>res;
  
    while(!pq.empty()){
      
        res.push_back(pq.top());
        pq.pop()
          
    }
  
    return res;
}
