/*
Given a string, Your task is to  complete the function encode that 
returns the run length encoded string for the given string.
eg- if the input string is “wwwwaaadexxxxxx”, then the function 
should return “w4a3d1e1x6″.
*/

//Solution

string encode(string str){     
  
    string res = ""; 
    int n = str.length();
    
    int i = 0;
    
    while(i<n) {

        res.push_back(str[i]);
        int count = 1;
        int j = i+1;
         
        while(j<n && str[i]==str[j]){ 
            
            count++;
            j++;
            
        }
        
        res+= to_string(count);
        i = j;
        
    }
    
    return res;
    
}
