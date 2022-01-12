/*
Given an infinite number line. You start at 0 and can go either 
to the left or to the right. The condition is that in the ith 
move, youmust take i steps. Given a destination D , find the 
minimum number of steps required to reach that destination.
*/

class Solution{
public:

    int minSteps(int D) {
        
        D = abs(D);
        
        int steps = 1, sum = 0;
        
        while(sum<D){
            
            sum+=steps;
            steps++;
        }
        
        while((sum-D)%2 == 1){
            
            sum+=steps;
            steps++;
            
        }
        
        return steps-1;
        
    }
    
};
