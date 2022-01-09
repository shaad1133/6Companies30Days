/*
Given a set of N nuts of different sizes and N bolts of different sizes. 
There is a one-one mapping between nuts and bolts. 
Match nuts and bolts efficiently.
*/

class Solution{
public:	

   void matchPairs(char nuts[], char bolts[], int n) {
	    
       string str = "!#$%&*@^~.";

       int p = 0;

       for(int i=0;i<10;i++) {   
           for(int j=0;j<n;j++){

               if(nuts[j]==str[i]){

                   swap(nuts[j],nuts[p]);
                   bolts[p] = nuts[p];
                   p++;

                   break;
               }

           }

      }
	    
  }

};
