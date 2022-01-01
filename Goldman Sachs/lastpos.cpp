/*
There are n kids from 1 to n sitting in a circle.
t toys are to be distributed among them starting from pth
kid in a circle. Toy distributed in the end is damaged.
Find the kid which got the damaged toy.
*/

int kid_With_Damaged_Toy(int n, int t, int p) {  // n kids, t toys, p initial position
    
    if (t <= n - p + 1) {
      
        return t + p - 1;
      
    }
  
    t = t - (n - p + 1);
 
    if(t % n == 0) {
      
        return n;
      
    }
  
    return t % n;
  
}
