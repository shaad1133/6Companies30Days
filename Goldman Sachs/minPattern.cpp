/*
Given a pattern containing only I's and D's. I for increasing and D for decreasing.
Devise an algorithm to print the minimum number following that pattern.
Digits from 1-9 and digits can't repeat.
*/

string printMinNumberForPattern(string s){
        
        int n = s.length();
        
        string ans;
        stack<int>st;
        int num = 1;
        
        for(int i=0;i<n;i++)   {
            
            st.push(num++);
            
            if(s[i]=='I'){
                
                while(!st.empty()){
                    
                    ans.push_back('0'+ st.top());
                    st.pop();
                    
                }
            }
            
        }
        
        st.push(num);
        
        while(!st.empty()){
                    
            ans.push_back('0'+ st.top());
            st.pop();
                    
        }
        
        return ans;
}
