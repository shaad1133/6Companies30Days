/*
Given two rectangles, find if the given two rectangles overlap or not. 
(L1 and R1 are the extreme points of the first rectangle and L2 and R2 
 are the extreme points of the second rectangle)
*/


// Solution

int doOverlap(int L1[], int R1[], int L2[], int R2[])    {
        
     if((L2[0] > R1[0]) || (R2[0] < L1[0]) || (R2[1] > L1[1]) || (L2[1] < R1[1])){
       
          return 0;
       
     }
  
     return 1;
}
