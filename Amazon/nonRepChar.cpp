/*
Given an input stream of A of n characters consisting only of lower case alphabets. 
The task is to find the first non repeating character, each time a character is 
inserted to the stream. If there is no such character then append '#' to the answer.
*/


string FirstNonRepeating(string a){

	
       string ans;
		    
       queue<char>q;
       map<char,int>m;
		  
       for(int i=0;i<a.length();i++){
		       
           m[a[i]]++;
           if(m[a[i]]==1)
               q.push(a[i]);

           while(!q.empty() && m[q.front()]!=1)
               q.pop();

           if(q.empty())
               ans.push_back('#');
           else
               ans.push_back(q.front());
		        
       }
		
       return ans;    
       

}
