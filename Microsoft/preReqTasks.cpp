/*
There are a total of N tasks, labeled from 0 to N-1. 
Some tasks may have prerequisites, for example to 
do task 0 you have to first complete task 1, which
is expressed as a pair: [0, 1]
Given the total number of tasks N and a list of
prerequisite pairs P, find if it is possible to 
finish all tasks
*/

class Solution {
public:

    bool dfs(map<int,list<int>>&l, vector<bool>&vis, vector<bool>&st, int node){
        
        vis[node] = true;
        st[node] = true;
        
        for(auto nbr:l[node]){
            
            if(st[nbr]==true)
                return true;
            else if(!vis[nbr] && dfs(l,vis,st,nbr))
                return true;
                
        }
        
        st[node] = false;
        return false;
        
    }

	bool isPossible(int N, vector<pair<int,int>>& prerequisites) {
	    
	    map<int,list<int>>l;
	    
	    vector<bool>vis(N,false);
	    vector<bool>st(N,false);
	    
	    for(auto p:prerequisites){
	        
	        l[p.second].push_back(p.first);
	        
	    }
	    
	    for(int i=0;i<N;i++){
	        
	        if(!vis[i] && dfs(l,vis,st,i)){
	            
	            return false;
	        }
	        
	    }
	    
	    return true;
	    
	}
	
};
