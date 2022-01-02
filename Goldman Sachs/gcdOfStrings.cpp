/*
For two strings s and t, we say "t divides s" if and only if s = t + ... + t 
(i.e., t is concatenated with itself one or more times).
Given two strings str1 and str2, return the largest string x 
such that x divides both str1 and str2.
*/


    bool check(string str1, string str2, int len){ // helper function
        
        for(int i=0;i<str1.length();i++){
            
            if(str1[i]!=str1[i%len] || str1[i]!=str2[i%len]){
                
                return false;
                
            }
        }
        
        for(int i=0;i<str2.length();i++){
            
            if(str2[i]!=str2[i%len] || str2[i]!=str1[i%len]){
                
                return false;
                
            }
        }
        
        return true;
        
    }
    
    string gcdOfStrings(string str1, string str2) {  
        
        int N = str1.size();
        int M = str2.size();
        int m = min(N,M);
        
        for(int i = m; i > 0; i--){
            
            if(M%i==0 && N%i==0 && check(str1,str2,i)){
                
                return str1.substr(0,i);
                
            }
            
        }
        
        return "";
      
    }
