class Solution {
public:
    double myPow(double x, int n) {
       if (n == 0)
           return 1;
      
       if (n == -1)
           return 1/x;
      
       if (n == 1)
           return x;
      
       // 2^10 = ( 2^2)^5 = (2 * 2)^5
       if (n % 2 == 0)
           return myPow(x*x, n/2);
       else 
           return x * myPow(x*x, (n-1)/2);  
        // 2^11 = 2 * ( 2 * 2)^5        
    }
};