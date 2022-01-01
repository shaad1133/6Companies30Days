/*
Find total number of Squares in a N*N chessboard
*/

long long countSquares(long long n) {
    
    //1^2 + 2^2 + 3^2 + ... + n^2 = n(n+1)(2n+1) / 6 
    return (n * (n + 1) / 2) * (2*n + 1) / 3;
  
}
