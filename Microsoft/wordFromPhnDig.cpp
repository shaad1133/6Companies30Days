/*
Given a keypad as shown in the diagram, and an N digit number 
which is represented by array a[ ], the task is to list all 
words which are possible by pressing these numbers.
*/

class Solution{
    public:
    
    void fun(vector<string>&ans, int digits[], int index, string curr, vector<string>mappings, int N )  {
        
        if(index==N){
            
            ans.push_back(curr);
            return;
        }
        
        string letters = mappings[digits[index]];
        for(int i=0;i<letters.length();i++){
            fun(ans,digits,index+1,curr+letters[i],mappings,N);
        }
    }
    
    vector<string> possibleWords(int digits[], int N)    {
        
        vector<string>ans;
        
        vector<string>mappings({"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"});
        
        fun(ans,digits,0,"",mappings,N);
        
        return ans;
    }
    
};
