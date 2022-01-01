/*
An encoded string (s) is given, the task is to decode it. 
The pattern in which the strings were encoded were as follows
original string: abbbababbbababbbab 
encoded string : 3[a3[b]1[ab]]
*/

//Code
string decodedString(string s)  {
        
        stack<char> st;
        
        for (int i = 0; i < s.length(); i++) {
        
        
            if (s[i] == ']') {
                
                string temp;
                
                while (!st.empty() && st.top() != '[') {
                 
                    temp = st.top() + temp;
                    st.pop();
                    
                }
            
                st.pop();
                string num;
            
                while (!st.empty() && st.top()>='0' && st.top()<='9') {
                
                    num = st.top() + num;
                    st.pop();
                    
                }
            
                int number = stoi(num); // string to integer
                
                string repeat;
                for (int j = 0; j < number; j++)
                    repeat += temp;
                    
                for (char c : repeat)
                    st.push(c);
            }
    
            else{
            
                st.push(s[i]);
            
            }
        
        }
    
        string res;
        while (!st.empty()) {
        
            res = st.top() + res;
            st.pop();
        
        }
    
        return res;
    
}
