
/* 
Given an array of strings, return all groups of strings that are anagrams. 
The groups must be created in order of their appearance in the original array. 
*/

vector<vector<string>>Anagrams(vector<string>& list) {
          
        map<map<char,int>,vector<string>>bm; 
        
        for(int i=0;i<list.size();i++) {
            
            map<char,int>sm; 
            
            for(auto c:list[i])
                sm[c]++;
            
            bm[sm].push_back(list[i]);
            
        }
        
        vector<vector<string>>ans;
        
        for(auto i:bm) {
            
            ans.push_back(i.second);
            
        }
        
        return ans;
        
 }
